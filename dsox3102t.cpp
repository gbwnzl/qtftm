#include "dsox3102t.h"

#include <QTcpSocket>
#include <QByteArray>
#include <QTimer>
#include <QThread>
#include <QSettings>
#include <QApplication>
#include <QDateTime>

DSOX3102T::DSOX3102T(QObject *parent) :
    Oscilloscope(parent)
{
    d_subKey = "dsox3102t";
    d_prettyName = "DSOX3102T Oscilloscope";
    d_commType = CommunicationProtocol::Tcp;
}

DSOX3102T::~DSOX3102T()
{
    if (p_socket && p_socket->state() == QAbstractSocket::ConnectedState)
        p_comm->writeCmd(":SYSTEM:LOCK OFF");
}

void DSOX3102T::initialize()
{
    p_comm->setReadOptions(5000, true, "\n");
    p_comm->initialize();

    QThread::msleep(100);

    p_socket = dynamic_cast<QTcpSocket*>(p_comm->device());

    // (optional) flush any stale data
    if (p_socket && p_socket->bytesAvailable())
        p_socket->readAll();

    testConnection();
}

bool DSOX3102T::testConnection()
{
    d_waitingForWakeUp = false;
    setActive(false);
    disconnect(p_socket, &QIODevice::readyRead, this, &DSOX3102T::replyReceived);

    if (!p_comm->testConnection()) {
        emit connected(false);
        return false;
    }

    QByteArray resp = p_comm->queryCmd("*IDN?");

    if (resp.isEmpty()) {
        emit connected(false, "Did not respond to ID query.");
        return false;
    }

    if (!resp.startsWith("KEYSIGHT TECHNOLOGIES,DSO-X 3102T")) {
        emit connected(false, QString("ID response invalid. Response: %1 (Hex: %2)")
                           .arg(QString(resp)).arg(QString(resp.toHex())));
        return false;
    }

    emit logMessage(QString("ID response: %1").arg(QString(resp)));

    // Stop any running acquisition
    p_comm->writeCmd(":STOP");
    QThread::msleep(50);

    configure();

    if (p_socket->bytesAvailable())
        p_socket->readAll();

    d_headerHashFound = false;
    d_binaryDataLength = -1;

    setResolution();

    acquireAndReadPreamble();

    if (!acquireAndReadPreamble()) {
        emit logMessage("Failed to read preamble after connection.", QtFTM::LogError);
    }

    setActive(true);
    connect(p_socket, &QIODevice::readyRead, this, &DSOX3102T::replyReceived, Qt::UniqueConnection);

    emit connected();
    return true;
}

void DSOX3102T::configure()
{
    // p_comm->writeCmd("*RST");
    p_comm->writeCmd(":SYSTEM:LOCK OFF");
    p_comm->writeCmd(":STOP");

    // Channel 1 config
    p_comm->writeCmd(":CHANNEL1:COUPLING DC");
    p_comm->writeCmd(":CHANNEL1:OFFSET 0.0");
    p_comm->writeCmd(":CHANNEL1:SCALE 2.5");
    p_comm->writeCmd(":CHANNEL1:UNIT VOLT");

    // Trigger config
    p_comm->writeCmd(":TRIGGER:MODE EDGE");
    p_comm->writeCmd(":TRIGGER:EDGE:SLOPE POSITIVE");
    p_comm->writeCmd(":TRIGGER:EDGE:SOURCE CHAN1");
    p_comm->writeCmd(":TRIGGER:EDGE:LEVEL 4.0,CHAN1");
    p_comm->writeCmd(":TRIGGER:SWEEP NORMAL");

    // Timebase & data setup
    p_comm->writeCmd(":TIMEBASE:REFERENCE LEFT");
    p_comm->writeCmd(":TIMEBASE:POSITION 0");

    p_comm->writeCmd(":WAVEFORM:SOURCE CHAN1");
    p_comm->writeCmd(":WAVEFORM:POINTS:MODE RAW");
    p_comm->writeCmd(":WAVEFORM:FORMAT WORD");
    p_comm->writeCmd(":WAVEFORM:BYTEORDER MSBFIRST");
    p_comm->writeCmd(":WAVEFORM:UNSIGNED 0");

    p_comm->writeCmd(":ACQUIRE:TYPE NORMAL");

    if (p_socket->bytesAvailable())
        p_socket->readAll();

}

void DSOX3102T::replyReceived()
{
    if (!d_headerHashFound) {
        while (p_socket->bytesAvailable() > 0) {
            char c;
            p_socket->getChar(&c);
            if (c == '#') {
                d_response.append(c);
                d_headerHashFound = true;
                break;
            }
        }
    }

    if (d_headerHashFound && d_binaryDataLength < 0) {
        char c;
        p_socket->getChar(&c);
        bool ok = true;
        int numHeaderBytes = QByteArray(&c, 1).toInt(&ok);
        if (!ok) {
            d_headerHashFound = false;
            d_response.clear();
            return;
        }

        if (numHeaderBytes > p_socket->bytesAvailable()) {
            p_socket->ungetChar(c);
            return;
        }

        d_response.append(c);
        QByteArray numBytes = p_socket->read(numHeaderBytes);
        d_binaryDataLength = numBytes.toInt(&ok);
        if (!ok) {
            d_headerHashFound = false;
            d_binaryDataLength = -1;
            d_response.clear();
            return;
        }
        d_response.append(numBytes);
    }

    if (d_binaryDataLength > 0 && p_socket->bytesAvailable() >= d_binaryDataLength) {
        d_response.append(p_socket->readAll());
        d_headerHashFound = false;
        d_binaryDataLength = -1;
        d_waitingForReply = false;

        emit fidAcquired(QByteArray(d_waveformPrefix).append(d_response));

        if (d_resolutionChangePending)
            setResolution();
    }
}

