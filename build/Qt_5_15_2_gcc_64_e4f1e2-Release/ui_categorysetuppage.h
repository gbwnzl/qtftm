/********************************************************************************
** Form generated from reading UI file 'categorysetuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYSETUPPAGE_H
#define UI_CATEGORYSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CategorySetupPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *frequencyWindowLabel;
    QSpinBox *frequencyWindowSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *testsBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *dipoleTestBox;
    QCheckBox *dcTestBox;
    QCheckBox *voltageTestBox;
    QCheckBox *magnetTestBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *categoriesBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *dipoleCategoryBox;
    QCheckBox *dcCategoryBox;
    QCheckBox *voltageCategoryBox;
    QCheckBox *magnetCategoryBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *dipolesBox;
    QVBoxLayout *verticalLayout;
    QListView *dipolesView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *dipoleAddButton;
    QToolButton *dipoleRemoveButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *voltagesBox;
    QVBoxLayout *verticalLayout_2;
    QListView *voltagesView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *voltageAddButton;
    QToolButton *voltageRemoveButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWizardPage *CategorySetupPage)
    {
        if (CategorySetupPage->objectName().isEmpty())
            CategorySetupPage->setObjectName(QString::fromUtf8("CategorySetupPage"));
        CategorySetupPage->resize(535, 506);
        verticalLayout_3 = new QVBoxLayout(CategorySetupPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        frequencyWindowLabel = new QLabel(CategorySetupPage);
        frequencyWindowLabel->setObjectName(QString::fromUtf8("frequencyWindowLabel"));
        frequencyWindowLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(frequencyWindowLabel);

        frequencyWindowSpinBox = new QSpinBox(CategorySetupPage);
        frequencyWindowSpinBox->setObjectName(QString::fromUtf8("frequencyWindowSpinBox"));
        frequencyWindowSpinBox->setMinimum(1);
        frequencyWindowSpinBox->setMaximum(1000);
        frequencyWindowSpinBox->setSingleStep(50);
        frequencyWindowSpinBox->setValue(100);

        horizontalLayout_5->addWidget(frequencyWindowSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        testsBox = new QGroupBox(CategorySetupPage);
        testsBox->setObjectName(QString::fromUtf8("testsBox"));
        verticalLayout_4 = new QVBoxLayout(testsBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dipoleTestBox = new QCheckBox(testsBox);
        dipoleTestBox->setObjectName(QString::fromUtf8("dipoleTestBox"));

        verticalLayout_4->addWidget(dipoleTestBox);

        dcTestBox = new QCheckBox(testsBox);
        dcTestBox->setObjectName(QString::fromUtf8("dcTestBox"));

        verticalLayout_4->addWidget(dcTestBox);

        voltageTestBox = new QCheckBox(testsBox);
        voltageTestBox->setObjectName(QString::fromUtf8("voltageTestBox"));

        verticalLayout_4->addWidget(voltageTestBox);

        magnetTestBox = new QCheckBox(testsBox);
        magnetTestBox->setObjectName(QString::fromUtf8("magnetTestBox"));

        verticalLayout_4->addWidget(magnetTestBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(testsBox);

        categoriesBox = new QGroupBox(CategorySetupPage);
        categoriesBox->setObjectName(QString::fromUtf8("categoriesBox"));
        verticalLayout_5 = new QVBoxLayout(categoriesBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dipoleCategoryBox = new QCheckBox(categoriesBox);
        dipoleCategoryBox->setObjectName(QString::fromUtf8("dipoleCategoryBox"));
        dipoleCategoryBox->setEnabled(false);

        verticalLayout_5->addWidget(dipoleCategoryBox);

        dcCategoryBox = new QCheckBox(categoriesBox);
        dcCategoryBox->setObjectName(QString::fromUtf8("dcCategoryBox"));
        dcCategoryBox->setEnabled(false);

        verticalLayout_5->addWidget(dcCategoryBox);

        voltageCategoryBox = new QCheckBox(categoriesBox);
        voltageCategoryBox->setObjectName(QString::fromUtf8("voltageCategoryBox"));
        voltageCategoryBox->setEnabled(false);

        verticalLayout_5->addWidget(voltageCategoryBox);

        magnetCategoryBox = new QCheckBox(categoriesBox);
        magnetCategoryBox->setObjectName(QString::fromUtf8("magnetCategoryBox"));
        magnetCategoryBox->setEnabled(false);

        verticalLayout_5->addWidget(magnetCategoryBox);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(categoriesBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        dipolesBox = new QGroupBox(CategorySetupPage);
        dipolesBox->setObjectName(QString::fromUtf8("dipolesBox"));
        dipolesBox->setEnabled(false);
        verticalLayout = new QVBoxLayout(dipolesBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dipolesView = new QListView(dipolesBox);
        dipolesView->setObjectName(QString::fromUtf8("dipolesView"));

        verticalLayout->addWidget(dipolesView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dipoleAddButton = new QToolButton(dipolesBox);
        dipoleAddButton->setObjectName(QString::fromUtf8("dipoleAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        dipoleAddButton->setIcon(icon);

        horizontalLayout->addWidget(dipoleAddButton);

        dipoleRemoveButton = new QToolButton(dipolesBox);
        dipoleRemoveButton->setObjectName(QString::fromUtf8("dipoleRemoveButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        dipoleRemoveButton->setIcon(icon1);

        horizontalLayout->addWidget(dipoleRemoveButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addWidget(dipolesBox);

        voltagesBox = new QGroupBox(CategorySetupPage);
        voltagesBox->setObjectName(QString::fromUtf8("voltagesBox"));
        voltagesBox->setEnabled(false);
        verticalLayout_2 = new QVBoxLayout(voltagesBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        voltagesView = new QListView(voltagesBox);
        voltagesView->setObjectName(QString::fromUtf8("voltagesView"));
        voltagesView->setSpacing(0);

        verticalLayout_2->addWidget(voltagesView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        voltageAddButton = new QToolButton(voltagesBox);
        voltageAddButton->setObjectName(QString::fromUtf8("voltageAddButton"));
        voltageAddButton->setIcon(icon);

        horizontalLayout_2->addWidget(voltageAddButton);

        voltageRemoveButton = new QToolButton(voltagesBox);
        voltageRemoveButton->setObjectName(QString::fromUtf8("voltageRemoveButton"));
        voltageRemoveButton->setIcon(icon1);

        horizontalLayout_2->addWidget(voltageRemoveButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addWidget(voltagesBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 2);

        retranslateUi(CategorySetupPage);

        QMetaObject::connectSlotsByName(CategorySetupPage);
    } // setupUi

    void retranslateUi(QWizardPage *CategorySetupPage)
    {
        CategorySetupPage->setWindowTitle(QCoreApplication::translate("CategorySetupPage", "WizardPage", nullptr));
        CategorySetupPage->setTitle(QCoreApplication::translate("CategorySetupPage", "Category Setup", nullptr));
        CategorySetupPage->setSubTitle(QCoreApplication::translate("CategorySetupPage", "Choose which tests you would like to run, and which test results you would like to use to assign categories to each line.", nullptr));
        frequencyWindowLabel->setText(QCoreApplication::translate("CategorySetupPage", "Frequency window", nullptr));
#if QT_CONFIG(tooltip)
        frequencyWindowSpinBox->setToolTip(QCoreApplication::translate("CategorySetupPage", "If a line is more than this far from the cavity frequency, it will not be categorized.", nullptr));
#endif // QT_CONFIG(tooltip)
        frequencyWindowSpinBox->setSuffix(QCoreApplication::translate("CategorySetupPage", " kHz", nullptr));
        testsBox->setTitle(QCoreApplication::translate("CategorySetupPage", "Tests", nullptr));
        dipoleTestBox->setText(QCoreApplication::translate("CategorySetupPage", "Dipole Moment", nullptr));
        dcTestBox->setText(QCoreApplication::translate("CategorySetupPage", "Discharge On/Off", nullptr));
        voltageTestBox->setText(QCoreApplication::translate("CategorySetupPage", "Discharge Voltage", nullptr));
        magnetTestBox->setText(QCoreApplication::translate("CategorySetupPage", "Magnet On/Off", nullptr));
        categoriesBox->setTitle(QCoreApplication::translate("CategorySetupPage", "Categorize by...", nullptr));
        dipoleCategoryBox->setText(QCoreApplication::translate("CategorySetupPage", "Dipole Moment", nullptr));
        dcCategoryBox->setText(QCoreApplication::translate("CategorySetupPage", "Discharge On/Off", nullptr));
        voltageCategoryBox->setText(QCoreApplication::translate("CategorySetupPage", "Discharge Voltage", nullptr));
        magnetCategoryBox->setText(QCoreApplication::translate("CategorySetupPage", "Magnet On/Off", nullptr));
        dipolesBox->setTitle(QCoreApplication::translate("CategorySetupPage", "Dipoles", nullptr));
        dipoleAddButton->setText(QCoreApplication::translate("CategorySetupPage", "...", nullptr));
        dipoleRemoveButton->setText(QCoreApplication::translate("CategorySetupPage", "...", nullptr));
        voltagesBox->setTitle(QCoreApplication::translate("CategorySetupPage", "Voltages", nullptr));
        voltageAddButton->setText(QCoreApplication::translate("CategorySetupPage", "...", nullptr));
        voltageRemoveButton->setText(QCoreApplication::translate("CategorySetupPage", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategorySetupPage: public Ui_CategorySetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYSETUPPAGE_H
