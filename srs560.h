#ifndef SRS560_H
#define SRS560_H

#include "lnpreamp.h"

class Srs560 : public LowNoisePreamp
{
    Q_OBJECT
public:
    Srs560(QObject *parent = nullptr);

    // HardwareObject interface
public slots:
    bool testConnection();
    void initialize();

    // LowNoisePreamp interface
protected:
    int hwSetDefaultGain(void);
    int hwSetGain(int gain);

private:
    int d_gain;
    QString d_errorString;
};

#endif // SRS560_H
