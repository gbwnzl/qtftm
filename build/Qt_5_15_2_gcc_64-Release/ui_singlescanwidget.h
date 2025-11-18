/********************************************************************************
** Form generated from reading UI file 'singlescanwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLESCANWIDGET_H
#define UI_SINGLESCANWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <pulseconfigwidget.h>

QT_BEGIN_NAMESPACE

class Ui_SingleScanWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *shotsLabel;
    QSpinBox *ssShotsSpinBox;
    QLabel *fTMLabel;
    QDoubleSpinBox *ssFtmDoubleSpinBox;
    QLabel *attnLabel;
    QSpinBox *ssAttnSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *dipoleDoubleSpinBox;
    QLabel *dRLabel;
    QDoubleSpinBox *ssDrDoubleSpinBox;
    QLabel *pwrLabel_2;
    QDoubleSpinBox *ssPwrDoubleSpinBox;
    QGroupBox *environmentControlBox;
    QFormLayout *formLayout_3;
    QLabel *label_25;
    QPushButton *magnetOnOffButton;
    QLabel *dCLabel;
    QSpinBox *dcControlSpinBox;
    QSpacerItem *horizontalSpacer_2;
    PulseConfigWidget *pulseConfigWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *skipTuneCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpinBox *postTuneDelayBox;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *SingleScanWidget)
    {
        if (SingleScanWidget->objectName().isEmpty())
            SingleScanWidget->setObjectName(QString::fromUtf8("SingleScanWidget"));
        SingleScanWidget->resize(740, 528);
        verticalLayout = new QVBoxLayout(SingleScanWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        shotsLabel = new QLabel(SingleScanWidget);
        shotsLabel->setObjectName(QString::fromUtf8("shotsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, shotsLabel);

        ssShotsSpinBox = new QSpinBox(SingleScanWidget);
        ssShotsSpinBox->setObjectName(QString::fromUtf8("ssShotsSpinBox"));
        ssShotsSpinBox->setMinimum(1);
        ssShotsSpinBox->setMaximum(2147483647);
        ssShotsSpinBox->setSingleStep(100);
        ssShotsSpinBox->setValue(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, ssShotsSpinBox);

        fTMLabel = new QLabel(SingleScanWidget);
        fTMLabel->setObjectName(QString::fromUtf8("fTMLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fTMLabel);

        ssFtmDoubleSpinBox = new QDoubleSpinBox(SingleScanWidget);
        ssFtmDoubleSpinBox->setObjectName(QString::fromUtf8("ssFtmDoubleSpinBox"));
        ssFtmDoubleSpinBox->setKeyboardTracking(false);
        ssFtmDoubleSpinBox->setDecimals(3);
        ssFtmDoubleSpinBox->setMinimum(5000.000000000000000);
        ssFtmDoubleSpinBox->setMaximum(43501.000000000000000);
        ssFtmDoubleSpinBox->setSingleStep(0.400000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, ssFtmDoubleSpinBox);

        attnLabel = new QLabel(SingleScanWidget);
        attnLabel->setObjectName(QString::fromUtf8("attnLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, attnLabel);

        ssAttnSpinBox = new QSpinBox(SingleScanWidget);
        ssAttnSpinBox->setObjectName(QString::fromUtf8("ssAttnSpinBox"));
        ssAttnSpinBox->setKeyboardTracking(false);
        ssAttnSpinBox->setMaximum(70);

        formLayout->setWidget(2, QFormLayout::FieldRole, ssAttnSpinBox);

        label_3 = new QLabel(SingleScanWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        dipoleDoubleSpinBox = new QDoubleSpinBox(SingleScanWidget);
        dipoleDoubleSpinBox->setObjectName(QString::fromUtf8("dipoleDoubleSpinBox"));
        dipoleDoubleSpinBox->setMaximum(10.000000000000000);
        dipoleDoubleSpinBox->setSingleStep(0.100000000000000);
        dipoleDoubleSpinBox->setValue(0.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, dipoleDoubleSpinBox);

        dRLabel = new QLabel(SingleScanWidget);
        dRLabel->setObjectName(QString::fromUtf8("dRLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, dRLabel);

        ssDrDoubleSpinBox = new QDoubleSpinBox(SingleScanWidget);
        ssDrDoubleSpinBox->setObjectName(QString::fromUtf8("ssDrDoubleSpinBox"));
        ssDrDoubleSpinBox->setKeyboardTracking(false);
        ssDrDoubleSpinBox->setDecimals(4);
        ssDrDoubleSpinBox->setMinimum(1000.000000000000000);
        ssDrDoubleSpinBox->setMaximum(1000000.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, ssDrDoubleSpinBox);

        pwrLabel_2 = new QLabel(SingleScanWidget);
        pwrLabel_2->setObjectName(QString::fromUtf8("pwrLabel_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pwrLabel_2);

        ssPwrDoubleSpinBox = new QDoubleSpinBox(SingleScanWidget);
        ssPwrDoubleSpinBox->setObjectName(QString::fromUtf8("ssPwrDoubleSpinBox"));
        ssPwrDoubleSpinBox->setKeyboardTracking(false);
        ssPwrDoubleSpinBox->setDecimals(1);
        ssPwrDoubleSpinBox->setMinimum(-100.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, ssPwrDoubleSpinBox);


        horizontalLayout->addLayout(formLayout);

        environmentControlBox = new QGroupBox(SingleScanWidget);
        environmentControlBox->setObjectName(QString::fromUtf8("environmentControlBox"));
        formLayout_3 = new QFormLayout(environmentControlBox);
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
        dcControlSpinBox->setMaximum(2000);
        dcControlSpinBox->setSingleStep(20);
        dcControlSpinBox->setValue(1000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dcControlSpinBox);


        horizontalLayout->addWidget(environmentControlBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        pulseConfigWidget = new PulseConfigWidget(SingleScanWidget);
        pulseConfigWidget->setObjectName(QString::fromUtf8("pulseConfigWidget"));

        verticalLayout->addWidget(pulseConfigWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        skipTuneCheckBox = new QCheckBox(SingleScanWidget);
        skipTuneCheckBox->setObjectName(QString::fromUtf8("skipTuneCheckBox"));
        skipTuneCheckBox->setChecked(false);

        horizontalLayout_2->addWidget(skipTuneCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(SingleScanWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        postTuneDelayBox = new QSpinBox(SingleScanWidget);
        postTuneDelayBox->setObjectName(QString::fromUtf8("postTuneDelayBox"));
        postTuneDelayBox->setMaximum(100000);

        horizontalLayout_2->addWidget(postTuneDelayBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(1, 1);
        QWidget::setTabOrder(ssShotsSpinBox, ssFtmDoubleSpinBox);
        QWidget::setTabOrder(ssFtmDoubleSpinBox, ssAttnSpinBox);
        QWidget::setTabOrder(ssAttnSpinBox, ssDrDoubleSpinBox);
        QWidget::setTabOrder(ssDrDoubleSpinBox, ssPwrDoubleSpinBox);

        retranslateUi(SingleScanWidget);

        QMetaObject::connectSlotsByName(SingleScanWidget);
    } // setupUi

    void retranslateUi(QWidget *SingleScanWidget)
    {
        SingleScanWidget->setWindowTitle(QCoreApplication::translate("SingleScanWidget", "Single Scan", nullptr));
        shotsLabel->setText(QCoreApplication::translate("SingleScanWidget", "Shots", nullptr));
        fTMLabel->setText(QCoreApplication::translate("SingleScanWidget", "FTM", nullptr));
        ssFtmDoubleSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " MHz", nullptr));
        attnLabel->setText(QCoreApplication::translate("SingleScanWidget", "Attn", nullptr));
        ssAttnSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " dB", nullptr));
        label_3->setText(QCoreApplication::translate("SingleScanWidget", "Dipole", nullptr));
        dipoleDoubleSpinBox->setSpecialValueText(QCoreApplication::translate("SingleScanWidget", "Disabled", nullptr));
        dipoleDoubleSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " D", nullptr));
        dRLabel->setText(QCoreApplication::translate("SingleScanWidget", "DR", nullptr));
        ssDrDoubleSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " MHz", nullptr));
        pwrLabel_2->setText(QCoreApplication::translate("SingleScanWidget", "Pwr", nullptr));
        ssPwrDoubleSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " dBm", nullptr));
        environmentControlBox->setTitle(QCoreApplication::translate("SingleScanWidget", "Environment Control", nullptr));
        label_25->setText(QCoreApplication::translate("SingleScanWidget", "Magnet", nullptr));
        magnetOnOffButton->setText(QCoreApplication::translate("SingleScanWidget", "Off", nullptr));
        dCLabel->setText(QCoreApplication::translate("SingleScanWidget", "DC", nullptr));
        dcControlSpinBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " V", nullptr));
#if QT_CONFIG(tooltip)
        skipTuneCheckBox->setToolTip(QCoreApplication::translate("SingleScanWidget", "If checked, the cavity will not be tuned prior to this scan. The cavity voltage will just be measured.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipTuneCheckBox->setText(QCoreApplication::translate("SingleScanWidget", "Skip Tuning", nullptr));
        label->setText(QCoreApplication::translate("SingleScanWidget", "Post Tune Delay", nullptr));
        postTuneDelayBox->setSpecialValueText(QCoreApplication::translate("SingleScanWidget", "None", nullptr));
        postTuneDelayBox->setSuffix(QCoreApplication::translate("SingleScanWidget", " shots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleScanWidget: public Ui_SingleScanWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLESCANWIDGET_H
