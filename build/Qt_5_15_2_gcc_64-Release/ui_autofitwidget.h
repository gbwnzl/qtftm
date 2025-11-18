/********************************************************************************
** Form generated from reading UI file 'autofitwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOFITWIDGET_H
#define UI_AUTOFITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoFitWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *autoFitEnabledCheckBox;
    QGroupBox *autoFitSettingsBox;
    QFormLayout *formLayout;
    QLabel *sourceConfigLabel;
    QComboBox *sourceConfigComboBox;
    QLabel *bufferGasLabel;
    QComboBox *bufferGasComboBox;
    QLabel *temperatureLabel;
    QDoubleSpinBox *temperatureDoubleSpinBox;
    QLabel *minSNRLabel;
    QDoubleSpinBox *minSNRDoubleSpinBox;
    QGroupBox *processingSettingsBox;
    QFormLayout *formLayout_2;
    QLabel *delayLabel;
    QDoubleSpinBox *delayDoubleSpinBox;
    QLabel *highPassLabel;
    QDoubleSpinBox *highPassDoubleSpinBox;
    QLabel *expFilterLabel;
    QDoubleSpinBox *expFilterDoubleSpinBox;
    QCheckBox *applyBHWindowCheckBox;
    QLabel *applyBHWindowLabel;
    QCheckBox *removeDCCheckBox;
    QLabel *removeDCLabel;
    QCheckBox *zeroPadFIDCheckBox;
    QLabel *zeroPadFIDLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AutoFitWidget)
    {
        if (AutoFitWidget->objectName().isEmpty())
            AutoFitWidget->setObjectName(QString::fromUtf8("AutoFitWidget"));
        AutoFitWidget->resize(258, 420);
        verticalLayout = new QVBoxLayout(AutoFitWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(AutoFitWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        autoFitEnabledCheckBox = new QCheckBox(frame);
        autoFitEnabledCheckBox->setObjectName(QString::fromUtf8("autoFitEnabledCheckBox"));
        autoFitEnabledCheckBox->setChecked(true);

        verticalLayout_2->addWidget(autoFitEnabledCheckBox);

        autoFitSettingsBox = new QGroupBox(frame);
        autoFitSettingsBox->setObjectName(QString::fromUtf8("autoFitSettingsBox"));
        formLayout = new QFormLayout(autoFitSettingsBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        sourceConfigLabel = new QLabel(autoFitSettingsBox);
        sourceConfigLabel->setObjectName(QString::fromUtf8("sourceConfigLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, sourceConfigLabel);

        sourceConfigComboBox = new QComboBox(autoFitSettingsBox);
        sourceConfigComboBox->addItem(QString());
        sourceConfigComboBox->setObjectName(QString::fromUtf8("sourceConfigComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourceConfigComboBox->sizePolicy().hasHeightForWidth());
        sourceConfigComboBox->setSizePolicy(sizePolicy);
        sourceConfigComboBox->setMinimumSize(QSize(67, 0));
        sourceConfigComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(0, QFormLayout::FieldRole, sourceConfigComboBox);

        bufferGasLabel = new QLabel(autoFitSettingsBox);
        bufferGasLabel->setObjectName(QString::fromUtf8("bufferGasLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, bufferGasLabel);

        bufferGasComboBox = new QComboBox(autoFitSettingsBox);
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->addItem(QString());
        bufferGasComboBox->setObjectName(QString::fromUtf8("bufferGasComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bufferGasComboBox);

        temperatureLabel = new QLabel(autoFitSettingsBox);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, temperatureLabel);

        temperatureDoubleSpinBox = new QDoubleSpinBox(autoFitSettingsBox);
        temperatureDoubleSpinBox->setObjectName(QString::fromUtf8("temperatureDoubleSpinBox"));
        temperatureDoubleSpinBox->setMinimum(77.000000000000000);
        temperatureDoubleSpinBox->setMaximum(10000.000000000000000);
        temperatureDoubleSpinBox->setValue(293.149999999999977);

        formLayout->setWidget(2, QFormLayout::FieldRole, temperatureDoubleSpinBox);

        minSNRLabel = new QLabel(autoFitSettingsBox);
        minSNRLabel->setObjectName(QString::fromUtf8("minSNRLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, minSNRLabel);

        minSNRDoubleSpinBox = new QDoubleSpinBox(autoFitSettingsBox);
        minSNRDoubleSpinBox->setObjectName(QString::fromUtf8("minSNRDoubleSpinBox"));
        minSNRDoubleSpinBox->setDecimals(3);
        minSNRDoubleSpinBox->setMinimum(1.000000000000000);
        minSNRDoubleSpinBox->setMaximum(1000.000000000000000);
        minSNRDoubleSpinBox->setSingleStep(0.250000000000000);
        minSNRDoubleSpinBox->setValue(5.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, minSNRDoubleSpinBox);


        verticalLayout_2->addWidget(autoFitSettingsBox);

        processingSettingsBox = new QGroupBox(frame);
        processingSettingsBox->setObjectName(QString::fromUtf8("processingSettingsBox"));
        formLayout_2 = new QFormLayout(processingSettingsBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        delayLabel = new QLabel(processingSettingsBox);
        delayLabel->setObjectName(QString::fromUtf8("delayLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, delayLabel);

        delayDoubleSpinBox = new QDoubleSpinBox(processingSettingsBox);
        delayDoubleSpinBox->setObjectName(QString::fromUtf8("delayDoubleSpinBox"));
        delayDoubleSpinBox->setKeyboardTracking(false);
        delayDoubleSpinBox->setDecimals(1);
        delayDoubleSpinBox->setMaximum(100.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, delayDoubleSpinBox);

        highPassLabel = new QLabel(processingSettingsBox);
        highPassLabel->setObjectName(QString::fromUtf8("highPassLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, highPassLabel);

        highPassDoubleSpinBox = new QDoubleSpinBox(processingSettingsBox);
        highPassDoubleSpinBox->setObjectName(QString::fromUtf8("highPassDoubleSpinBox"));
        highPassDoubleSpinBox->setKeyboardTracking(false);
        highPassDoubleSpinBox->setDecimals(0);
        highPassDoubleSpinBox->setMaximum(1000.000000000000000);
        highPassDoubleSpinBox->setSingleStep(50.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, highPassDoubleSpinBox);

        expFilterLabel = new QLabel(processingSettingsBox);
        expFilterLabel->setObjectName(QString::fromUtf8("expFilterLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, expFilterLabel);

        expFilterDoubleSpinBox = new QDoubleSpinBox(processingSettingsBox);
        expFilterDoubleSpinBox->setObjectName(QString::fromUtf8("expFilterDoubleSpinBox"));
        expFilterDoubleSpinBox->setWrapping(true);
        expFilterDoubleSpinBox->setKeyboardTracking(false);
        expFilterDoubleSpinBox->setDecimals(1);
        expFilterDoubleSpinBox->setMaximum(1000.000000000000000);
        expFilterDoubleSpinBox->setSingleStep(10.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, expFilterDoubleSpinBox);

        applyBHWindowCheckBox = new QCheckBox(processingSettingsBox);
        applyBHWindowCheckBox->setObjectName(QString::fromUtf8("applyBHWindowCheckBox"));
        applyBHWindowCheckBox->setChecked(false);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, applyBHWindowCheckBox);

        applyBHWindowLabel = new QLabel(processingSettingsBox);
        applyBHWindowLabel->setObjectName(QString::fromUtf8("applyBHWindowLabel"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, applyBHWindowLabel);

        removeDCCheckBox = new QCheckBox(processingSettingsBox);
        removeDCCheckBox->setObjectName(QString::fromUtf8("removeDCCheckBox"));
        removeDCCheckBox->setChecked(true);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, removeDCCheckBox);

        removeDCLabel = new QLabel(processingSettingsBox);
        removeDCLabel->setObjectName(QString::fromUtf8("removeDCLabel"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, removeDCLabel);

        zeroPadFIDCheckBox = new QCheckBox(processingSettingsBox);
        zeroPadFIDCheckBox->setObjectName(QString::fromUtf8("zeroPadFIDCheckBox"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, zeroPadFIDCheckBox);

        zeroPadFIDLabel = new QLabel(processingSettingsBox);
        zeroPadFIDLabel->setObjectName(QString::fromUtf8("zeroPadFIDLabel"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, zeroPadFIDLabel);


        verticalLayout_2->addWidget(processingSettingsBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(AutoFitWidget);

        bufferGasComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(AutoFitWidget);
    } // setupUi

    void retranslateUi(QWidget *AutoFitWidget)
    {
        AutoFitWidget->setWindowTitle(QCoreApplication::translate("AutoFitWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        autoFitEnabledCheckBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "If checked, the program will attempt to automatically fit the data when acquisition is complete.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoFitEnabledCheckBox->setText(QCoreApplication::translate("AutoFitWidget", "AutoFit Enabled", nullptr));
        autoFitSettingsBox->setTitle(QCoreApplication::translate("AutoFitWidget", "AutoFit Settings", nullptr));
        sourceConfigLabel->setText(QCoreApplication::translate("AutoFitWidget", "Source Config", nullptr));
        sourceConfigComboBox->setItemText(0, QCoreApplication::translate("AutoFitWidget", "Coaxial", nullptr));

#if QT_CONFIG(tooltip)
        sourceConfigComboBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Specify configuration of source, as lineshapes are different for coaxial and perpendicular configurations", nullptr));
#endif // QT_CONFIG(tooltip)
        bufferGasLabel->setText(QCoreApplication::translate("AutoFitWidget", "Buffer Gas", nullptr));
        bufferGasComboBox->setItemText(0, QCoreApplication::translate("AutoFitWidget", "H2", nullptr));
        bufferGasComboBox->setItemText(1, QCoreApplication::translate("AutoFitWidget", "He", nullptr));
        bufferGasComboBox->setItemText(2, QCoreApplication::translate("AutoFitWidget", "N2", nullptr));
        bufferGasComboBox->setItemText(3, QCoreApplication::translate("AutoFitWidget", "O2", nullptr));
        bufferGasComboBox->setItemText(4, QCoreApplication::translate("AutoFitWidget", "Ne", nullptr));
        bufferGasComboBox->setItemText(5, QCoreApplication::translate("AutoFitWidget", "Ar", nullptr));
        bufferGasComboBox->setItemText(6, QCoreApplication::translate("AutoFitWidget", "Kr", nullptr));
        bufferGasComboBox->setItemText(7, QCoreApplication::translate("AutoFitWidget", "Xe", nullptr));

#if QT_CONFIG(tooltip)
        bufferGasComboBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Choose the buffer gas that is used in the experiment.", nullptr));
#endif // QT_CONFIG(tooltip)
        temperatureLabel->setText(QCoreApplication::translate("AutoFitWidget", "Temperature", nullptr));
#if QT_CONFIG(tooltip)
        temperatureDoubleSpinBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Temperature of the gas prior to expansion", nullptr));
#endif // QT_CONFIG(tooltip)
        temperatureDoubleSpinBox->setSuffix(QCoreApplication::translate("AutoFitWidget", " K", nullptr));
        minSNRLabel->setText(QCoreApplication::translate("AutoFitWidget", "Min SNR", nullptr));
        processingSettingsBox->setTitle(QCoreApplication::translate("AutoFitWidget", "Processing Settings", nullptr));
        delayLabel->setText(QCoreApplication::translate("AutoFitWidget", "Delay", nullptr));
#if QT_CONFIG(tooltip)
        delayDoubleSpinBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Replace FID data with zeroes at all points prior to this time. This will be used for fitting.", nullptr));
#endif // QT_CONFIG(tooltip)
        delayDoubleSpinBox->setSpecialValueText(QCoreApplication::translate("AutoFitWidget", "Off", nullptr));
        delayDoubleSpinBox->setSuffix(QCoreApplication::translate("AutoFitWidget", " \302\265s", nullptr));
        highPassLabel->setText(QCoreApplication::translate("AutoFitWidget", "High Pass", nullptr));
#if QT_CONFIG(tooltip)
        highPassDoubleSpinBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Applies high-pass filter to data prior to fitting.", nullptr));
#endif // QT_CONFIG(tooltip)
        highPassDoubleSpinBox->setSpecialValueText(QCoreApplication::translate("AutoFitWidget", "Off", nullptr));
        highPassDoubleSpinBox->setSuffix(QCoreApplication::translate("AutoFitWidget", " kHz", nullptr));
        expFilterLabel->setText(QCoreApplication::translate("AutoFitWidget", "Exp Filter", nullptr));
#if QT_CONFIG(tooltip)
        expFilterDoubleSpinBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Convolves FID with exponential decay prior to fitting.", nullptr));
#endif // QT_CONFIG(tooltip)
        expFilterDoubleSpinBox->setSpecialValueText(QCoreApplication::translate("AutoFitWidget", "Off", nullptr));
        expFilterDoubleSpinBox->setSuffix(QCoreApplication::translate("AutoFitWidget", " \302\265s", nullptr));
        applyBHWindowLabel->setText(QCoreApplication::translate("AutoFitWidget", "Apply B-H Window", nullptr));
#if QT_CONFIG(tooltip)
        removeDCCheckBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Removes any DC offset from FID. This will only affect the display of the data, not the fitting.", nullptr));
#endif // QT_CONFIG(tooltip)
        removeDCLabel->setText(QCoreApplication::translate("AutoFitWidget", "Remove DC", nullptr));
#if QT_CONFIG(tooltip)
        zeroPadFIDCheckBox->setToolTip(QCoreApplication::translate("AutoFitWidget", "Extends length of FID by at least a factor of 2, filling with zeroes. This only affects the display of data, not the fitting.", nullptr));
#endif // QT_CONFIG(tooltip)
        zeroPadFIDLabel->setText(QCoreApplication::translate("AutoFitWidget", "Zero-pad FID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoFitWidget: public Ui_AutoFitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOFITWIDGET_H
