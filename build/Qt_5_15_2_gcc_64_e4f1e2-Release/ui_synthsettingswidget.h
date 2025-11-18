/********************************************************************************
** Form generated from reading UI file 'synthsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNTHSETTINGSWIDGET_H
#define UI_SYNTHSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SynthSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *numBandsSpinBox;
    QCheckBox *autoSwitchCheckBox;
    QLabel *label_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *bandComboBox;
    QLabel *minLabel;
    QDoubleSpinBox *minDoubleSpinBox;
    QLabel *maxLabel;
    QDoubleSpinBox *maxDoubleSpinBox;
    QLabel *freqCalcLabel;
    QLabel *multLabel;
    QSpinBox *multSpinBox;
    QLabel *offsetLabel;
    QDoubleSpinBox *offsetDoubleSpinBox;
    QLabel *switchLabel;
    QComboBox *switchComboBox;
    QLabel *nameLabel;
    QLineEdit *bandNameLineEdit;

    void setupUi(QWidget *SynthSettingsWidget)
    {
        if (SynthSettingsWidget->objectName().isEmpty())
            SynthSettingsWidget->setObjectName(QString::fromUtf8("SynthSettingsWidget"));
        SynthSettingsWidget->resize(331, 345);
        verticalLayout = new QVBoxLayout(SynthSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label = new QLabel(SynthSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        numBandsSpinBox = new QSpinBox(SynthSettingsWidget);
        numBandsSpinBox->setObjectName(QString::fromUtf8("numBandsSpinBox"));
        numBandsSpinBox->setMinimum(1);
        numBandsSpinBox->setMaximum(25);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, numBandsSpinBox);

        autoSwitchCheckBox = new QCheckBox(SynthSettingsWidget);
        autoSwitchCheckBox->setObjectName(QString::fromUtf8("autoSwitchCheckBox"));
        autoSwitchCheckBox->setChecked(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, autoSwitchCheckBox);


        verticalLayout->addLayout(formLayout_2);

        label_2 = new QLabel(SynthSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        groupBox = new QGroupBox(SynthSettingsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        bandComboBox = new QComboBox(groupBox);
        bandComboBox->addItem(QString());
        bandComboBox->setObjectName(QString::fromUtf8("bandComboBox"));
        bandComboBox->setMaxVisibleItems(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, bandComboBox);

        minLabel = new QLabel(groupBox);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, minLabel);

        minDoubleSpinBox = new QDoubleSpinBox(groupBox);
        minDoubleSpinBox->setObjectName(QString::fromUtf8("minDoubleSpinBox"));
        minDoubleSpinBox->setDecimals(3);
        minDoubleSpinBox->setMinimum(50.000000000000000);
        minDoubleSpinBox->setMaximum(1000000.000000000000000);
        minDoubleSpinBox->setSingleStep(1000.000000000000000);
        minDoubleSpinBox->setValue(5000.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, minDoubleSpinBox);

        maxLabel = new QLabel(groupBox);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, maxLabel);

        maxDoubleSpinBox = new QDoubleSpinBox(groupBox);
        maxDoubleSpinBox->setObjectName(QString::fromUtf8("maxDoubleSpinBox"));
        maxDoubleSpinBox->setDecimals(3);
        maxDoubleSpinBox->setMinimum(50.000000000000000);
        maxDoubleSpinBox->setMaximum(1000000.000000000000000);
        maxDoubleSpinBox->setSingleStep(1000.000000000000000);
        maxDoubleSpinBox->setValue(26500.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, maxDoubleSpinBox);

        freqCalcLabel = new QLabel(groupBox);
        freqCalcLabel->setObjectName(QString::fromUtf8("freqCalcLabel"));
        freqCalcLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::SpanningRole, freqCalcLabel);

        multLabel = new QLabel(groupBox);
        multLabel->setObjectName(QString::fromUtf8("multLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, multLabel);

        multSpinBox = new QSpinBox(groupBox);
        multSpinBox->setObjectName(QString::fromUtf8("multSpinBox"));
        multSpinBox->setMinimum(1);
        multSpinBox->setMaximum(1000);

        formLayout->setWidget(5, QFormLayout::FieldRole, multSpinBox);

        offsetLabel = new QLabel(groupBox);
        offsetLabel->setObjectName(QString::fromUtf8("offsetLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, offsetLabel);

        offsetDoubleSpinBox = new QDoubleSpinBox(groupBox);
        offsetDoubleSpinBox->setObjectName(QString::fromUtf8("offsetDoubleSpinBox"));
        offsetDoubleSpinBox->setDecimals(3);
        offsetDoubleSpinBox->setMinimum(-1000000.000000000000000);
        offsetDoubleSpinBox->setMaximum(1000000.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, offsetDoubleSpinBox);

        switchLabel = new QLabel(groupBox);
        switchLabel->setObjectName(QString::fromUtf8("switchLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, switchLabel);

        switchComboBox = new QComboBox(groupBox);
        switchComboBox->addItem(QString());
        switchComboBox->addItem(QString());
        switchComboBox->setObjectName(QString::fromUtf8("switchComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(switchComboBox->sizePolicy().hasHeightForWidth());
        switchComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(8, QFormLayout::FieldRole, switchComboBox);

        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        bandNameLineEdit = new QLineEdit(groupBox);
        bandNameLineEdit->setObjectName(QString::fromUtf8("bandNameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bandNameLineEdit);


        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(2, 1);

        retranslateUi(SynthSettingsWidget);

        QMetaObject::connectSlotsByName(SynthSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SynthSettingsWidget)
    {
        SynthSettingsWidget->setWindowTitle(QCoreApplication::translate("SynthSettingsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SynthSettingsWidget", "# Bands", nullptr));
        autoSwitchCheckBox->setText(QCoreApplication::translate("SynthSettingsWidget", "Switch Automatically", nullptr));
        label_2->setText(QCoreApplication::translate("SynthSettingsWidget", "Bands must be ordered from lowest to highest frequency, but they may overlap.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SynthSettingsWidget", "Band Settings", nullptr));
        label_3->setText(QCoreApplication::translate("SynthSettingsWidget", "Band", nullptr));
        bandComboBox->setItemText(0, QCoreApplication::translate("SynthSettingsWidget", "0", nullptr));

        minLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Min", nullptr));
        minDoubleSpinBox->setSuffix(QCoreApplication::translate("SynthSettingsWidget", " MHz", nullptr));
        maxLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Max", nullptr));
        maxDoubleSpinBox->setSuffix(QCoreApplication::translate("SynthSettingsWidget", " MHz", nullptr));
        freqCalcLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Synth freq = Target freq/Multiplication + Offset", nullptr));
        multLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Multiplication", nullptr));
        multSpinBox->setSuffix(QCoreApplication::translate("SynthSettingsWidget", "x", nullptr));
        offsetLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Offset", nullptr));
        offsetDoubleSpinBox->setSuffix(QCoreApplication::translate("SynthSettingsWidget", " MHz", nullptr));
        switchLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Switch", nullptr));
        switchComboBox->setItemText(0, QCoreApplication::translate("SynthSettingsWidget", "At previous band max", nullptr));
        switchComboBox->setItemText(1, QCoreApplication::translate("SynthSettingsWidget", "At this band min", nullptr));

        nameLabel->setText(QCoreApplication::translate("SynthSettingsWidget", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SynthSettingsWidget: public Ui_SynthSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNTHSETTINGSWIDGET_H
