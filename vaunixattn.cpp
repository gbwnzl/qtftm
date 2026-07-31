#include "vaunixattn.h"

#include <QSettings>
#include <QApplication>

#include "ldadrvr.h"   // already extern "C"-wrapped -- do NOT add your own

VaunixAttn::VaunixAttn(QObject *parent) :
    Attenuator(parent)
{
    d_subKey = QString("vaunix");
    d_prettyName = QString("Vaunix Lab Brick LDA-203B Attenuator");
    d_commType = CommunicationProtocol::Tcp;
    d_threaded = false;

    QSettings s(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());

    //seed the keys the communication dialog edits, so it has something to show
    QString ipStr = s.value(QString("%1/%2/ip").arg(d_key).arg(d_subKey),
                            QString()).toString();
    int port = s.value(QString("%1/%2/port").arg(d_key).arg(d_subKey),80).toInt();

    d_min = s.value(QString("%1/%2/min").arg(d_key).arg(d_subKey),0).toInt();
    d_max = s.value(QString("%1/%2/max").arg(d_key).arg(d_subKey),63).toInt();
    d_workingFreq = s.value(QString("%1/%2/workingFreqMHz").arg(d_key).arg(d_subKey),0).toInt();

    s.setValue(QString("%1/%2/ip").arg(d_key).arg(d_subKey),ipStr);
    s.setValue(QString("%1/%2/port").arg(d_key).arg(d_subKey),port);
    s.setValue(QString("%1/%2/min").arg(d_key).arg(d_subKey),d_min);
    s.setValue(QString("%1/%2/max").arg(d_key).arg(d_subKey),d_max);
    s.setValue(QString("%1/%2/workingFreqMHz").arg(d_key).arg(d_subKey),d_workingFreq);

    //the values below are used by the program to set limits, and will be overwritten by other
    //implementations at runtime if they are selected at compile time
    s.setValue(QString(d_key).append("/min"),d_min);
    s.setValue(QString(d_key).append("/max"),d_max);
    s.sync();

    d_unitsPerDb = 20.0;
    //NB: d_ip is deliberately not cached here -- refreshIp() reads it on every connection
    //attempt so that edits made in the communication dialog take effect without a restart

    fnLDA_Init();
    fnLDA_SetTestMode(false);
}

VaunixAttn::~VaunixAttn()
{
    if(!d_ip.isEmpty())
        fnLDA_CloseDevice(ip());
}

void VaunixAttn::refreshIp()
{
    QSettings s(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());
    QByteArray newIp = s.value(QString("%1/%2/ip").arg(d_key).arg(d_subKey),QString()).toString().toLatin1();

    if(newIp == d_ip)
        return;

    //the address changed under us -- drop the old socket before switching
    if(!d_ip.isEmpty())
        fnLDA_CloseDevice(ip());

    d_ip = newIp;
}

