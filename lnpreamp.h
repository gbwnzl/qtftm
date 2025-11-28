#ifndef LNPREAMP_H
#define LNPREAMP_H

#include "hardwareobject.h"

class LowNoisePreamp : public HardwareObject
{
	Q_OBJECT
public:
	explicit LowNoisePreamp(QObject *parent = nullptr);
    virtual ~LowNoisePreamp();

public slots:
    int setGain(int gain);
    int setDefaultGain(void);

signals:
    void gainUpdate(int);

protected:
    virtual int hwSetGain(int gain) =0;
    virtual int hwSetDefaultGain(void) =0;

};

#ifdef QTFTM_LNPR
#if QTFTM_LNPR == 1
#include "srs560.h"
class Srs560;
typedef Srs560 LowNoisePreampHardware;
#else
#include "virtuallnpr.h"
class VirtualLNPreamp;
typedef VirtualLNPreamp LowNoisePreampHardware;
#endif
#endif

#endif // LNPREAMP_H
