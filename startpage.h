#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QWizardPage>
#include <QRadioButton>
#include <QCheckBox>

class StartPage : public QWizardPage
{
	Q_OBJECT
public:
	explicit StartPage(QWidget *parent = nullptr);
	int nextId() const;
	bool validatePage();
	
signals:
	void sleepOnComplete(bool);
	
public slots:

private:
	QRadioButton *surveyButton;
	QRadioButton *drButton;
	QRadioButton *batchButton;
	QCheckBox *sleepCheckBox;
	
};

#endif // STARTPAGE_H
