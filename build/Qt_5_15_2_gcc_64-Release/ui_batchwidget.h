/********************************************************************************
** Form generated from reading UI file 'batchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHWIDGET_H
#define UI_BATCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *batchAddButton;
    QPushButton *batchInsertButton;
    QPushButton *batchAddCalButton;
    QPushButton *batchInsertCalButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *batchMoveUpButton;
    QPushButton *batchMoveDownButton;
    QPushButton *batchEditButton;
    QPushButton *batchDeleteButton;
    QSpacerItem *verticalSpacer;
    QPushButton *batchClearButton;
    QPushButton *sortButton;
    QPushButton *batchLoadButton;
    QPushButton *batchSaveButton;
    QVBoxLayout *rightLayout;
    QLabel *label;
    QTableView *batchTableView;

    void setupUi(QWidget *BatchWidget)
    {
        if (BatchWidget->objectName().isEmpty())
            BatchWidget->setObjectName(QString::fromUtf8("BatchWidget"));
        BatchWidget->resize(623, 421);
        horizontalLayout = new QHBoxLayout(BatchWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        batchAddButton = new QPushButton(BatchWidget);
        batchAddButton->setObjectName(QString::fromUtf8("batchAddButton"));

        verticalLayout->addWidget(batchAddButton);

        batchInsertButton = new QPushButton(BatchWidget);
        batchInsertButton->setObjectName(QString::fromUtf8("batchInsertButton"));

        verticalLayout->addWidget(batchInsertButton);

        batchAddCalButton = new QPushButton(BatchWidget);
        batchAddCalButton->setObjectName(QString::fromUtf8("batchAddCalButton"));

        verticalLayout->addWidget(batchAddCalButton);

        batchInsertCalButton = new QPushButton(BatchWidget);
        batchInsertCalButton->setObjectName(QString::fromUtf8("batchInsertCalButton"));

        verticalLayout->addWidget(batchInsertCalButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        batchMoveUpButton = new QPushButton(BatchWidget);
        batchMoveUpButton->setObjectName(QString::fromUtf8("batchMoveUpButton"));

        verticalLayout->addWidget(batchMoveUpButton);

        batchMoveDownButton = new QPushButton(BatchWidget);
        batchMoveDownButton->setObjectName(QString::fromUtf8("batchMoveDownButton"));

        verticalLayout->addWidget(batchMoveDownButton);

        batchEditButton = new QPushButton(BatchWidget);
        batchEditButton->setObjectName(QString::fromUtf8("batchEditButton"));

        verticalLayout->addWidget(batchEditButton);

        batchDeleteButton = new QPushButton(BatchWidget);
        batchDeleteButton->setObjectName(QString::fromUtf8("batchDeleteButton"));

        verticalLayout->addWidget(batchDeleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        batchClearButton = new QPushButton(BatchWidget);
        batchClearButton->setObjectName(QString::fromUtf8("batchClearButton"));

        verticalLayout->addWidget(batchClearButton);

        sortButton = new QPushButton(BatchWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        verticalLayout->addWidget(sortButton);

        batchLoadButton = new QPushButton(BatchWidget);
        batchLoadButton->setObjectName(QString::fromUtf8("batchLoadButton"));

        verticalLayout->addWidget(batchLoadButton);

        batchSaveButton = new QPushButton(BatchWidget);
        batchSaveButton->setObjectName(QString::fromUtf8("batchSaveButton"));

        verticalLayout->addWidget(batchSaveButton);


        horizontalLayout->addLayout(verticalLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        label = new QLabel(BatchWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        rightLayout->addWidget(label);

        batchTableView = new QTableView(BatchWidget);
        batchTableView->setObjectName(QString::fromUtf8("batchTableView"));
        QFont font;
        font.setPointSize(8);
        batchTableView->setFont(font);
        batchTableView->setAlternatingRowColors(true);

        rightLayout->addWidget(batchTableView);


        horizontalLayout->addLayout(rightLayout);

        QWidget::setTabOrder(batchAddButton, batchInsertButton);
        QWidget::setTabOrder(batchInsertButton, batchAddCalButton);
        QWidget::setTabOrder(batchAddCalButton, batchInsertCalButton);
        QWidget::setTabOrder(batchInsertCalButton, batchMoveUpButton);
        QWidget::setTabOrder(batchMoveUpButton, batchMoveDownButton);
        QWidget::setTabOrder(batchMoveDownButton, batchEditButton);
        QWidget::setTabOrder(batchEditButton, batchDeleteButton);
        QWidget::setTabOrder(batchDeleteButton, batchClearButton);
        QWidget::setTabOrder(batchClearButton, batchLoadButton);
        QWidget::setTabOrder(batchLoadButton, batchSaveButton);
        QWidget::setTabOrder(batchSaveButton, batchTableView);

        retranslateUi(BatchWidget);

        QMetaObject::connectSlotsByName(BatchWidget);
    } // setupUi

    void retranslateUi(QWidget *BatchWidget)
    {
        BatchWidget->setWindowTitle(QCoreApplication::translate("BatchWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        batchAddButton->setToolTip(QCoreApplication::translate("BatchWidget", "Add a scan", nullptr));
#endif // QT_CONFIG(tooltip)
        batchAddButton->setText(QCoreApplication::translate("BatchWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        batchInsertButton->setToolTip(QCoreApplication::translate("BatchWidget", "Insert a scan before the selected scan", nullptr));
#endif // QT_CONFIG(tooltip)
        batchInsertButton->setText(QCoreApplication::translate("BatchWidget", "Insert", nullptr));
#if QT_CONFIG(tooltip)
        batchAddCalButton->setToolTip(QCoreApplication::translate("BatchWidget", "Add a calibration scan", nullptr));
#endif // QT_CONFIG(tooltip)
        batchAddCalButton->setText(QCoreApplication::translate("BatchWidget", "Add Cal", nullptr));
#if QT_CONFIG(tooltip)
        batchInsertCalButton->setToolTip(QCoreApplication::translate("BatchWidget", "Add a calibration scan before the selected scan", nullptr));
#endif // QT_CONFIG(tooltip)
        batchInsertCalButton->setText(QCoreApplication::translate("BatchWidget", "Insert Cal", nullptr));
#if QT_CONFIG(tooltip)
        batchMoveUpButton->setToolTip(QCoreApplication::translate("BatchWidget", "Moce selected scan(s) up one row", nullptr));
#endif // QT_CONFIG(tooltip)
        batchMoveUpButton->setText(QCoreApplication::translate("BatchWidget", "Move up", nullptr));
#if QT_CONFIG(tooltip)
        batchMoveDownButton->setToolTip(QCoreApplication::translate("BatchWidget", "Move selected scan(s) down one row", nullptr));
#endif // QT_CONFIG(tooltip)
        batchMoveDownButton->setText(QCoreApplication::translate("BatchWidget", "Move down", nullptr));
#if QT_CONFIG(tooltip)
        batchEditButton->setToolTip(QCoreApplication::translate("BatchWidget", "Edit selected scan", nullptr));
#endif // QT_CONFIG(tooltip)
        batchEditButton->setText(QCoreApplication::translate("BatchWidget", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        batchDeleteButton->setToolTip(QCoreApplication::translate("BatchWidget", "Selete selected scan(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        batchDeleteButton->setText(QCoreApplication::translate("BatchWidget", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        batchClearButton->setToolTip(QCoreApplication::translate("BatchWidget", "Clear all scans from table", nullptr));
#endif // QT_CONFIG(tooltip)
        batchClearButton->setText(QCoreApplication::translate("BatchWidget", "Clear All", nullptr));
        sortButton->setText(QCoreApplication::translate("BatchWidget", "Sort...", nullptr));
#if QT_CONFIG(tooltip)
        batchLoadButton->setToolTip(QCoreApplication::translate("BatchWidget", "Load a batch list from file", nullptr));
#endif // QT_CONFIG(tooltip)
        batchLoadButton->setText(QCoreApplication::translate("BatchWidget", "Load", nullptr));
#if QT_CONFIG(tooltip)
        batchSaveButton->setToolTip(QCoreApplication::translate("BatchWidget", "Save current list to file", nullptr));
#endif // QT_CONFIG(tooltip)
        batchSaveButton->setText(QCoreApplication::translate("BatchWidget", "Save", nullptr));
        label->setText(QCoreApplication::translate("BatchWidget", "Scans", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatchWidget: public Ui_BatchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHWIDGET_H
