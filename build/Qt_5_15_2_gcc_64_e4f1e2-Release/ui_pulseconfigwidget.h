/********************************************************************************
** Form generated from reading UI file 'pulseconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PULSECONFIGWIDGET_H
#define UI_PULSECONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pulseplot.h"

QT_BEGIN_NAMESPACE

class Ui_PulseConfigWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *pulseConfigBox;
    QGridLayout *pulseConfigBoxLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSpinBox *protDelayBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpinBox *scopeDelayBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QDoubleSpinBox *repRateBox;
    QSpacerItem *verticalSpacer;
    PulsePlot *pulsePlot;

    void setupUi(QWidget *PulseConfigWidget)
    {
        if (PulseConfigWidget->objectName().isEmpty())
            PulseConfigWidget->setObjectName(QString::fromUtf8("PulseConfigWidget"));
        PulseConfigWidget->resize(949, 354);
        horizontalLayout_2 = new QHBoxLayout(PulseConfigWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pulseConfigBox = new QGroupBox(PulseConfigWidget);
        pulseConfigBox->setObjectName(QString::fromUtf8("pulseConfigBox"));
        pulseConfigBoxLayout = new QGridLayout(pulseConfigBox);
        pulseConfigBoxLayout->setObjectName(QString::fromUtf8("pulseConfigBoxLayout"));
        pulseConfigBoxLayout->setVerticalSpacing(2);
        label_2 = new QLabel(pulseConfigBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        pulseConfigBoxLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(pulseConfigBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        pulseConfigBoxLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(pulseConfigBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        pulseConfigBoxLayout->addWidget(label, 0, 0, 1, 1);

        pulseConfigBoxLayout->setColumnStretch(1, 1);
        pulseConfigBoxLayout->setColumnStretch(2, 1);

        verticalLayout->addWidget(pulseConfigBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(PulseConfigWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        protDelayBox = new QSpinBox(PulseConfigWidget);
        protDelayBox->setObjectName(QString::fromUtf8("protDelayBox"));
        protDelayBox->setMinimum(1);
        protDelayBox->setMaximum(100);

        horizontalLayout->addWidget(protDelayBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_5 = new QLabel(PulseConfigWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        scopeDelayBox = new QSpinBox(PulseConfigWidget);
        scopeDelayBox->setObjectName(QString::fromUtf8("scopeDelayBox"));
        scopeDelayBox->setMaximum(100);

        horizontalLayout->addWidget(scopeDelayBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(PulseConfigWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        repRateBox = new QDoubleSpinBox(PulseConfigWidget);
        repRateBox->setObjectName(QString::fromUtf8("repRateBox"));
        repRateBox->setKeyboardTracking(false);
        repRateBox->setDecimals(1);
        repRateBox->setMinimum(0.100000000000000);
        repRateBox->setMaximum(50.000000000000000);
        repRateBox->setValue(10.000000000000000);

        horizontalLayout->addWidget(repRateBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        pulsePlot = new PulsePlot(PulseConfigWidget);
        pulsePlot->setObjectName(QString::fromUtf8("pulsePlot"));

        horizontalLayout_2->addWidget(pulsePlot);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(PulseConfigWidget);

        QMetaObject::connectSlotsByName(PulseConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *PulseConfigWidget)
    {
        PulseConfigWidget->setWindowTitle(QCoreApplication::translate("PulseConfigWidget", "Form", nullptr));
        pulseConfigBox->setTitle(QCoreApplication::translate("PulseConfigWidget", "Pulse Configuration", nullptr));
        label_2->setText(QCoreApplication::translate("PulseConfigWidget", "Delay", nullptr));
        label_3->setText(QCoreApplication::translate("PulseConfigWidget", "Width/End", nullptr));
        label->setText(QString());
        label_6->setText(QCoreApplication::translate("PulseConfigWidget", "Prot", nullptr));
        label_5->setText(QCoreApplication::translate("PulseConfigWidget", "Scope", nullptr));
        label_4->setText(QCoreApplication::translate("PulseConfigWidget", "Rep Rate", nullptr));
        repRateBox->setSuffix(QCoreApplication::translate("PulseConfigWidget", " Hz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PulseConfigWidget: public Ui_PulseConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PULSECONFIGWIDGET_H