bool VaunixAttn::testConnection()
{
    refreshIp();

    //the driver's internal validator strcpy's into a char[16], so guard the length here
    if(d_ip.isEmpty() || d_ip.size() > 15)
    {
        emit connected(false,QString("Invalid IP address: \"%1\"").arg(QString(d_ip)));
        return false;
    }

    //make sure a stale socket from a previous attempt is gone
    fnLDA_CloseDevice(ip());

    if(fnLDA_InitDevice(ip()) != STATUS_OK)
    {
        emit connected(false,QString("Could not open a connection to %1.").arg(QString(d_ip)));
        return false;
    }

    if(fnLDA_CheckDeviceReady(ip()) != STATUS_OK)
    {
        emit connected(false,QString("Device at %1 is not ready.").arg(QString(d_ip)));
        return false;
    }

    char model[MAX_MODELNAME];
    memset(model,0,MAX_MODELNAME);
    int sn = 0;

    if(fnLDA_GetModelName(ip(),model) != STATUS_OK || fnLDA_GetSerialNumber(ip(),&sn) != STATUS_OK)
    {
        emit connected(false,QString("Null response to ID query."));
        return false;
    }

    QString modelStr = QString(model).trimmed();
    if(!modelStr.startsWith(QString("A-203B3B")))
    {
        emit connected(false,QString("ID response invalid. Received: %1").arg(modelStr));
        return false;
    }

    emit logMessage(QString("ID response: %1, serial number %2").arg(modelStr).arg(sn));

    //trust the device over the settings file for its own limits
    int lo = 0, hi = 0;
    if(fnLDA_GetMinAttenuation(ip(),&lo) == STATUS_OK && fnLDA_GetMaxAttenuation(ip(),&hi) == STATUS_OK)
    {
        d_min = static_cast<double>(lo)/d_unitsPerDb;
        d_max = static_cast<double>(hi)/d_unitsPerDb;

        QSettings s(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());
        s.setValue(QString("%1/%2/min").arg(d_key).arg(d_subKey),static_cast<int>(d_min));
        s.setValue(QString("%1/%2/max").arg(d_key).arg(d_subKey),static_cast<int>(d_max));
        s.setValue(QString(d_key).append("/min"),static_cast<int>(d_min));
        s.setValue(QString(d_key).append("/max"),static_cast<int>(d_max));
        s.sync();
    }

    //the LDA can power up with the signal path muted
    fnLDA_SetRFOn(ip(),true);

    if(d_workingFreq > 0)
    {
        //the driver wants 100 kHz units; settings are in MHz
        if(fnLDA_SetWorkingFrequency(ip(),d_workingFreq*10) != STATUS_OK)
            emit logMessage(QString("Could not set working frequency to %1 MHz; "
                                    "attenuation calibration may be off.").arg(d_workingFreq),
                            QtFTM::LogWarning);
    }

    if(readAttn() < 0)
    {
        emit connected(false);
        return false;
    }

    emit connected();
    return true;
}

void VaunixAttn::initialize()
{
    Attenuator::initialize();
    testConnection();
}

int VaunixAttn::setAttn(int a)
{
    if(a < d_min || a > d_max)
    {
        emit logMessage(QString("Requested attenuation (%1) is outside valid range (%2 - %3).")
                            .arg(a).arg(d_min).arg(d_max));
        return -1;
    }

    if(d_ip.isEmpty())
    {
        emit hardwareFailure();
        emit logMessage(QString("No attenuator address configured."),QtFTM::LogError);
        return -1;
    }

    if(fnLDA_SetAttenuation(ip(),static_cast<int>(a*d_unitsPerDb)) != STATUS_OK)
    {
        emit hardwareFailure();
        emit logMessage(QString("Could not set attenuation to %1 dB.").arg(a),QtFTM::LogError);
        return -1;
    }

    //no *OPC? equivalent; verify by reading back
    int out = readAttn();
    if(out >= 0 && out != a)
    {
        emit hardwareFailure();
        emit logMessage(QString("Attenuation readback (%1 dB) does not match the commanded value (%2 dB).")
                            .arg(out).arg(a),QtFTM::LogError);
        return -1;
    }

    return out;
}

int VaunixAttn::readAttn()
{
    if(d_ip.isEmpty())
    {
        emit hardwareFailure();
        emit logMessage(QString("No attenuator address configured."),QtFTM::LogError);
        return -1;
    }

    int raw = 0;
    if(fnLDA_GetAttenuation(ip(),&raw) != STATUS_OK)
    {
        emit hardwareFailure();
        emit logMessage(QString("Did not respond to attenuation query."),QtFTM::LogError);
        return -1;
    }

    if(raw < 0)
    {
        emit hardwareFailure();
        emit logMessage(QString("Invalid response to attenuation query (response: %1)").arg(raw),QtFTM::LogError);
        return -1;
    }

    double db = static_cast<double>(raw)/d_unitsPerDb;
    int a = qRound(db);

    if(!qFuzzyCompare(db,static_cast<double>(a)))
        emit logMessage(QString("Device reports %1 dB, which is not a whole number of dB. "
                                "Rounding to %2 dB.").arg(db,0,'f',2).arg(a),QtFTM::LogWarning);

    emit attnUpdate(a);
    return a;
}
