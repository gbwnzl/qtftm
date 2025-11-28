#include "srs560.h"

// Srs560::Srs560() : d_gain(9)
Srs560::Srs560(QObject *parent) : d_gain(9)

{
    d_subKey = QString("srs560");
    d_prettyName = QString("SRS 560 Low-Noise Preamplifier");
    d_threaded = false;
    d_commType = CommunicationProtocol::Rs232;
    d_isCritical = false;

    QSettings s(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());
    s.beginGroup(d_key);
    s.beginGroup(d_subKey);
    d_gain = s.value(QString("gain"),12).toInt();	//Default is 1E+3
    s.setValue(QString("gain"),d_gain);
    s.endGroup();
    s.endGroup();
    s.sync();
}

bool Srs560::testConnection()
{
    if(!p_comm->testConnection())
    {
        emit connected(false);
        return false;
    }

    QByteArray resp = p_comm->queryCmd(QString("*IDN\r\n"));
    if(!resp.contains(QByteArray("*IDN")))	//So for reasons, the 560 just echoes the inbound command and doesnt reply. There doesnt appear to be a real way to verify settings 
    {
        d_errorString = QString("Received invalid response to model query. Response: %1").arg(QString(resp));
        return false;
    }

	//So far I have not found a way to query this device, it just responds with whatever command you send it
	//This means there is no way to verify it is set properly, hence the warning.
	//That being said, if it is replying and your commands are right, it is a safe bet it's working
    emit logMessage(QString("Please manually verify LN Preamp Gain. It cannot be verified remotely"),QtFTM::LogWarning);
	
    emit connected();
    return true;
}

void Srs560::initialize()
{
    p_comm->setReadOptions(1000,true,QByteArray("\r\n"));
    p_comm->initialize();
    testConnection();
    hwSetDefaultGain();
}

int Srs560::hwSetDefaultGain()
{
    return hwSetGain(d_gain);
}

int Srs560::hwSetGain(int gain)
{
//Dead simple command
//There is no signal emitted by this because we can't verify the setting was implemented. When the command is sent, we just have to trust it
//So the UI just reflects this and doesnt need a signal or anything

    QByteArray resp = p_comm->queryCmd(QString("GAIN %1\r\n").arg(gain));
	d_gain = gain;
    if (!resp.contains(QByteArray("GAIN")))
    {
        emit logMessage(QString("Bad SRS560 response."),QtFTM::LogError);
        return 0;
    }
    return gain;
}
