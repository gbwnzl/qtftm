/********************************************************************************
** Form generated from reading UI file 'peaklistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEAKLISTWIDGET_H
#define UI_PEAKLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeakListWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *peakListTitle;
    QTableView *peakListTable;

    void setupUi(QWidget *PeakListWidget)
    {
        if (PeakListWidget->objectName().isEmpty())
            PeakListWidget->setObjectName(QString::fromUtf8("PeakListWidget"));
        PeakListWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(PeakListWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        peakListTitle = new QLabel(PeakListWidget);
        peakListTitle->setObjectName(QString::fromUtf8("peakListTitle"));
        peakListTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(peakListTitle);

        peakListTable = new QTableView(PeakListWidget);
        peakListTable->setObjectName(QString::fromUtf8("peakListTable"));
        peakListTable->setContextMenuPolicy(Qt::CustomContextMenu);
        peakListTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
        peakListTable->setProperty("showDropIndicator", QVariant(false));
        peakListTable->setDragDropOverwriteMode(false);
        peakListTable->setAlternatingRowColors(true);
        peakListTable->setSelectionMode(QAbstractItemView::SingleSelection);
        peakListTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        peakListTable->setSortingEnabled(true);
        peakListTable->setWordWrap(false);

        verticalLayout->addWidget(peakListTable);


        retranslateUi(PeakListWidget);

        QMetaObject::connectSlotsByName(PeakListWidget);
    } // setupUi

    void retranslateUi(QWidget *PeakListWidget)
    {
        PeakListWidget->setWindowTitle(QCoreApplication::translate("PeakListWidget", "Peak List", nullptr));
        peakListTitle->setText(QCoreApplication::translate("PeakListWidget", "Peak List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeakListWidget: public Ui_PeakListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEAKLISTWIDGET_H
