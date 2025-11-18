/********************************************************************************
** Form generated from reading UI file 'ioboardconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOBOARDCONFIGDIALOG_H
#define UI_IOBOARDCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IOBoardConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *serialNoLabel;
    QSpinBox *serialNoSpinBox;
    QPushButton *testConnectionButton;
    QLabel *highBandLineLabel;
    QSpinBox *highBandLineSpinBox;
    QLabel *cWLineLabel;
    QSpinBox *cwLineSpinBox;
    QLabel *counterTimerOffsetLabel;
    QSpinBox *counterTimerOffsetSpinBox;
    QLabel *magnetLineLabel;
    QSpinBox *magnetLineSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IOBoardConfigDialog)
    {
        if (IOBoardConfigDialog->objectName().isEmpty())
            IOBoardConfigDialog->setObjectName(QString::fromUtf8("IOBoardConfigDialog"));
        IOBoardConfigDialog->resize(251, 192);
        verticalLayout = new QVBoxLayout(IOBoardConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        serialNoLabel = new QLabel(IOBoardConfigDialog);
        serialNoLabel->setObjectName(QString::fromUtf8("serialNoLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, serialNoLabel);

        serialNoSpinBox = new QSpinBox(IOBoardConfigDialog);
        serialNoSpinBox->setObjectName(QString::fromUtf8("serialNoSpinBox"));
        serialNoSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNoSpinBox->setKeyboardTracking(true);
        serialNoSpinBox->setMaximum(2147483647);
        serialNoSpinBox->setSingleStep(0);
        serialNoSpinBox->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, serialNoSpinBox);

        testConnectionButton = new QPushButton(IOBoardConfigDialog);
        testConnectionButton->setObjectName(QString::fromUtf8("testConnectionButton"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, testConnectionButton);

        highBandLineLabel = new QLabel(IOBoardConfigDialog);
        highBandLineLabel->setObjectName(QString::fromUtf8("highBandLineLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, highBandLineLabel);

        highBandLineSpinBox = new QSpinBox(IOBoardConfigDialog);
        highBandLineSpinBox->setObjectName(QString::fromUtf8("highBandLineSpinBox"));
        highBandLineSpinBox->setMaximum(3);
        highBandLineSpinBox->setValue(1);

        formLayout->setWidget(3, QFormLayout::FieldRole, highBandLineSpinBox);

        cWLineLabel = new QLabel(IOBoardConfigDialog);
        cWLineLabel->setObjectName(QString::fromUtf8("cWLineLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cWLineLabel);

        cwLineSpinBox = new QSpinBox(IOBoardConfigDialog);
        cwLineSpinBox->setObjectName(QString::fromUtf8("cwLineSpinBox"));
        cwLineSpinBox->setMaximum(3);

        formLayout->setWidget(2, QFormLayout::FieldRole, cwLineSpinBox);

        counterTimerOffsetLabel = new QLabel(IOBoardConfigDialog);
        counterTimerOffsetLabel->setObjectName(QString::fromUtf8("counterTimerOffsetLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, counterTimerOffsetLabel);

        counterTimerOffsetSpinBox = new QSpinBox(IOBoardConfigDialog);
        counterTimerOffsetSpinBox->setObjectName(QString::fromUtf8("counterTimerOffsetSpinBox"));
        counterTimerOffsetSpinBox->setMinimum(4);
        counterTimerOffsetSpinBox->setMaximum(8);
        counterTimerOffsetSpinBox->setValue(4);

        formLayout->setWidget(5, QFormLayout::FieldRole, counterTimerOffsetSpinBox);

        magnetLineLabel = new QLabel(IOBoardConfigDialog);
        magnetLineLabel->setObjectName(QString::fromUtf8("magnetLineLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, magnetLineLabel);

        magnetLineSpinBox = new QSpinBox(IOBoardConfigDialog);
        magnetLineSpinBox->setObjectName(QString::fromUtf8("magnetLineSpinBox"));
        magnetLineSpinBox->setMaximum(3);
        magnetLineSpinBox->setValue(2);

        formLayout->setWidget(4, QFormLayout::FieldRole, magnetLineSpinBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(IOBoardConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IOBoardConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), IOBoardConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IOBoardConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IOBoardConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *IOBoardConfigDialog)
    {
        IOBoardConfigDialog->setWindowTitle(QCoreApplication::translate("IOBoardConfigDialog", "IO Board Settings", nullptr));
        serialNoLabel->setText(QCoreApplication::translate("IOBoardConfigDialog", "Serial No", nullptr));
#if QT_CONFIG(tooltip)
        serialNoSpinBox->setToolTip(QCoreApplication::translate("IOBoardConfigDialog", "Serial number of LabJack device", nullptr));
#endif // QT_CONFIG(tooltip)
        testConnectionButton->setText(QCoreApplication::translate("IOBoardConfigDialog", "Test Connection", nullptr));
        highBandLineLabel->setText(QCoreApplication::translate("IOBoardConfigDialog", "High Band Line", nullptr));
        highBandLineSpinBox->setPrefix(QCoreApplication::translate("IOBoardConfigDialog", "CIO ", nullptr));
        cWLineLabel->setText(QCoreApplication::translate("IOBoardConfigDialog", "CW Line", nullptr));
        cwLineSpinBox->setPrefix(QCoreApplication::translate("IOBoardConfigDialog", "CIO ", nullptr));
        counterTimerOffsetLabel->setText(QCoreApplication::translate("IOBoardConfigDialog", "Counter/Timer Offset", nullptr));
#if QT_CONFIG(tooltip)
        counterTimerOffsetSpinBox->setToolTip(QCoreApplication::translate("IOBoardConfigDialog", "<html><head/><body><p>Offset for counter/timer pins (see LabJack Documentation, section 2.9).</p><p><br/></p><p>This number indicates the starting channel for timers and counters (4 is FIO4, 5 is FIO5, etc., 8 is EIO0).</p><p>Starting with that pin, up to 4 total will be used in sequence depending on how many counters and timers are active.</p><p>Do not put any analog/digital inputs or outputs on those lines! They are reserved for counters and timers.</p><p>Note that if you enable/disable timers or counters, the pin assignments will change!</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        magnetLineLabel->setText(QCoreApplication::translate("IOBoardConfigDialog", "Magnet Line", nullptr));
        magnetLineSpinBox->setPrefix(QCoreApplication::translate("IOBoardConfigDialog", "CIO ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IOBoardConfigDialog: public Ui_IOBoardConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOBOARDCONFIGDIALOG_H
