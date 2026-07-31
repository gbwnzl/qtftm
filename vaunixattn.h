#ifndef VAUNIXATTN_H
#define VAUNIXATTN_H

#include "attenuator.h"
#include <QByteArray>

class VaunixAttn : public Attenuator
{
    Q_OBJECT
public:
    explicit VaunixAttn(QObject *parent = nullptr);
    ~VaunixAttn();

    // HardwareObject interface
public slots:
    bool testConnection();
    void initialize();

    // Attenuator interface
public slots:
    int setAttn(int a);
    int readAttn();

private:
    void refreshIp();           // re-read IP from settings; drops stale socket if it changed
    QByteArray d_ip;            // persistent buffer -- API wants char*, not const char*
    char* ip() { return d_ip.data(); }

    double d_min;
    double d_max;
    double d_unitsPerDb;        // 20.0 -- attenuation is in 0.05 dB units
    int d_workingFreq;          // MHz in settings; driver wants 100 kHz units
};

#endif // VAUNIXATTN_H
