/********************************************************************************
** Form generated from reading UI file 'loadbatchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADBATCHDIALOG_H
#define UI_LOADBATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "autofitwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LoadBatchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QRadioButton *surveyButton;
    QSpinBox *surveySpinBox;
    QRadioButton *drScanButton;
    QSpinBox *drScanSpinBox;
    QRadioButton *batchButton;
    QSpinBox *batchSpinBox;
    QRadioButton *attenuationButton;
    QSpinBox *attenuationSpinBox;
    QRadioButton *drCorrButton;
    QSpinBox *drCorrSpinBox;
    QRadioButton *catButton;
    QSpinBox *catSpinBox;
    QRadioButton *amdorButton;
    QSpinBox *amdorSpinBox;
    AutoFitWidget *afw;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadBatchDialog)
    {
        if (LoadBatchDialog->objectName().isEmpty())
            LoadBatchDialog->setObjectName(QString::fromUtf8("LoadBatchDialog"));
        LoadBatchDialog->resize(237, 604);
        verticalLayout = new QVBoxLayout(LoadBatchDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        surveyButton = new QRadioButton(LoadBatchDialog);
        surveyButton->setObjectName(QString::fromUtf8("surveyButton"));
        surveyButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, surveyButton);

        surveySpinBox = new QSpinBox(LoadBatchDialog);
        surveySpinBox->setObjectName(QString::fromUtf8("surveySpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(surveySpinBox->sizePolicy().hasHeightForWidth());
        surveySpinBox->setSizePolicy(sizePolicy);
        surveySpinBox->setMinimum(0);
        surveySpinBox->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, surveySpinBox);

        drScanButton = new QRadioButton(LoadBatchDialog);
        drScanButton->setObjectName(QString::fromUtf8("drScanButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, drScanButton);

        drScanSpinBox = new QSpinBox(LoadBatchDialog);
        drScanSpinBox->setObjectName(QString::fromUtf8("drScanSpinBox"));
        sizePolicy.setHeightForWidth(drScanSpinBox->sizePolicy().hasHeightForWidth());
        drScanSpinBox->setSizePolicy(sizePolicy);
        drScanSpinBox->setMinimum(0);
        drScanSpinBox->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, drScanSpinBox);

        batchButton = new QRadioButton(LoadBatchDialog);
        batchButton->setObjectName(QString::fromUtf8("batchButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, batchButton);

        batchSpinBox = new QSpinBox(LoadBatchDialog);
        batchSpinBox->setObjectName(QString::fromUtf8("batchSpinBox"));
        sizePolicy.setHeightForWidth(batchSpinBox->sizePolicy().hasHeightForWidth());
        batchSpinBox->setSizePolicy(sizePolicy);
        batchSpinBox->setMinimum(0);
        batchSpinBox->setValue(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, batchSpinBox);

        attenuationButton = new QRadioButton(LoadBatchDialog);
        attenuationButton->setObjectName(QString::fromUtf8("attenuationButton"));

        formLayout->setWidget(3, QFormLayout::LabelRole, attenuationButton);

        attenuationSpinBox = new QSpinBox(LoadBatchDialog);
        attenuationSpinBox->setObjectName(QString::fromUtf8("attenuationSpinBox"));
        sizePolicy.setHeightForWidth(attenuationSpinBox->sizePolicy().hasHeightForWidth());
        attenuationSpinBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, attenuationSpinBox);

        drCorrButton = new QRadioButton(LoadBatchDialog);
        drCorrButton->setObjectName(QString::fromUtf8("drCorrButton"));

        formLayout->setWidget(4, QFormLayout::LabelRole, drCorrButton);

        drCorrSpinBox = new QSpinBox(LoadBatchDialog);
        drCorrSpinBox->setObjectName(QString::fromUtf8("drCorrSpinBox"));
        sizePolicy.setHeightForWidth(drCorrSpinBox->sizePolicy().hasHeightForWidth());
        drCorrSpinBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, drCorrSpinBox);

        catButton = new QRadioButton(LoadBatchDialog);
        catButton->setObjectName(QString::fromUtf8("catButton"));

        formLayout->setWidget(5, QFormLayout::LabelRole, catButton);

        catSpinBox = new QSpinBox(LoadBatchDialog);
        catSpinBox->setObjectName(QString::fromUtf8("catSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(catSpinBox->sizePolicy().hasHeightForWidth());
        catSpinBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::FieldRole, catSpinBox);

        amdorButton = new QRadioButton(LoadBatchDialog);
        amdorButton->setObjectName(QString::fromUtf8("amdorButton"));

        formLayout->setWidget(6, QFormLayout::LabelRole, amdorButton);

        amdorSpinBox = new QSpinBox(LoadBatchDialog);
        amdorSpinBox->setObjectName(QString::fromUtf8("amdorSpinBox"));
        sizePolicy1.setHeightForWidth(amdorSpinBox->sizePolicy().hasHeightForWidth());
        amdorSpinBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(6, QFormLayout::FieldRole, amdorSpinBox);


        verticalLayout->addLayout(formLayout);

        afw = new AutoFitWidget(LoadBatchDialog);
        afw->setObjectName(QString::fromUtf8("afw"));

        verticalLayout->addWidget(afw);

        buttonBox = new QDialogButtonBox(LoadBatchDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(1, 1);

        retranslateUi(LoadBatchDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoadBatchDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoadBatchDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoadBatchDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadBatchDialog)
    {
        LoadBatchDialog->setWindowTitle(QCoreApplication::translate("LoadBatchDialog", "Load Batch Scan", nullptr));
        surveyButton->setText(QCoreApplication::translate("LoadBatchDialog", "Survey", nullptr));
        surveySpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        drScanButton->setText(QCoreApplication::translate("LoadBatchDialog", "DR Scan", nullptr));
        drScanSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        batchButton->setText(QCoreApplication::translate("LoadBatchDialog", "Batch", nullptr));
        batchSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        attenuationButton->setText(QCoreApplication::translate("LoadBatchDialog", "Attenuation", nullptr));
        attenuationSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        drCorrButton->setText(QCoreApplication::translate("LoadBatchDialog", "DR Correlation", nullptr));
        drCorrSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        catButton->setText(QCoreApplication::translate("LoadBatchDialog", "Categorize", nullptr));
        catSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
        amdorButton->setText(QCoreApplication::translate("LoadBatchDialog", "AMDOR", nullptr));
        amdorSpinBox->setSpecialValueText(QCoreApplication::translate("LoadBatchDialog", "None!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadBatchDialog: public Ui_LoadBatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADBATCHDIALOG_H
