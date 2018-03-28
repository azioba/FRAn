/********************************************************************************
** Form generated from reading UI file 'loaderform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADERFORM_H
#define UI_LOADERFORM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoaderForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *OpenButton;
    QLineEdit *Path;
    QComboBox *DataType;
    QTableWidget *Preview;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *LoaderForm)
    {
        if (LoaderForm->objectName().isEmpty())
            LoaderForm->setObjectName(QStringLiteral("LoaderForm"));
        LoaderForm->resize(800, 600);
        LoaderForm->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(LoaderForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        OpenButton = new QPushButton(LoaderForm);
        OpenButton->setObjectName(QStringLiteral("OpenButton"));

        horizontalLayout_2->addWidget(OpenButton);

        Path = new QLineEdit(LoaderForm);
        Path->setObjectName(QStringLiteral("Path"));

        horizontalLayout_2->addWidget(Path);


        verticalLayout->addLayout(horizontalLayout_2);

        DataType = new QComboBox(LoaderForm);
        DataType->setObjectName(QStringLiteral("DataType"));

        verticalLayout->addWidget(DataType);

        Preview = new QTableWidget(LoaderForm);
        Preview->setObjectName(QStringLiteral("Preview"));

        verticalLayout->addWidget(Preview);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(LoaderForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(LoaderForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoaderForm);

        QMetaObject::connectSlotsByName(LoaderForm);
    } // setupUi

    void retranslateUi(QWidget *LoaderForm)
    {
        LoaderForm->setWindowTitle(QApplication::translate("LoaderForm", "Form", Q_NULLPTR));
        OpenButton->setText(QApplication::translate("LoaderForm", "Open", Q_NULLPTR));
        DataType->clear();
        DataType->insertItems(0, QStringList()
         << QApplication::translate("LoaderForm", "Azimuth , Dip, Dip Azimuth", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Dip, Dip Direction", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Az, Dip, DipAz , Spacing, Length", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Dip, DipDir, Spacing, Length", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("LoaderForm", "Ok", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoaderForm", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoaderForm: public Ui_LoaderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADERFORM_H
