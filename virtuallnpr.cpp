#include "virtuallnpr.h"

VirtualLNPR::VirtualLNPR(QObject *parent) : d_gain(9)
{
	d_subKey = QString("virtual");
    d_prettyName = QString("Virtual Low Noise Preamplifier");

	//this code should be copied into all implementations; replace limits appropriately
    QSettings s(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());
    s.beginGroup(d_key);
    s.beginGroup(d_subKey);
    d_gain = s.value(QString("gain"),12).toInt();	//Default is 1E+3
    s.setValue(QString("gain"),d_gain);
    s.endGroup();
    s.endGroup();
    s.sync();
}

VirtualLNPR::~VirtualLNPR()
{

}

bool VirtualLNPR::testConnection()
{
	emit connected(true);
	return true;
}

void VirtualLNPR::initialize()
{
	testConnection();
}

int VirtualLNPR::hwSetDefaultGain(void)
{
    d_gain = 9;
    return 9;
}

int VirtualLNPR::hwSetGain(int gain)
{
    d_gain = gain;
    return gain;
}

