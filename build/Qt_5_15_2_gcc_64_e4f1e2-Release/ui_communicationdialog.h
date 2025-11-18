/********************************************************************************
** Form generated from reading UI file 'communicationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMUNICATIONDIALOG_H
#define UI_COMMUNICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommunicationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGroupBox *gpibBox;
    QFormLayout *formLayout_3;
    QLabel *deviceLabel;
    QComboBox *gpibDeviceComboBox;
    QLabel *busAddressLabel;
    QSpinBox *busAddressSpinBox;
    QPushButton *gpibTestButton;
    QGroupBox *tcpBox;
    QFormLayout *formLayout;
    QLabel *deviceLabel_2;
    QComboBox *tcpDeviceComboBox;
    QPushButton *tcpTestButton;
    QLabel *ipAddressLabel;
    QLineEdit *ipLineEdit;
    QLabel *portLabel_3;
    QSpinBox *portSpinBox;
    QGroupBox *rs232Box;
    QFormLayout *formLayout_11;
    QLabel *deviceLabel_3;
    QComboBox *rs232DeviceComboBox;
    QPushButton *rs232TestButton;
    QLabel *deviceIDLabel;
    QLineEdit *rs232DeviceIDLineEdit;
    QLabel *baudRateLabel_2;
    QComboBox *baudRateComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CommunicationDialog)
    {
        if (CommunicationDialog->objectName().isEmpty())
            CommunicationDialog->setObjectName(QString::fromUtf8("CommunicationDialog"));
        CommunicationDialog->resize(669, 233);
        verticalLayout = new QVBoxLayout(CommunicationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CommunicationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gpibBox = new QGroupBox(CommunicationDialog);
        gpibBox->setObjectName(QString::fromUtf8("gpibBox"));
        formLayout_3 = new QFormLayout(gpibBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        deviceLabel = new QLabel(gpibBox);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, deviceLabel);

        gpibDeviceComboBox = new QComboBox(gpibBox);
        gpibDeviceComboBox->setObjectName(QString::fromUtf8("gpibDeviceComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, gpibDeviceComboBox);

        busAddressLabel = new QLabel(gpibBox);
        busAddressLabel->setObjectName(QString::fromUtf8("busAddressLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, busAddressLabel);

        busAddressSpinBox = new QSpinBox(gpibBox);
        busAddressSpinBox->setObjectName(QString::fromUtf8("busAddressSpinBox"));
        busAddressSpinBox->setMaximum(32);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, busAddressSpinBox);

        gpibTestButton = new QPushButton(gpibBox);
        gpibTestButton->setObjectName(QString::fromUtf8("gpibTestButton"));

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, gpibTestButton);


        horizontalLayout->addWidget(gpibBox);

        tcpBox = new QGroupBox(CommunicationDialog);
        tcpBox->setObjectName(QString::fromUtf8("tcpBox"));
        formLayout = new QFormLayout(tcpBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        deviceLabel_2 = new QLabel(tcpBox);
        deviceLabel_2->setObjectName(QString::fromUtf8("deviceLabel_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, deviceLabel_2);

        tcpDeviceComboBox = new QComboBox(tcpBox);
        tcpDeviceComboBox->setObjectName(QString::fromUtf8("tcpDeviceComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tcpDeviceComboBox);

        tcpTestButton = new QPushButton(tcpBox);
        tcpTestButton->setObjectName(QString::fromUtf8("tcpTestButton"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, tcpTestButton);

        ipAddressLabel = new QLabel(tcpBox);
        ipAddressLabel->setObjectName(QString::fromUtf8("ipAddressLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ipAddressLabel);

        ipLineEdit = new QLineEdit(tcpBox);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ipLineEdit);

        portLabel_3 = new QLabel(tcpBox);
        portLabel_3->setObjectName(QString::fromUtf8("portLabel_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, portLabel_3);

        portSpinBox = new QSpinBox(tcpBox);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMaximum(2147483647);

        formLayout->setWidget(3, QFormLayout::FieldRole, portSpinBox);


        horizontalLayout->addWidget(tcpBox);

        rs232Box = new QGroupBox(CommunicationDialog);
        rs232Box->setObjectName(QString::fromUtf8("rs232Box"));
        formLayout_11 = new QFormLayout(rs232Box);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        deviceLabel_3 = new QLabel(rs232Box);
        deviceLabel_3->setObjectName(QString::fromUtf8("deviceLabel_3"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, deviceLabel_3);

        rs232DeviceComboBox = new QComboBox(rs232Box);
        rs232DeviceComboBox->setObjectName(QString::fromUtf8("rs232DeviceComboBox"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, rs232DeviceComboBox);

        rs232TestButton = new QPushButton(rs232Box);
        rs232TestButton->setObjectName(QString::fromUtf8("rs232TestButton"));

        formLayout_11->setWidget(3, QFormLayout::SpanningRole, rs232TestButton);

        deviceIDLabel = new QLabel(rs232Box);
        deviceIDLabel->setObjectName(QString::fromUtf8("deviceIDLabel"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, deviceIDLabel);

        rs232DeviceIDLineEdit = new QLineEdit(rs232Box);
        rs232DeviceIDLineEdit->setObjectName(QString::fromUtf8("rs232DeviceIDLineEdit"));

        formLayout_11->setWidget(1, QFormLayout::FieldRole, rs232DeviceIDLineEdit);

        baudRateLabel_2 = new QLabel(rs232Box);
        baudRateLabel_2->setObjectName(QString::fromUtf8("baudRateLabel_2"));

        formLayout_11->setWidget(2, QFormLayout::LabelRole, baudRateLabel_2);

        baudRateComboBox = new QComboBox(rs232Box);
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        formLayout_11->setWidget(2, QFormLayout::FieldRole, baudRateComboBox);


        horizontalLayout->addWidget(rs232Box);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CommunicationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CommunicationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CommunicationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CommunicationDialog, SLOT(reject()));

        baudRateComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CommunicationDialog);
    } // setupUi

    void retranslateUi(QDialog *CommunicationDialog)
    {
        CommunicationDialog->setWindowTitle(QCoreApplication::translate("CommunicationDialog", "Communication Settings", nullptr));
        label->setText(QCoreApplication::translate("CommunicationDialog", "<html><head/><body><p>Select a device to change its communication settings and test its connection.<br />The settings you choose will not be saved until you press the test connection button.</p></body></html>", nullptr));
        gpibBox->setTitle(QCoreApplication::translate("CommunicationDialog", "GPIB", nullptr));
        deviceLabel->setText(QCoreApplication::translate("CommunicationDialog", "Device", nullptr));
        busAddressLabel->setText(QCoreApplication::translate("CommunicationDialog", "Bus Address", nullptr));
        gpibTestButton->setText(QCoreApplication::translate("CommunicationDialog", "Test Connection", nullptr));
        tcpBox->setTitle(QCoreApplication::translate("CommunicationDialog", "TCP", nullptr));
        deviceLabel_2->setText(QCoreApplication::translate("CommunicationDialog", "Device", nullptr));
        tcpTestButton->setText(QCoreApplication::translate("CommunicationDialog", "Test Connection", nullptr));
        ipAddressLabel->setText(QCoreApplication::translate("CommunicationDialog", "IP Address", nullptr));
        portLabel_3->setText(QCoreApplication::translate("CommunicationDialog", "Port", nullptr));
        rs232Box->setTitle(QCoreApplication::translate("CommunicationDialog", "RS232", nullptr));
        deviceLabel_3->setText(QCoreApplication::translate("CommunicationDialog", "Device", nullptr));
        rs232TestButton->setText(QCoreApplication::translate("CommunicationDialog", "Test Connection", nullptr));
        deviceIDLabel->setText(QCoreApplication::translate("CommunicationDialog", "Device ID", nullptr));
        baudRateLabel_2->setText(QCoreApplication::translate("CommunicationDialog", "Baud Rate", nullptr));
        baudRateComboBox->setItemText(0, QCoreApplication::translate("CommunicationDialog", "300", nullptr));
        baudRateComboBox->setItemText(1, QCoreApplication::translate("CommunicationDialog", "1200", nullptr));
        baudRateComboBox->setItemText(2, QCoreApplication::translate("CommunicationDialog", "2400", nullptr));
        baudRateComboBox->setItemText(3, QCoreApplication::translate("CommunicationDialog", "4800", nullptr));
        baudRateComboBox->setItemText(4, QCoreApplication::translate("CommunicationDialog", "9600", nullptr));
        baudRateComboBox->setItemText(5, QCoreApplication::translate("CommunicationDialog", "14400", nullptr));
        baudRateComboBox->setItemText(6, QCoreApplication::translate("CommunicationDialog", "19200", nullptr));
        baudRateComboBox->setItemText(7, QCoreApplication::translate("CommunicationDialog", "28800", nullptr));
        baudRateComboBox->setItemText(8, QCoreApplication::translate("CommunicationDialog", "38400", nullptr));
        baudRateComboBox->setItemText(9, QCoreApplication::translate("CommunicationDialog", "57600", nullptr));
        baudRateComboBox->setItemText(10, QCoreApplication::translate("CommunicationDialog", "115200", nullptr));
        baudRateComboBox->setItemText(11, QCoreApplication::translate("CommunicationDialog", "230400", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CommunicationDialog: public Ui_CommunicationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMUNICATIONDIALOG_H
