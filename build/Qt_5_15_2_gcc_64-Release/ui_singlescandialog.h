/********************************************************************************
** Form generated from reading UI file 'singlescandialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLESCANDIALOG_H
#define UI_SINGLESCANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "singlescanwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SingleScanDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    SingleScanWidget *singleScanWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SingleScanDialog)
    {
        if (SingleScanDialog->objectName().isEmpty())
            SingleScanDialog->setObjectName(QString::fromUtf8("SingleScanDialog"));
        SingleScanDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(SingleScanDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        singleScanWidget = new SingleScanWidget(SingleScanDialog);
        singleScanWidget->setObjectName(QString::fromUtf8("singleScanWidget"));

        horizontalLayout->addWidget(singleScanWidget);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SingleScanDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SingleScanDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SingleScanDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SingleScanDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SingleScanDialog);
    } // setupUi

    void retranslateUi(QDialog *SingleScanDialog)
    {
        SingleScanDialog->setWindowTitle(QCoreApplication::translate("SingleScanDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleScanDialog: public Ui_SingleScanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLESCANDIALOG_H
