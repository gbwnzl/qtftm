/********************************************************************************
** Form generated from reading UI file 'amdorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMDORWIDGET_H
#define UI_AMDORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "amdorplot.h"
#include "analysiswidget.h"

QT_BEGIN_NAMESPACE

class Ui_AmdorWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QSplitter *splitter;
    AmdorPlot *amdorPlot;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTableView *amdorDataTable;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *exportButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *addLinkButton;
    QToolButton *removeLinkButton;
    QToolButton *currentButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDoubleSpinBox *thresholdBox;
    QToolButton *applyThresholdButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    AnalysisWidget *refPlot;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    AnalysisWidget *drPlot;

    void setupUi(QWidget *AmdorWidget)
    {
        if (AmdorWidget->objectName().isEmpty())
            AmdorWidget->setObjectName(QString::fromUtf8("AmdorWidget"));
        AmdorWidget->resize(958, 728);
        verticalLayout_5 = new QVBoxLayout(AmdorWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter_2 = new QSplitter(AmdorWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        amdorPlot = new AmdorPlot(splitter);
        amdorPlot->setObjectName(QString::fromUtf8("amdorPlot"));
        splitter->addWidget(amdorPlot);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        amdorDataTable = new QTableView(layoutWidget);
        amdorDataTable->setObjectName(QString::fromUtf8("amdorDataTable"));
        QFont font;
        font.setPointSize(9);
        amdorDataTable->setFont(font);
        amdorDataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        amdorDataTable->setAlternatingRowColors(true);
        amdorDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        amdorDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        amdorDataTable->setGridStyle(Qt::NoPen);
        amdorDataTable->setSortingEnabled(true);
        amdorDataTable->setCornerButtonEnabled(false);
        amdorDataTable->horizontalHeader()->setVisible(false);
        amdorDataTable->horizontalHeader()->setCascadingSectionResizes(true);
        amdorDataTable->horizontalHeader()->setHighlightSections(false);
        amdorDataTable->verticalHeader()->setVisible(false);
        amdorDataTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_3->addWidget(amdorDataTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        exportButton = new QToolButton(layoutWidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon);
        exportButton->setIconSize(QSize(20, 20));
        exportButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(exportButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addLinkButton = new QToolButton(layoutWidget);
        addLinkButton->setObjectName(QString::fromUtf8("addLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/add-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        addLinkButton->setIcon(icon1);
        addLinkButton->setIconSize(QSize(20, 20));
        addLinkButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(addLinkButton);

        removeLinkButton = new QToolButton(layoutWidget);
        removeLinkButton->setObjectName(QString::fromUtf8("removeLinkButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeLinkButton->setIcon(icon2);
        removeLinkButton->setIconSize(QSize(20, 20));
        removeLinkButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(removeLinkButton);

        currentButton = new QToolButton(layoutWidget);
        currentButton->setObjectName(QString::fromUtf8("currentButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/go-last.png"), QSize(), QIcon::Normal, QIcon::Off);
        currentButton->setIcon(icon3);
        currentButton->setIconSize(QSize(20, 20));
        currentButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(currentButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        thresholdBox = new QDoubleSpinBox(layoutWidget);
        thresholdBox->setObjectName(QString::fromUtf8("thresholdBox"));
        thresholdBox->setDecimals(3);
        thresholdBox->setMinimum(0.001000000000000);
        thresholdBox->setMaximum(0.999000000000000);
        thresholdBox->setSingleStep(0.050000000000000);
        thresholdBox->setValue(0.500000000000000);

        horizontalLayout_2->addWidget(thresholdBox);

        applyThresholdButton = new QToolButton(layoutWidget);
        applyThresholdButton->setObjectName(QString::fromUtf8("applyThresholdButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/threshold.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyThresholdButton->setIcon(icon4);
        applyThresholdButton->setIconSize(QSize(20, 20));
        applyThresholdButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(applyThresholdButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        splitter->addWidget(layoutWidget);
        splitter_2->addWidget(splitter);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        refPlot = new AnalysisWidget(layoutWidget1);
        refPlot->setObjectName(QString::fromUtf8("refPlot"));

        verticalLayout->addWidget(refPlot);

        verticalLayout->setStretch(1, 1);

        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        drPlot = new AnalysisWidget(layoutWidget1);
        drPlot->setObjectName(QString::fromUtf8("drPlot"));

        verticalLayout_2->addWidget(drPlot);

        verticalLayout_2->setStretch(1, 1);

        verticalLayout_4->addLayout(verticalLayout_2);

        splitter_2->addWidget(layoutWidget1);

        verticalLayout_5->addWidget(splitter_2);


        retranslateUi(AmdorWidget);

        QMetaObject::connectSlotsByName(AmdorWidget);
    } // setupUi

    void retranslateUi(QWidget *AmdorWidget)
    {
        AmdorWidget->setWindowTitle(QCoreApplication::translate("AmdorWidget", "AMDOR", nullptr));
        exportButton->setText(QCoreApplication::translate("AmdorWidget", "Export...", nullptr));
        addLinkButton->setText(QCoreApplication::translate("AmdorWidget", "Add Linkage", nullptr));
        removeLinkButton->setText(QCoreApplication::translate("AmdorWidget", "Remove Linkage", nullptr));
        currentButton->setText(QCoreApplication::translate("AmdorWidget", "Current", nullptr));
        label_3->setText(QCoreApplication::translate("AmdorWidget", "Threshold", nullptr));
        applyThresholdButton->setText(QCoreApplication::translate("AmdorWidget", "Apply", nullptr));
        label->setText(QCoreApplication::translate("AmdorWidget", "Reference Scan", nullptr));
        label_2->setText(QCoreApplication::translate("AmdorWidget", "DR Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AmdorWidget: public Ui_AmdorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMDORWIDGET_H
