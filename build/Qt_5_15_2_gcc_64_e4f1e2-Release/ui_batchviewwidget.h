/********************************************************************************
** Form generated from reading UI file 'batchviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHVIEWWIDGET_H
#define UI_BATCHVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "analysiswidget.h"
#include "autofitwidget.h"
#include "peaklistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_BatchViewWidget
{
public:
    QAction *actionPrint_Scan;
    QAction *actionPrint_Batch;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *printScanButton;
    QPushButton *printBatchButton;
    QSpacerItem *verticalSpacer;
    AutoFitWidget *afw;
    QPushButton *reprocessButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QSplitter *batchSplitter;
    QSplitter *splitter;
    AnalysisWidget *analysisWidget;
    PeakListWidget *peakListWidget;
    QLabel *statusLabel;

    void setupUi(QWidget *BatchViewWidget)
    {
        if (BatchViewWidget->objectName().isEmpty())
            BatchViewWidget->setObjectName(QString::fromUtf8("BatchViewWidget"));
        BatchViewWidget->resize(1029, 692);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BatchViewWidget->sizePolicy().hasHeightForWidth());
        BatchViewWidget->setSizePolicy(sizePolicy);
        actionPrint_Scan = new QAction(BatchViewWidget);
        actionPrint_Scan->setObjectName(QString::fromUtf8("actionPrint_Scan"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/printscan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Scan->setIcon(icon);
        actionPrint_Batch = new QAction(BatchViewWidget);
        actionPrint_Batch->setObjectName(QString::fromUtf8("actionPrint_Batch"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/printbatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Batch->setIcon(icon1);
        verticalLayout_3 = new QVBoxLayout(BatchViewWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        printScanButton = new QPushButton(BatchViewWidget);
        printScanButton->setObjectName(QString::fromUtf8("printScanButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/printscan.png"), QSize(), QIcon::Normal, QIcon::Off);
        printScanButton->setIcon(icon2);
        printScanButton->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(printScanButton);

        printBatchButton = new QPushButton(BatchViewWidget);
        printBatchButton->setObjectName(QString::fromUtf8("printBatchButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/printbatch.png"), QSize(), QIcon::Normal, QIcon::Off);
        printBatchButton->setIcon(icon3);

        verticalLayout->addWidget(printBatchButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        afw = new AutoFitWidget(BatchViewWidget);
        afw->setObjectName(QString::fromUtf8("afw"));

        verticalLayout->addWidget(afw);

        reprocessButton = new QPushButton(BatchViewWidget);
        reprocessButton->setObjectName(QString::fromUtf8("reprocessButton"));

        verticalLayout->addWidget(reprocessButton);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget = new QTabWidget(BatchViewWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        batchSplitter = new QSplitter(tab);
        batchSplitter->setObjectName(QString::fromUtf8("batchSplitter"));
        batchSplitter->setOrientation(Qt::Vertical);
        splitter = new QSplitter(batchSplitter);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        analysisWidget = new AnalysisWidget(splitter);
        analysisWidget->setObjectName(QString::fromUtf8("analysisWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(analysisWidget->sizePolicy().hasHeightForWidth());
        analysisWidget->setSizePolicy(sizePolicy1);
        analysisWidget->setMinimumSize(QSize(0, 300));
        splitter->addWidget(analysisWidget);
        peakListWidget = new PeakListWidget(splitter);
        peakListWidget->setObjectName(QString::fromUtf8("peakListWidget"));
        peakListWidget->setMinimumSize(QSize(300, 150));
        splitter->addWidget(peakListWidget);
        batchSplitter->addWidget(splitter);

        verticalLayout_2->addWidget(batchSplitter);

        tabWidget->addTab(tab, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        statusLabel = new QLabel(BatchViewWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout_3->addWidget(statusLabel);


        retranslateUi(BatchViewWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BatchViewWidget);
    } // setupUi

    void retranslateUi(QWidget *BatchViewWidget)
    {
        BatchViewWidget->setWindowTitle(QCoreApplication::translate("BatchViewWidget", "Batch View", nullptr));
        actionPrint_Scan->setText(QCoreApplication::translate("BatchViewWidget", "Print Scan", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint_Scan->setToolTip(QCoreApplication::translate("BatchViewWidget", "Print the currently displayed scan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrint_Batch->setText(QCoreApplication::translate("BatchViewWidget", "Print Batch", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint_Batch->setToolTip(QCoreApplication::translate("BatchViewWidget", "Print the displayed batch scan", nullptr));
#endif // QT_CONFIG(tooltip)
        printScanButton->setText(QCoreApplication::translate("BatchViewWidget", "  Print Scan", nullptr));
        printBatchButton->setText(QCoreApplication::translate("BatchViewWidget", "  Print Batch", nullptr));
        reprocessButton->setText(QCoreApplication::translate("BatchViewWidget", "Reprocess", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("BatchViewWidget", "Display", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BatchViewWidget: public Ui_BatchViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHVIEWWIDGET_H