void DSOX3102T::setResolution()
{
    if (d_waitingForReply) {
        d_resolutionChangePending = true;
        return;
    }

    disconnect(p_socket, &QIODevice::readyRead, this, &DSOX3102T::replyReceived);

    QSettings s(QSettings::SystemScope, QApplication::organizationName(), QApplication::applicationName());
    QtFTM::ScopeResolution r = (QtFTM::ScopeResolution)s.value(
                                                             QString("%1/%2/resolution").arg(d_key).arg(d_subKey),
                                                             (int)QtFTM::Res_5kHz
                                                             ).toInt();

    switch (r) {
    case QtFTM::Res_1kHz:
        p_comm->writeCmd(":TIMEBASE:RANGE 1000E-6;:ACQUIRE:POINTS 10000"); //2000000
        break;
    case QtFTM::Res_2kHz:
        p_comm->writeCmd(":TIMEBASE:RANGE 500E-6;:ACQUIRE:POINTS 2000000");
        break;
    case QtFTM::Res_10kHz:
        p_comm->writeCmd(":TIMEBASE:RANGE 100E-6;:ACQUIRE:POINTS 2000000");
        break;
    default:
        p_comm->writeCmd(":TIMEBASE:RANGE 200E-6;:ACQUIRE:POINTS 2000000");
        break;
    }

    if (p_socket->bytesAvailable())
        p_socket->readAll();

    d_resolutionChangePending = false;

    connect(p_socket, &QIODevice::readyRead, this, &DSOX3102T::replyReceived, Qt::UniqueConnection);
}

bool DSOX3102T::acquireAndReadPreamble()
{
    emit logMessage("Starting single acquisition and preamble read...");

    // Ensure stop
    p_comm->writeCmd(":STOP");

    // Configure waveform source & format (repeat what Python did)
    p_comm->writeCmd(":WAVEFORM:SOURCE CHAN1");
    p_comm->writeCmd(":WAVEFORM:POINTS:MODE RAW");
    p_comm->writeCmd(":WAVEFORM:FORMAT WORD");
    p_comm->writeCmd(":WAVEFORM:BYTEORDER MSBFIRST");
    p_comm->writeCmd(":WAVEFORM:UNSIGNED 0");

    // Arm single acquisition
    p_comm->writeCmd(":SINGLE");
    QThread::msleep(200); // give it time

    if(p_socket->state() != QTcpSocket::ConnectedState) {
        emit logMessage("Socket not connected!");
    }

    QByteArray opc;
    for(int i=0; i<5; ++i) {
        opc = p_comm->queryCmd("*OPC?"); // returns "1" when done
        if(opc.trimmed() == "1")
            break;
        QThread::msleep(100);
    }

    QByteArray preamble;
    for(int i=0; i<5; ++i) {
        preamble = p_comm->queryCmd(":WAVEFORM:PREAMBLE?");
        if(!preamble.isEmpty())
            break;
        QThread::sleep(1);
    }

    if(preamble.isEmpty()) {
        emit logMessage("Failed to read preamble after multiple attempts.", QtFTM::LogError);
    } else {
        d_waveformPrefix = preamble;
        emit logMessage(QString("Cached waveform preamble: %1").arg(QString(preamble)));
    }
}



void DSOX3102T::sendCurveQuery()
{
    if (d_waitingForWakeUp)
        return;

    if (d_acquisitionActive && d_waitingForReply && d_responseTimeout.elapsed() > 5000) {
        d_waitingForReply = false;
        emit logMessage("Scope didn't reply. Restarting in 30 seconds.", QtFTM::LogWarning);
        QTimer::singleShot(30000, this, &DSOX3102T::wakeTheFUp);
        setActive(false);
        d_waitingForWakeUp = true;
        return;
    }

    if (d_acquisitionActive && !d_waitingForReply) {
        if (p_socket->bytesAvailable())
            p_socket->readAll();

        d_response.clear();
        d_headerHashFound = false;
        d_binaryDataLength = -1;

        // // Re-acquire before each waveform query
        // p_comm->writeCmd(":SINGLE");
        // QThread::msleep(50);
        // p_comm->writeCmd(":TRIGGER:FORCE");
        // QByteArray opc = p_comm->queryCmd("*OPC?");

        // p_comm->writeCmd(":WAV:DATA? CHAN1");

        // d_responseTimeout.restart();
        // d_waitingForReply = true;
    }
}

void DSOX3102T::startStreamingMode()
{
    // TODO: implement continuous RUN mode
    emit logMessage("startStreamingMode() called (not yet implemented)");
}


void DSOX3102T::wakeTheFUp()
{
    static int retryCount = 0;
    if (retryCount >= 3) {
        emit logMessage("Scope failed repeatedly. Giving up until manual reset.", QtFTM::LogError);
        return;
    }
    retryCount++;
    if (!testConnection()) {
        emit logMessage("Scope stopped responding.", QtFTM::LogError);
        emit hardwareFailure();
    }
}

