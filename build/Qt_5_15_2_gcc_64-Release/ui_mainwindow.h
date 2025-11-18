/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <led.h>
#include <pulseconfigwidget.h>
#include "analysiswidget.h"
#include "ftplot.h"
#include "peaklistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart_Single;
    QAction *actionStart_Batch;
    QAction *actionPause;
    QAction *actionResume;
    QAction *actionAbort;
    QAction *actionPrint_Scan;
    QAction *actionPrint_Summary;
    QAction *actionSleep_Mode;
    QAction *actionCommunication;
    QAction *actionFT_Synth;
    QAction *actionDR_Synth;
    QAction *actionDf;
    QAction *actionTune_Cavity;
    QAction *actionCalibrate;
    QAction *actionTune_Up;
    QAction *actionTune_Down;
    QAction *actionView_Batch;
    QAction *actionChange_Tuning_File;
    QAction *actionGenerate_Tuning_Table;
    QAction *actionIO_Board;
    QAction *actionDelayed_Sleep;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *statusGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QSpinBox *scanSpinBox;
    QLabel *ftmLabel;
    QDoubleSpinBox *ftmDoubleSpinBox;
    QLabel *attenuationLabel;
    QSpinBox *attenuationSpinBox;
    QLabel *label_20;
    QSpinBox *taSpinBox;
    QLabel *cvLabel;
    QSpinBox *tvSpinBox;
    QLabel *label_21;
    QSpinBox *cvSpinBox;
    QLabel *dcLabel;
    QSpinBox *dcSpinBox;
    QLabel *drLabel;
    QDoubleSpinBox *drDoubleSpinBox;
    QLabel *pwrLabel;
    QDoubleSpinBox *powerDoubleSpinBox;
    QLabel *magLedLabel;
    Led *magnetLed;
    QGroupBox *flowStatusBox;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QDoubleSpinBox *pressureDoubleSpinBox;
    Led *pressureLed;
    QGroupBox *pulseConfigBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QProgressBar *shotsProgressBar;
    QLabel *label_2;
    QProgressBar *batchProgressBar;
    QTabWidget *tabWidget;
    QWidget *controlTab;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *synthControlGroup;
    QFormLayout *formLayout_2;
    QLabel *fTMLabel;
    QDoubleSpinBox *ftmControlDoubleSpinBox;
    QLabel *attnLabel;
    QSpinBox *attnControlSpinBox;
    QLabel *dRLabel;
    QDoubleSpinBox *drControlDoubleSpinBox;
    QLabel *pwrLabel_2;
    QDoubleSpinBox *pwrControlDoubleSpinBox;
    QGroupBox *environmentControlBox;
    QFormLayout *formLayout_3;
    QLabel *label_25;
    QPushButton *magnetOnOffButton;
    QLabel *dCLabel;
    QSpinBox *dcControlSpinBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gasControlGroup;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pressureControlButton;
    QDoubleSpinBox *pressureControlBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    FtPlot *peakUpPlot;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *peakUpMaxValueBox;
    QLabel *label_4;
    QSpinBox *rollingAvgsSpinBox;
    QPushButton *resetRollingAvgsButton;
    PulseConfigWidget *pulseConfigWidget;
    QWidget *displayTab;
    QVBoxLayout *verticalLayout_8;
    QSplitter *batchSplitter;
    QSplitter *splitter_5;
    AnalysisWidget *analysisWidget;
    FtPlot *acqFtPlot;
    QSplitter *batchPlotSplitter;
    QWidget *batchPlot;
    PeakListWidget *peakListWidget;
    QWidget *logTab;
    QVBoxLayout *verticalLayout;
    QTextEdit *log;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearLogButton;
    QPushButton *saveLogButton;
    QCheckBox *activateLogOnErrorBox;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuAcquisition;
    QMenu *menuSettings;
    QMenu *menuResolution;
    QMenu *menuMotor_Driver;
    QMenu *menuAttenuator;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/qtftm.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionStart_Single = new QAction(MainWindow);
        actionStart_Single->setObjectName(QString::fromUtf8("actionStart_Single"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/startsingle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Single->setIcon(icon1);
        actionStart_Batch = new QAction(MainWindow);
        actionStart_Batch->setObjectName(QString::fromUtf8("actionStart_Batch"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/startbatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Batch->setIcon(icon2);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionResume = new QAction(MainWindow);
        actionResume->setObjectName(QString::fromUtf8("actionResume"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResume->setIcon(icon4);
        actionAbort = new QAction(MainWindow);
        actionAbort->setObjectName(QString::fromUtf8("actionAbort"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/abort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbort->setIcon(icon5);
        actionPrint_Scan = new QAction(MainWindow);
        actionPrint_Scan->setObjectName(QString::fromUtf8("actionPrint_Scan"));
        actionPrint_Scan->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/printscan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Scan->setIcon(icon6);
        actionPrint_Summary = new QAction(MainWindow);
        actionPrint_Summary->setObjectName(QString::fromUtf8("actionPrint_Summary"));
        actionPrint_Summary->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/printbatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Summary->setIcon(icon7);
        actionSleep_Mode = new QAction(MainWindow);
        actionSleep_Mode->setObjectName(QString::fromUtf8("actionSleep_Mode"));
        actionSleep_Mode->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/sleep.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSleep_Mode->setIcon(icon8);
        actionCommunication = new QAction(MainWindow);
        actionCommunication->setObjectName(QString::fromUtf8("actionCommunication"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/communication.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCommunication->setIcon(icon9);
        actionFT_Synth = new QAction(MainWindow);
        actionFT_Synth->setObjectName(QString::fromUtf8("actionFT_Synth"));
        actionDR_Synth = new QAction(MainWindow);
        actionDR_Synth->setObjectName(QString::fromUtf8("actionDR_Synth"));
        actionDf = new QAction(MainWindow);
        actionDf->setObjectName(QString::fromUtf8("actionDf"));
        actionTune_Cavity = new QAction(MainWindow);
        actionTune_Cavity->setObjectName(QString::fromUtf8("actionTune_Cavity"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/peakcavity.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTune_Cavity->setIcon(icon10);
        actionCalibrate = new QAction(MainWindow);
        actionCalibrate->setObjectName(QString::fromUtf8("actionCalibrate"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/calibrate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalibrate->setIcon(icon11);
        actionTune_Up = new QAction(MainWindow);
        actionTune_Up->setObjectName(QString::fromUtf8("actionTune_Up"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/cavitymodeup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTune_Up->setIcon(icon12);
        actionTune_Down = new QAction(MainWindow);
        actionTune_Down->setObjectName(QString::fromUtf8("actionTune_Down"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/cavitymodedown.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTune_Down->setIcon(icon13);
        actionView_Batch = new QAction(MainWindow);
        actionView_Batch->setObjectName(QString::fromUtf8("actionView_Batch"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Batch->setIcon(icon14);
        actionChange_Tuning_File = new QAction(MainWindow);
        actionChange_Tuning_File->setObjectName(QString::fromUtf8("actionChange_Tuning_File"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChange_Tuning_File->setIcon(icon15);
        actionGenerate_Tuning_Table = new QAction(MainWindow);
        actionGenerate_Tuning_Table->setObjectName(QString::fromUtf8("actionGenerate_Tuning_Table"));
        actionIO_Board = new QAction(MainWindow);
        actionIO_Board->setObjectName(QString::fromUtf8("actionIO_Board"));
        actionDelayed_Sleep = new QAction(MainWindow);
        actionDelayed_Sleep->setObjectName(QString::fromUtf8("actionDelayed_Sleep"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        statusGroupBox = new QGroupBox(centralWidget);
        statusGroupBox->setObjectName(QString::fromUtf8("statusGroupBox"));
        statusGroupBox->setMinimumSize(QSize(200, 0));
        verticalLayout_3 = new QVBoxLayout(statusGroupBox);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(3);
        label_3 = new QLabel(statusGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        scanSpinBox = new QSpinBox(statusGroupBox);
        scanSpinBox->setObjectName(QString::fromUtf8("scanSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scanSpinBox->sizePolicy().hasHeightForWidth());
        scanSpinBox->setSizePolicy(sizePolicy);
        scanSpinBox->setFocusPolicy(Qt::NoFocus);
        scanSpinBox->setReadOnly(true);
        scanSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        scanSpinBox->setKeyboardTracking(false);
        scanSpinBox->setMaximum(2147483647);

        formLayout->setWidget(0, QFormLayout::FieldRole, scanSpinBox);

        ftmLabel = new QLabel(statusGroupBox);
        ftmLabel->setObjectName(QString::fromUtf8("ftmLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ftmLabel);

        ftmDoubleSpinBox = new QDoubleSpinBox(statusGroupBox);
        ftmDoubleSpinBox->setObjectName(QString::fromUtf8("ftmDoubleSpinBox"));
        sizePolicy.setHeightForWidth(ftmDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ftmDoubleSpinBox->setSizePolicy(sizePolicy);
        ftmDoubleSpinBox->setFocusPolicy(Qt::NoFocus);
        ftmDoubleSpinBox->setReadOnly(true);
        ftmDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ftmDoubleSpinBox->setKeyboardTracking(false);
        ftmDoubleSpinBox->setDecimals(3);
        ftmDoubleSpinBox->setMaximum(90000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, ftmDoubleSpinBox);

        attenuationLabel = new QLabel(statusGroupBox);
        attenuationLabel->setObjectName(QString::fromUtf8("attenuationLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, attenuationLabel);

        attenuationSpinBox = new QSpinBox(statusGroupBox);
        attenuationSpinBox->setObjectName(QString::fromUtf8("attenuationSpinBox"));
        sizePolicy.setHeightForWidth(attenuationSpinBox->sizePolicy().hasHeightForWidth());
        attenuationSpinBox->setSizePolicy(sizePolicy);
        attenuationSpinBox->setFocusPolicy(Qt::NoFocus);
        attenuationSpinBox->setReadOnly(true);
        attenuationSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        attenuationSpinBox->setKeyboardTracking(false);
        attenuationSpinBox->setMaximum(10000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, attenuationSpinBox);

        label_20 = new QLabel(statusGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_20);

        taSpinBox = new QSpinBox(statusGroupBox);
        taSpinBox->setObjectName(QString::fromUtf8("taSpinBox"));
        sizePolicy.setHeightForWidth(taSpinBox->sizePolicy().hasHeightForWidth());
        taSpinBox->setSizePolicy(sizePolicy);
        taSpinBox->setReadOnly(true);
        taSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        taSpinBox->setMaximum(10000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, taSpinBox);

        cvLabel = new QLabel(statusGroupBox);
        cvLabel->setObjectName(QString::fromUtf8("cvLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, cvLabel);

        tvSpinBox = new QSpinBox(statusGroupBox);
        tvSpinBox->setObjectName(QString::fromUtf8("tvSpinBox"));
        sizePolicy.setHeightForWidth(tvSpinBox->sizePolicy().hasHeightForWidth());
        tvSpinBox->setSizePolicy(sizePolicy);
        tvSpinBox->setReadOnly(true);
        tvSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        tvSpinBox->setMinimum(-1);
        tvSpinBox->setMaximum(2147483647);

        formLayout->setWidget(4, QFormLayout::FieldRole, tvSpinBox);

        label_21 = new QLabel(statusGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_21);

        cvSpinBox = new QSpinBox(statusGroupBox);
        cvSpinBox->setObjectName(QString::fromUtf8("cvSpinBox"));
        sizePolicy.setHeightForWidth(cvSpinBox->sizePolicy().hasHeightForWidth());
        cvSpinBox->setSizePolicy(sizePolicy);
        cvSpinBox->setReadOnly(true);
        cvSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cvSpinBox->setMinimum(-10000);
        cvSpinBox->setMaximum(1000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, cvSpinBox);

        dcLabel = new QLabel(statusGroupBox);
        dcLabel->setObjectName(QString::fromUtf8("dcLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, dcLabel);

        dcSpinBox = new QSpinBox(statusGroupBox);
        dcSpinBox->setObjectName(QString::fromUtf8("dcSpinBox"));
        sizePolicy.setHeightForWidth(dcSpinBox->sizePolicy().hasHeightForWidth());
        dcSpinBox->setSizePolicy(sizePolicy);
        dcSpinBox->setFocusPolicy(Qt::NoFocus);
        dcSpinBox->setReadOnly(true);
        dcSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dcSpinBox->setKeyboardTracking(false);
        dcSpinBox->setMinimum(-10000);
        dcSpinBox->setMaximum(10000);

        formLayout->setWidget(6, QFormLayout::FieldRole, dcSpinBox);

        drLabel = new QLabel(statusGroupBox);
        drLabel->setObjectName(QString::fromUtf8("drLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, drLabel);

        drDoubleSpinBox = new QDoubleSpinBox(statusGroupBox);
        drDoubleSpinBox->setObjectName(QString::fromUtf8("drDoubleSpinBox"));
        sizePolicy.setHeightForWidth(drDoubleSpinBox->sizePolicy().hasHeightForWidth());
        drDoubleSpinBox->setSizePolicy(sizePolicy);
        drDoubleSpinBox->setFocusPolicy(Qt::NoFocus);
        drDoubleSpinBox->setReadOnly(true);
        drDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        drDoubleSpinBox->setKeyboardTracking(false);
        drDoubleSpinBox->setDecimals(4);
        drDoubleSpinBox->setMinimum(-10.000000000000000);
        drDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(7, QFormLayout::FieldRole, drDoubleSpinBox);

        pwrLabel = new QLabel(statusGroupBox);
        pwrLabel->setObjectName(QString::fromUtf8("pwrLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, pwrLabel);

        powerDoubleSpinBox = new QDoubleSpinBox(statusGroupBox);
        powerDoubleSpinBox->setObjectName(QString::fromUtf8("powerDoubleSpinBox"));
        sizePolicy.setHeightForWidth(powerDoubleSpinBox->sizePolicy().hasHeightForWidth());
        powerDoubleSpinBox->setSizePolicy(sizePolicy);
        powerDoubleSpinBox->setFocusPolicy(Qt::NoFocus);
        powerDoubleSpinBox->setReadOnly(true);
        powerDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        powerDoubleSpinBox->setKeyboardTracking(false);
        powerDoubleSpinBox->setDecimals(1);
        powerDoubleSpinBox->setMinimum(-100.000000000000000);

        formLayout->setWidget(8, QFormLayout::FieldRole, powerDoubleSpinBox);

        magLedLabel = new QLabel(statusGroupBox);
        magLedLabel->setObjectName(QString::fromUtf8("magLedLabel"));
        magLedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::LabelRole, magLedLabel);

        magnetLed = new Led(statusGroupBox);
        magnetLed->setObjectName(QString::fromUtf8("magnetLed"));
        magnetLed->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(9, QFormLayout::FieldRole, magnetLed);


        verticalLayout_3->addLayout(formLayout);

        flowStatusBox = new QGroupBox(statusGroupBox);
        flowStatusBox->setObjectName(QString::fromUtf8("flowStatusBox"));
        gridLayout_2 = new QGridLayout(flowStatusBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_13 = new QLabel(flowStatusBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        pressureDoubleSpinBox = new QDoubleSpinBox(flowStatusBox);
        pressureDoubleSpinBox->setObjectName(QString::fromUtf8("pressureDoubleSpinBox"));
        pressureDoubleSpinBox->setReadOnly(true);
        pressureDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pressureDoubleSpinBox->setKeyboardTracking(false);

        gridLayout_2->addWidget(pressureDoubleSpinBox, 0, 1, 1, 1);

        pressureLed = new Led(flowStatusBox);
        pressureLed->setObjectName(QString::fromUtf8("pressureLed"));

        gridLayout_2->addWidget(pressureLed, 0, 2, 1, 1);

        pressureDoubleSpinBox->raise();
        pressureLed->raise();
        label_13->raise();

        verticalLayout_3->addWidget(flowStatusBox);

        pulseConfigBox = new QGroupBox(statusGroupBox);
        pulseConfigBox->setObjectName(QString::fromUtf8("pulseConfigBox"));

        verticalLayout_3->addWidget(pulseConfigBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(statusGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        shotsProgressBar = new QProgressBar(statusGroupBox);
        shotsProgressBar->setObjectName(QString::fromUtf8("shotsProgressBar"));
        shotsProgressBar->setValue(24);

        verticalLayout_2->addWidget(shotsProgressBar);

        label_2 = new QLabel(statusGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        batchProgressBar = new QProgressBar(statusGroupBox);
        batchProgressBar->setObjectName(QString::fromUtf8("batchProgressBar"));
        batchProgressBar->setValue(24);

        verticalLayout_2->addWidget(batchProgressBar);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addWidget(statusGroupBox);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        controlTab = new QWidget();
        controlTab->setObjectName(QString::fromUtf8("controlTab"));
        verticalLayout_7 = new QVBoxLayout(controlTab);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        splitter_3 = new QSplitter(controlTab);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        synthControlGroup = new QGroupBox(layoutWidget);
        synthControlGroup->setObjectName(QString::fromUtf8("synthControlGroup"));
        formLayout_2 = new QFormLayout(synthControlGroup);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setVerticalSpacing(3);
        fTMLabel = new QLabel(synthControlGroup);
        fTMLabel->setObjectName(QString::fromUtf8("fTMLabel"));
        fTMLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, fTMLabel);

        ftmControlDoubleSpinBox = new QDoubleSpinBox(synthControlGroup);
        ftmControlDoubleSpinBox->setObjectName(QString::fromUtf8("ftmControlDoubleSpinBox"));
        QFont font;
        font.setPointSize(14);
        ftmControlDoubleSpinBox->setFont(font);
        ftmControlDoubleSpinBox->setKeyboardTracking(false);
        ftmControlDoubleSpinBox->setDecimals(3);
        ftmControlDoubleSpinBox->setMinimum(5000.000000000000000);
        ftmControlDoubleSpinBox->setMaximum(43501.000000000000000);
        ftmControlDoubleSpinBox->setSingleStep(0.400000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ftmControlDoubleSpinBox);

        attnLabel = new QLabel(synthControlGroup);
        attnLabel->setObjectName(QString::fromUtf8("attnLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, attnLabel);

        attnControlSpinBox = new QSpinBox(synthControlGroup);
        attnControlSpinBox->setObjectName(QString::fromUtf8("attnControlSpinBox"));
        attnControlSpinBox->setFont(font);
        attnControlSpinBox->setKeyboardTracking(false);
        attnControlSpinBox->setMaximum(105);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, attnControlSpinBox);

        dRLabel = new QLabel(synthControlGroup);
        dRLabel->setObjectName(QString::fromUtf8("dRLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, dRLabel);

        drControlDoubleSpinBox = new QDoubleSpinBox(synthControlGroup);
        drControlDoubleSpinBox->setObjectName(QString::fromUtf8("drControlDoubleSpinBox"));
        drControlDoubleSpinBox->setKeyboardTracking(false);
        drControlDoubleSpinBox->setDecimals(4);
        drControlDoubleSpinBox->setMinimum(1000.000000000000000);
        drControlDoubleSpinBox->setMaximum(1000000.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, drControlDoubleSpinBox);

        pwrLabel_2 = new QLabel(synthControlGroup);
        pwrLabel_2->setObjectName(QString::fromUtf8("pwrLabel_2"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, pwrLabel_2);

        pwrControlDoubleSpinBox = new QDoubleSpinBox(synthControlGroup);
        pwrControlDoubleSpinBox->setObjectName(QString::fromUtf8("pwrControlDoubleSpinBox"));
        pwrControlDoubleSpinBox->setKeyboardTracking(false);
        pwrControlDoubleSpinBox->setDecimals(1);
        pwrControlDoubleSpinBox->setMinimum(-100.000000000000000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, pwrControlDoubleSpinBox);


        horizontalLayout_3->addWidget(synthControlGroup);

        environmentControlBox = new QGroupBox(layoutWidget);
        environmentControlBox->setObjectName(QString::fromUtf8("environmentControlBox"));
        formLayout_3 = new QFormLayout(environmentControlBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_25 = new QLabel(environmentControlBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_25);

        magnetOnOffButton = new QPushButton(environmentControlBox);
        magnetOnOffButton->setObjectName(QString::fromUtf8("magnetOnOffButton"));
        magnetOnOffButton->setCheckable(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, magnetOnOffButton);

        dCLabel = new QLabel(environmentControlBox);
        dCLabel->setObjectName(QString::fromUtf8("dCLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, dCLabel);

        dcControlSpinBox = new QSpinBox(environmentControlBox);
        dcControlSpinBox->setObjectName(QString::fromUtf8("dcControlSpinBox"));
        dcControlSpinBox->setEnabled(true);
        dcControlSpinBox->setKeyboardTracking(false);
        dcControlSpinBox->setMaximum(2000);
        dcControlSpinBox->setSingleStep(20);
        dcControlSpinBox->setValue(1000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dcControlSpinBox);


        horizontalLayout_3->addWidget(environmentControlBox);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        gasControlGroup = new QGroupBox(layoutWidget);
        gasControlGroup->setObjectName(QString::fromUtf8("gasControlGroup"));
        gridLayout = new QGridLayout(gasControlGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        label_5 = new QLabel(gasControlGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(gasControlGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_7 = new QLabel(gasControlGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        pressureControlButton = new QPushButton(gasControlGroup);
        pressureControlButton->setObjectName(QString::fromUtf8("pressureControlButton"));
        pressureControlButton->setCheckable(true);

        gridLayout->addWidget(pressureControlButton, 2, 2, 1, 1);

        pressureControlBox = new QDoubleSpinBox(gasControlGroup);
        pressureControlBox->setObjectName(QString::fromUtf8("pressureControlBox"));
        pressureControlBox->setKeyboardTracking(false);
        pressureControlBox->setDecimals(3);
        pressureControlBox->setMaximum(1000.000000000000000);
        pressureControlBox->setSingleStep(0.500000000000000);

        gridLayout->addWidget(pressureControlBox, 1, 2, 1, 1);


        verticalLayout_6->addWidget(gasControlGroup);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        splitter_3->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        peakUpPlot = new FtPlot(layoutWidget1);
        peakUpPlot->setObjectName(QString::fromUtf8("peakUpPlot"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(peakUpPlot->sizePolicy().hasHeightForWidth());
        peakUpPlot->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(peakUpPlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        peakUpMaxValueBox = new QDoubleSpinBox(layoutWidget1);
        peakUpMaxValueBox->setObjectName(QString::fromUtf8("peakUpMaxValueBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(peakUpMaxValueBox->sizePolicy().hasHeightForWidth());
        peakUpMaxValueBox->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(24);
        peakUpMaxValueBox->setFont(font1);
        peakUpMaxValueBox->setFocusPolicy(Qt::NoFocus);
        peakUpMaxValueBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        peakUpMaxValueBox->setReadOnly(true);
        peakUpMaxValueBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        peakUpMaxValueBox->setMaximum(10000.000000000000000);

        horizontalLayout_2->addWidget(peakUpMaxValueBox);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        rollingAvgsSpinBox = new QSpinBox(layoutWidget1);
        rollingAvgsSpinBox->setObjectName(QString::fromUtf8("rollingAvgsSpinBox"));
        rollingAvgsSpinBox->setKeyboardTracking(false);
        rollingAvgsSpinBox->setMinimum(1);
        rollingAvgsSpinBox->setMaximum(10000);
        rollingAvgsSpinBox->setSingleStep(10);
        rollingAvgsSpinBox->setValue(20);

        horizontalLayout_2->addWidget(rollingAvgsSpinBox);

        resetRollingAvgsButton = new QPushButton(layoutWidget1);
        resetRollingAvgsButton->setObjectName(QString::fromUtf8("resetRollingAvgsButton"));

        horizontalLayout_2->addWidget(resetRollingAvgsButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        splitter_3->addWidget(layoutWidget1);

        verticalLayout_7->addWidget(splitter_3);

        pulseConfigWidget = new PulseConfigWidget(controlTab);
        pulseConfigWidget->setObjectName(QString::fromUtf8("pulseConfigWidget"));

        verticalLayout_7->addWidget(pulseConfigWidget);

        tabWidget->addTab(controlTab, QString());
        displayTab = new QWidget();
        displayTab->setObjectName(QString::fromUtf8("displayTab"));
        verticalLayout_8 = new QVBoxLayout(displayTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        batchSplitter = new QSplitter(displayTab);
        batchSplitter->setObjectName(QString::fromUtf8("batchSplitter"));
        batchSplitter->setOrientation(Qt::Vertical);
        splitter_5 = new QSplitter(batchSplitter);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        analysisWidget = new AnalysisWidget(splitter_5);
        analysisWidget->setObjectName(QString::fromUtf8("analysisWidget"));
        sizePolicy2.setHeightForWidth(analysisWidget->sizePolicy().hasHeightForWidth());
        analysisWidget->setSizePolicy(sizePolicy2);
        splitter_5->addWidget(analysisWidget);
        acqFtPlot = new FtPlot(splitter_5);
        acqFtPlot->setObjectName(QString::fromUtf8("acqFtPlot"));
        sizePolicy2.setHeightForWidth(acqFtPlot->sizePolicy().hasHeightForWidth());
        acqFtPlot->setSizePolicy(sizePolicy2);
        splitter_5->addWidget(acqFtPlot);
        batchSplitter->addWidget(splitter_5);
        batchPlotSplitter = new QSplitter(batchSplitter);
        batchPlotSplitter->setObjectName(QString::fromUtf8("batchPlotSplitter"));
        batchPlotSplitter->setOrientation(Qt::Horizontal);
        batchPlot = new QWidget(batchPlotSplitter);
        batchPlot->setObjectName(QString::fromUtf8("batchPlot"));
        batchPlotSplitter->addWidget(batchPlot);
        peakListWidget = new PeakListWidget(batchPlotSplitter);
        peakListWidget->setObjectName(QString::fromUtf8("peakListWidget"));
        peakListWidget->setMinimumSize(QSize(300, 0));
        batchPlotSplitter->addWidget(peakListWidget);
        batchSplitter->addWidget(batchPlotSplitter);

        verticalLayout_8->addWidget(batchSplitter);

        tabWidget->addTab(displayTab, QString());
        logTab = new QWidget();
        logTab->setObjectName(QString::fromUtf8("logTab"));
        verticalLayout = new QVBoxLayout(logTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        log = new QTextEdit(logTab);
        log->setObjectName(QString::fromUtf8("log"));
        log->setReadOnly(true);

        verticalLayout->addWidget(log);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clearLogButton = new QPushButton(logTab);
        clearLogButton->setObjectName(QString::fromUtf8("clearLogButton"));

        horizontalLayout->addWidget(clearLogButton);

        saveLogButton = new QPushButton(logTab);
        saveLogButton->setObjectName(QString::fromUtf8("saveLogButton"));

        horizontalLayout->addWidget(saveLogButton);

        activateLogOnErrorBox = new QCheckBox(logTab);
        activateLogOnErrorBox->setObjectName(QString::fromUtf8("activateLogOnErrorBox"));
        activateLogOnErrorBox->setChecked(true);

        horizontalLayout->addWidget(activateLogOnErrorBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(logTab, QString());

        horizontalLayout_4->addWidget(tabWidget);

        horizontalLayout_4->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 18));
        menuAcquisition = new QMenu(menuBar);
        menuAcquisition->setObjectName(QString::fromUtf8("menuAcquisition"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuResolution = new QMenu(menuSettings);
        menuResolution->setObjectName(QString::fromUtf8("menuResolution"));
        menuMotor_Driver = new QMenu(menuSettings);
        menuMotor_Driver->setObjectName(QString::fromUtf8("menuMotor_Driver"));
        menuAttenuator = new QMenu(menuSettings);
        menuAttenuator->setObjectName(QString::fromUtf8("menuAttenuator"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, ftmControlDoubleSpinBox);
        QWidget::setTabOrder(ftmControlDoubleSpinBox, attnControlSpinBox);
        QWidget::setTabOrder(attnControlSpinBox, drControlDoubleSpinBox);
        QWidget::setTabOrder(drControlDoubleSpinBox, pwrControlDoubleSpinBox);
        QWidget::setTabOrder(pwrControlDoubleSpinBox, rollingAvgsSpinBox);
        QWidget::setTabOrder(rollingAvgsSpinBox, resetRollingAvgsButton);
        QWidget::setTabOrder(resetRollingAvgsButton, peakUpMaxValueBox);
        QWidget::setTabOrder(peakUpMaxValueBox, log);
        QWidget::setTabOrder(log, clearLogButton);
        QWidget::setTabOrder(clearLogButton, saveLogButton);

        menuBar->addAction(menuAcquisition->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuAcquisition->addAction(actionStart_Single);
        menuAcquisition->addAction(actionStart_Batch);
        menuAcquisition->addAction(actionPause);
        menuAcquisition->addAction(actionResume);
        menuAcquisition->addAction(actionAbort);
        menuAcquisition->addSeparator();
        menuAcquisition->addAction(actionView_Batch);
        menuSettings->addAction(actionCommunication);
        menuSettings->addSeparator();
        menuSettings->addAction(actionFT_Synth);
        menuSettings->addAction(actionDR_Synth);
        menuSettings->addAction(actionIO_Board);
        menuSettings->addAction(menuResolution->menuAction());
        menuSettings->addAction(menuMotor_Driver->menuAction());
        menuSettings->addAction(menuAttenuator->menuAction());
        menuMotor_Driver->addAction(actionTune_Cavity);
        menuMotor_Driver->addSeparator();
        menuMotor_Driver->addAction(actionTune_Up);
        menuMotor_Driver->addAction(actionTune_Down);
        menuMotor_Driver->addSeparator();
        menuMotor_Driver->addAction(actionCalibrate);
        menuAttenuator->addAction(actionChange_Tuning_File);
        menuAttenuator->addAction(actionGenerate_Tuning_Table);
        menuTools->addAction(actionSleep_Mode);
        menuTools->addAction(actionDelayed_Sleep);
        mainToolBar->addAction(actionStart_Single);
        mainToolBar->addAction(actionStart_Batch);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionResume);
        mainToolBar->addAction(actionAbort);
        mainToolBar->addAction(actionTune_Cavity);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint_Scan);
        mainToolBar->addAction(actionPrint_Summary);
        mainToolBar->addAction(actionView_Batch);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSleep_Mode);

        retranslateUi(MainWindow);
        QObject::connect(clearLogButton, SIGNAL(clicked()), log, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QtFTM", nullptr));
        actionStart_Single->setText(QCoreApplication::translate("MainWindow", "&Start Single", nullptr));
#if QT_CONFIG(tooltip)
        actionStart_Single->setToolTip(QCoreApplication::translate("MainWindow", "Start a single scan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStart_Single->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart_Batch->setText(QCoreApplication::translate("MainWindow", "Start &Batch", nullptr));
#if QT_CONFIG(tooltip)
        actionStart_Batch->setToolTip(QCoreApplication::translate("MainWindow", "Start a survey, double resonance scan, or batch acquisition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStart_Batch->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPause->setText(QCoreApplication::translate("MainWindow", "&Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("MainWindow", "Pause active acquisition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPause->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResume->setText(QCoreApplication::translate("MainWindow", "&Resume", nullptr));
#if QT_CONFIG(tooltip)
        actionResume->setToolTip(QCoreApplication::translate("MainWindow", "Resume paused acquisition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionResume->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbort->setText(QCoreApplication::translate("MainWindow", "&Abort", nullptr));
#if QT_CONFIG(tooltip)
        actionAbort->setToolTip(QCoreApplication::translate("MainWindow", "Abort active acquisition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAbort->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Scan->setText(QCoreApplication::translate("MainWindow", "Print Scan", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint_Scan->setToolTip(QCoreApplication::translate("MainWindow", "Print the scan shown in the analysis plot", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint_Scan->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Summary->setText(QCoreApplication::translate("MainWindow", "Print Batch", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint_Summary->setToolTip(QCoreApplication::translate("MainWindow", "Print the batch plot", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint_Summary->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSleep_Mode->setText(QCoreApplication::translate("MainWindow", "&Sleep Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionSleep_Mode->setToolTip(QCoreApplication::translate("MainWindow", "Disables pulses, turns off gas flow, and puts hardware into standby mode. Press to toggle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSleep_Mode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCommunication->setText(QCoreApplication::translate("MainWindow", "&Communication", nullptr));
#if QT_CONFIG(tooltip)
        actionCommunication->setToolTip(QCoreApplication::translate("MainWindow", "Settings for device communication", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFT_Synth->setText(QCoreApplication::translate("MainWindow", "&FTM Synth", nullptr));
        actionDR_Synth->setText(QCoreApplication::translate("MainWindow", "&DR Synth", nullptr));
        actionDf->setText(QCoreApplication::translate("MainWindow", "df", nullptr));
        actionTune_Cavity->setText(QCoreApplication::translate("MainWindow", "&Tune Cavity", nullptr));
        actionCalibrate->setText(QCoreApplication::translate("MainWindow", "&Calibrate", nullptr));
        actionTune_Up->setText(QCoreApplication::translate("MainWindow", "Tune &Up", nullptr));
#if QT_CONFIG(tooltip)
        actionTune_Up->setToolTip(QCoreApplication::translate("MainWindow", "Tune cavity to the next higher mode number", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTune_Down->setText(QCoreApplication::translate("MainWindow", "Tune &Down", nullptr));
#if QT_CONFIG(tooltip)
        actionTune_Down->setToolTip(QCoreApplication::translate("MainWindow", "Tune cavity to the next lower mode number", nullptr));
#endif // QT_CONFIG(tooltip)
        actionView_Batch->setText(QCoreApplication::translate("MainWindow", "&View Batch", nullptr));
#if QT_CONFIG(tooltip)
        actionView_Batch->setToolTip(QCoreApplication::translate("MainWindow", "View a previously acquired batch scan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChange_Tuning_File->setText(QCoreApplication::translate("MainWindow", "&Change Tuning File...", nullptr));
#if QT_CONFIG(tooltip)
        actionChange_Tuning_File->setToolTip(QCoreApplication::translate("MainWindow", "Changes the file from which the tuning attentuation lookup table is loaded", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGenerate_Tuning_Table->setText(QCoreApplication::translate("MainWindow", "&Generate Tuning Table", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerate_Tuning_Table->setToolTip(QCoreApplication::translate("MainWindow", "Automatically determine tuning attenuations to use over the range of the spectrometer. This operation takes a long time!", nullptr));
#endif // QT_CONFIG(tooltip)
        actionIO_Board->setText(QCoreApplication::translate("MainWindow", "&IO Board", nullptr));
#if QT_CONFIG(tooltip)
        actionIO_Board->setToolTip(QCoreApplication::translate("MainWindow", "Configure IO Board Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelayed_Sleep->setText(QCoreApplication::translate("MainWindow", "&Delayed Sleep...", nullptr));
        statusGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Instrument Status", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        ftmLabel->setText(QCoreApplication::translate("MainWindow", "FTM", nullptr));
        ftmDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " MHz", nullptr));
        attenuationLabel->setText(QCoreApplication::translate("MainWindow", "Attn", nullptr));
        attenuationSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " dB", nullptr));
        attenuationSpinBox->setPrefix(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "TA", nullptr));
        taSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " dB", nullptr));
        taSpinBox->setPrefix(QString());
        cvLabel->setText(QCoreApplication::translate("MainWindow", "TV", nullptr));
#if QT_CONFIG(tooltip)
        tvSpinBox->setToolTip(QCoreApplication::translate("MainWindow", "Most recent cavity tuning voltage, in digitizer levels.", nullptr));
#endif // QT_CONFIG(tooltip)
        tvSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " mV", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "CV", nullptr));
        cvSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " mV", nullptr));
        dcLabel->setText(QCoreApplication::translate("MainWindow", "DC", nullptr));
        dcSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " V", nullptr));
        drLabel->setText(QCoreApplication::translate("MainWindow", "DR", nullptr));
        drDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " MHz", nullptr));
        pwrLabel->setText(QCoreApplication::translate("MainWindow", "Pwr", nullptr));
        powerDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " dBm", nullptr));
        magLedLabel->setText(QCoreApplication::translate("MainWindow", "Magnet", nullptr));
        flowStatusBox->setTitle(QCoreApplication::translate("MainWindow", "Gas Status", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Pressure", nullptr));
        pressureDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " kTorr", nullptr));
        pulseConfigBox->setTitle(QCoreApplication::translate("MainWindow", "Pulse Configuration", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Integration", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Batch", nullptr));
        synthControlGroup->setTitle(QCoreApplication::translate("MainWindow", "Synthesizer Control", nullptr));
        fTMLabel->setText(QCoreApplication::translate("MainWindow", "FTM", nullptr));
        ftmControlDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " MHz", nullptr));
        attnLabel->setText(QCoreApplication::translate("MainWindow", "Attn", nullptr));
        attnControlSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " dB", nullptr));
        dRLabel->setText(QCoreApplication::translate("MainWindow", "DR", nullptr));
        drControlDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " MHz", nullptr));
        pwrLabel_2->setText(QCoreApplication::translate("MainWindow", "Pwr", nullptr));
        pwrControlDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " dBm", nullptr));
        environmentControlBox->setTitle(QCoreApplication::translate("MainWindow", "Environment Control", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Magnet", nullptr));
        magnetOnOffButton->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        dCLabel->setText(QCoreApplication::translate("MainWindow", "DC", nullptr));
        dcControlSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " V", nullptr));
        gasControlGroup->setTitle(QCoreApplication::translate("MainWindow", "Gas Control", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ch", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Setpoint", nullptr));
        pressureControlButton->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        pressureControlBox->setSuffix(QCoreApplication::translate("MainWindow", " kTorr", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Averages", nullptr));
        resetRollingAvgsButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(controlTab), QCoreApplication::translate("MainWindow", "Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayTab), QCoreApplication::translate("MainWindow", "Display", nullptr));
        clearLogButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        saveLogButton->setText(QCoreApplication::translate("MainWindow", "Save to File", nullptr));
        activateLogOnErrorBox->setText(QCoreApplication::translate("MainWindow", "Activate this tab when an error occurs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(logTab), QCoreApplication::translate("MainWindow", "Log", nullptr));
        menuAcquisition->setTitle(QCoreApplication::translate("MainWindow", "Ac&quisition", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Setti&ngs", nullptr));
        menuResolution->setTitle(QCoreApplication::translate("MainWindow", "&Resolution", nullptr));
        menuMotor_Driver->setTitle(QCoreApplication::translate("MainWindow", "&Motor Driver", nullptr));
        menuAttenuator->setTitle(QCoreApplication::translate("MainWindow", "&Attenuator", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Too&ls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
