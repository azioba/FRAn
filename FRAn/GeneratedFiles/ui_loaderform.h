/********************************************************************************
** Form generated from reading UI file 'loaderform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADERFORM_H
#define UI_LOADERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoaderForm
{
public:
    QPushButton *OpenButton;
    QLineEdit *Path;
    QComboBox *DataType;
    QTableWidget *Preview;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *LoaderForm)
    {
        if (LoaderForm->objectName().isEmpty())
            LoaderForm->setObjectName(QStringLiteral("LoaderForm"));
        LoaderForm->resize(800, 600);
        OpenButton = new QPushButton(LoaderForm);
        OpenButton->setObjectName(QStringLiteral("OpenButton"));
        OpenButton->setGeometry(QRect(20, 10, 101, 31));
        Path = new QLineEdit(LoaderForm);
        Path->setObjectName(QStringLiteral("Path"));
        Path->setGeometry(QRect(130, 10, 661, 31));
        DataType = new QComboBox(LoaderForm);
        DataType->setObjectName(QStringLiteral("DataType"));
        DataType->setGeometry(QRect(20, 50, 771, 31));
        Preview = new QTableWidget(LoaderForm);
        Preview->setObjectName(QStringLiteral("Preview"));
        Preview->setGeometry(QRect(20, 100, 771, 371));
        buttonBox = new QDialogButtonBox(LoaderForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(630, 550, 161, 41));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(LoaderForm);

        QMetaObject::connectSlotsByName(LoaderForm);
    } // setupUi

    void retranslateUi(QWidget *LoaderForm)
    {
        LoaderForm->setWindowTitle(QApplication::translate("LoaderForm", "LoaderForm", Q_NULLPTR));
        OpenButton->setText(QApplication::translate("LoaderForm", "Open", Q_NULLPTR));
        DataType->clear();
        DataType->insertItems(0, QStringList()
         << QApplication::translate("LoaderForm", "Azimuth , Dip, Dip Azimuth", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Dip, Dip Direction", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Az, Dip, DipAz , Spacing, Length", Q_NULLPTR)
         << QApplication::translate("LoaderForm", "Dip, DipDir, Spacing, Length", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class LoaderForm: public Ui_LoaderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADERFORM_H
