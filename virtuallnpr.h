#ifndef VIRTUALLNPR_H
#define VIRTUALLNPR_H

#include "lnpreamp.h"

class VirtualLNPR : public LowNoisePreamp
{
public:
    explicit VirtualLNPR(QObject *parent = nullptr);
    ~VirtualLNPR();

	// HardwareObject interface
public slots:
	bool testConnection();
	void initialize();

	// HvPowerSupply interface
protected:
    int hwSetDefaultGain(void);
    int hwSetGain(int gain);

private:
    int d_gain;
    QString d_errorString;
};

#endif // VIRTUALLNPR_H
