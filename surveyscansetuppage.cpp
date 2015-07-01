#include "surveyscansetuppage.h"
#include <QDateTime>
#include <math.h>
#include <QSettings>
#include <QApplication>

SurveyScanSetupPage::SurveyScanSetupPage(SingleScanWidget *ssw, QWidget *parent) :
     QWizardPage(parent)
{
	setTitle(QString("Survey Scan Setup"));
	setSubTitle(QString("These settings will be used for the survey. The FT frequency will be set automatically."));

	//make default settings
	surveyScanSsw = new SingleScanWidget(this);
    surveyScanSsw->setFromScan(ssw->toScan());
	surveyScanSsw->setFtmFreq(field(QString("surveyStart")).toDouble());
	surveyScanSsw->ui->ssFtmDoubleSpinBox->setEnabled(false);
//	surveyScanSsw->setAttn(ssw->attn());
//	surveyScanSsw->setDrFreq(ssw->drFreq());
//	surveyScanSsw->setDrPower(ssw->drPower());
//	surveyScanSsw->setPulseConfig(ssw->pulseConfig());

	registerField(QString("surveyScanShots"),surveyScanSsw->ui->ssShotsSpinBox);
	QVBoxLayout *vl = new QVBoxLayout(this);
	vl->addWidget(surveyScanSsw);

	timeLabel = new QLabel(this);
	timeLabel->setAlignment(Qt::AlignCenter);
	vl->addWidget(timeLabel,0,Qt::AlignCenter);

	setLayout(vl);

	connect(surveyScanSsw->ui->ssShotsSpinBox,static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
		   this,&SurveyScanSetupPage::updateLabel);
}

int SurveyScanSetupPage::nextId() const
{
	return BatchWizard::Page_SurveySummary;
}

void SurveyScanSetupPage::initializePage()
{
	updateLabel();
}

bool SurveyScanSetupPage::validatePage()
{
    Scan scan = surveyScanSsw->toScan();

	//get settings from widget and make scan
//	scan.setTargetShots(surveyScanSsw->shots());
//	scan.setFtFreq(surveyScanSsw->ftmFreq());
//	scan.setAttenuation(surveyScanSsw->attn());
//	scan.setDrFreq(surveyScanSsw->drFreq());
//	scan.setDrPower(surveyScanSsw->drPower());
//	scan.setPulseConfiguration(surveyScanSsw->pulseConfig());

	emit surveyScan(scan);

	return true;
}

void SurveyScanSetupPage::updateLabel()
{
	surveyScanSsw->ui->ssFtmDoubleSpinBox->setValue(field(QString("surveyStart")).toDouble());
	bool hasCal = field(QString("surveyCal")).toBool();
	double start = field(QString("surveyStart")).toDouble();
	double stop = field(QString("surveyStop")).toDouble();
	double step = (double)field(QString("surveyStep")).toInt()/1000.0;
	int surveyScans = (int)ceil(fabs(stop-start)/step)+1.0;
	int calScans = 0;
	if(hasCal)
	{
		int scansPerCal = field(QString("surveyScansPerCal")).toInt();
		if(scansPerCal>0)
			calScans = (int)ceil( (double)surveyScans/(double)scansPerCal ) + 1;
		else
			calScans = 2;
	}

	///TODO: update time estimates
	double calTuneTime = calScans*10.0;
	double scanTuneTime = surveyScans*1.0;

	double calIntegrationTime = 0.0;
	QSettings set(QSettings::SystemScope,QApplication::organizationName(),QApplication::applicationName());
	double repRate = set.value(QString("pulseGenerator/repRate"),6.0).toDouble();

	if(hasCal)
		calIntegrationTime = (double)field(QString("surveyCalShots")).toInt()*calScans/repRate;

	double scanIntegrationTime = (double)surveyScans*surveyScanSsw->shots()/repRate;
	double totalTime = calTuneTime + scanTuneTime + calIntegrationTime + scanIntegrationTime;

	QDateTime dt = QDateTime::currentDateTime().addSecs((int)totalTime);
	int h = (int)floor(totalTime/3600.0);
	int m = (int)totalTime%3600/60;
	int s = (int)totalTime%60;

	QString text;
	text.append(QString("<table><tr><th colspan=2>Time estimates</th></tr>"));
	text.append(QString("<tr><td>Total time: </td> <td> %1h %2m %3s</td></tr>").arg(h).arg(m).arg(s));
	text.append(QString("<tr><td>Completed at: </td> <td> %1</td></tr>").arg(dt.toString()));
	text.append(QString("<tr><td>Cal tuning: </td> <td> %1 %</td></tr>").arg(calTuneTime/totalTime*100.0,0,'f',1));
	text.append(QString("<tr><td>Survey tuning: </td> <td> %1 %</td></tr>").arg(scanTuneTime/totalTime*100.0,0,'f',1));
	text.append(QString("<tr><td>Cal integration: </td> <td> %1 %</td></tr>").arg(calIntegrationTime/totalTime*100.0,0,'f',1));
	text.append(QString("<tr><td>Survey integration: </td> <td> %1 %</td></tr>").arg(scanIntegrationTime/totalTime*100.0,0,'f',1));
	text.append(QString("</table>"));

	timeLabel->setText(text);

}
