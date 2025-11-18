#ifndef DSOX3102T_H
#define DSOX3102T_H

#include "oscilloscope.h"

#include <QTime>
#include <QByteArray>

class QTcpSocket;

class DSOX3102T : public Oscilloscope
{
    Q_OBJECT
public:
    explicit DSOX3102T(QObject *parent = nullptr);
    ~DSOX3102T();

public slots:
    void initialize() override;
    bool testConnection() override;
    void configure() override;
    void setResolution() override;

private slots:
    void replyReceived();
    void sendCurveQuery();
    void wakeTheFUp();

    void startStreamingMode();        // Continuous RUN mode
    bool acquireAndReadPreamble();    // Single-shot preamble fetch



private:
    bool d_streamingMode = false;
    bool d_preambleCached = false;

    int d_refreshIntervalMs = 50;     // ms between waveform requests
    QTimer* d_streamTimer = nullptr;

    QTcpSocket *p_socket;

    QByteArray d_waveformPrefix;
    QByteArray d_response;
    bool d_headerHashFound;
    int d_binaryDataLength;
    bool d_resolutionChangePending;

    QTime d_responseTimeout;
    bool d_waitingForReply;
    bool d_waitingForWakeUp;
};

#endif // DSOX3102T_H
