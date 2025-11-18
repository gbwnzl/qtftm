/********************************************************************************
** Form generated from reading UI file 'analysiswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISWIDGET_H
#define UI_ANALYSISWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "analysisplot.h"

QT_BEGIN_NAMESPACE

class Ui_AnalysisWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *topLayout;
    QLabel *scanLabel;
    QSpinBox *analysisScanSpinBox;
    QPushButton *currentScanButton;
    AnalysisPlot *analysisPlot;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *leftVerticalLayout;
    QLabel *notesLabel;
    QPlainTextEdit *analysisNotes;
    QVBoxLayout *verticalLayout;
    QLabel *linesLabel;
    QListView *lineListView;

    void setupUi(QWidget *AnalysisWidget)
    {
        if (AnalysisWidget->objectName().isEmpty())
            AnalysisWidget->setObjectName(QString::fromUtf8("AnalysisWidget"));
        AnalysisWidget->resize(594, 416);
        verticalLayout_3 = new QVBoxLayout(AnalysisWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        topLayout = new QHBoxLayout();
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        scanLabel = new QLabel(AnalysisWidget);
        scanLabel->setObjectName(QString::fromUtf8("scanLabel"));
        scanLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        topLayout->addWidget(scanLabel);

        analysisScanSpinBox = new QSpinBox(AnalysisWidget);
        analysisScanSpinBox->setObjectName(QString::fromUtf8("analysisScanSpinBox"));
        analysisScanSpinBox->setKeyboardTracking(false);
        analysisScanSpinBox->setMaximum(2147483647);

        topLayout->addWidget(analysisScanSpinBox);

        currentScanButton = new QPushButton(AnalysisWidget);
        currentScanButton->setObjectName(QString::fromUtf8("currentScanButton"));

        topLayout->addWidget(currentScanButton);


        verticalLayout_3->addLayout(topLayout);

        analysisPlot = new AnalysisPlot(AnalysisWidget);
        analysisPlot->setObjectName(QString::fromUtf8("analysisPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(analysisPlot->sizePolicy().hasHeightForWidth());
        analysisPlot->setSizePolicy(sizePolicy);
        analysisPlot->setMinimumSize(QSize(0, 200));
        analysisPlot->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout_3->addWidget(analysisPlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftVerticalLayout = new QVBoxLayout();
        leftVerticalLayout->setObjectName(QString::fromUtf8("leftVerticalLayout"));
        notesLabel = new QLabel(AnalysisWidget);
        notesLabel->setObjectName(QString::fromUtf8("notesLabel"));
        notesLabel->setAlignment(Qt::AlignCenter);

        leftVerticalLayout->addWidget(notesLabel);

        analysisNotes = new QPlainTextEdit(AnalysisWidget);
        analysisNotes->setObjectName(QString::fromUtf8("analysisNotes"));
        analysisNotes->setFocusPolicy(Qt::ClickFocus);

        leftVerticalLayout->addWidget(analysisNotes);


        horizontalLayout_2->addLayout(leftVerticalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        linesLabel = new QLabel(AnalysisWidget);
        linesLabel->setObjectName(QString::fromUtf8("linesLabel"));
        linesLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(linesLabel);

        lineListView = new QListView(AnalysisWidget);
        lineListView->setObjectName(QString::fromUtf8("lineListView"));
        lineListView->setContextMenuPolicy(Qt::CustomContextMenu);
        lineListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lineListView->setProperty("showDropIndicator", QVariant(false));
        lineListView->setAlternatingRowColors(true);
        lineListView->setUniformItemSizes(true);

        verticalLayout->addWidget(lineListView);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(1, 3);
        verticalLayout_3->setStretch(2, 1);
        QWidget::setTabOrder(analysisScanSpinBox, currentScanButton);
        QWidget::setTabOrder(currentScanButton, lineListView);
        QWidget::setTabOrder(lineListView, analysisNotes);

        retranslateUi(AnalysisWidget);

        QMetaObject::connectSlotsByName(AnalysisWidget);
    } // setupUi

    void retranslateUi(QWidget *AnalysisWidget)
    {
        AnalysisWidget->setWindowTitle(QCoreApplication::translate("AnalysisWidget", "Form", nullptr));
        scanLabel->setText(QCoreApplication::translate("AnalysisWidget", "Scan", nullptr));
        analysisScanSpinBox->setSpecialValueText(QCoreApplication::translate("AnalysisWidget", "None", nullptr));
        analysisScanSpinBox->setPrefix(QString());
        currentScanButton->setText(QCoreApplication::translate("AnalysisWidget", "Current", nullptr));
        notesLabel->setText(QCoreApplication::translate("AnalysisWidget", "Notes", nullptr));
        linesLabel->setText(QCoreApplication::translate("AnalysisWidget", "Lines", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisWidget: public Ui_AnalysisWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISWIDGET_H
