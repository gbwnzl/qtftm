#include "lnpreamp.h"

LowNoisePreamp::LowNoisePreamp(QObject *parent) : HardwareObject(parent)
{
	d_key = QString("lnpreamp");
	d_isCritical = false;
}

LowNoisePreamp::~LowNoisePreamp()
{

}

int LowNoisePreamp::setGain(int gain)
{
//fairly overkill abstraction, but here we are.
	if(gain < 0 || gain > 14)
    {
		gain = 9;
		emit logMessage(QString("Requested gain out of range. Setting to 1.0E+3."), QtFTM::LogWarning);
    }
    int gainVal = hwSetGain (gain);
    emit gainUpdate(gainVal);
    return gain;
}

int LowNoisePreamp::setDefaultGain(void)
{
//fairly overkill abstraction, but here we are.
    int gainVal = hwSetDefaultGain ();
    emit gainUpdate(gainVal);
    return gainVal;
}

