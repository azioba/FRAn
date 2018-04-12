/********************************************************************************
** Form generated from reading UI file 'fran.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAN_H
#define UI_FRAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FRAnClass
{
public:
    QAction *actionOpen_file_s;
    QAction *actionExit;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *Plot;
    QCustomPlot *Histo;
    QTableWidget *List;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *convertButton;
    QPushButton *plotButton;
    QPushButton *saveButton;
    QTableWidget *List_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editButton;
    QPushButton *plusButton;
    QPushButton *minusbutton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *clusterButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FRAnClass)
    {
        if (FRAnClass->objectName().isEmpty())
            FRAnClass->setObjectName(QStringLiteral("FRAnClass"));
        FRAnClass->resize(800, 600);
        actionOpen_file_s = new QAction(FRAnClass);
        actionOpen_file_s->setObjectName(QStringLiteral("actionOpen_file_s"));
        actionExit = new QAction(FRAnClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(FRAnClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(320, 10, 471, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Plot = new QCustomPlot(verticalLayoutWidget);
        Plot->setObjectName(QStringLiteral("Plot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plot->sizePolicy().hasHeightForWidth());
        Plot->setSizePolicy(sizePolicy);
        Plot->setMouseTracking(false);

        verticalLayout->addWidget(Plot);

        Histo = new QCustomPlot(verticalLayoutWidget);
        Histo->setObjectName(QStringLiteral("Histo"));

        verticalLayout->addWidget(Histo);

        List = new QTableWidget(centralWidget);
        List->setObjectName(QStringLiteral("List"));
        List->setGeometry(QRect(10, 10, 301, 191));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 450, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        convertButton = new QPushButton(horizontalLayoutWidget);
        convertButton->setObjectName(QStringLiteral("convertButton"));

        horizontalLayout->addWidget(convertButton);

        plotButton = new QPushButton(horizontalLayoutWidget);
        plotButton->setObjectName(QStringLiteral("plotButton"));

        horizontalLayout->addWidget(plotButton);

        saveButton = new QPushButton(horizontalLayoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        List_2 = new QTableWidget(centralWidget);
        List_2->setObjectName(QStringLiteral("List_2"));
        List_2->setGeometry(QRect(10, 250, 301, 191));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 210, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        editButton = new QPushButton(horizontalLayoutWidget_2);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(editButton);

        plusButton = new QPushButton(horizontalLayoutWidget_2);
        plusButton->setObjectName(QStringLiteral("plusButton"));

        horizontalLayout_2->addWidget(plusButton);

        minusbutton = new QPushButton(horizontalLayoutWidget_2);
        minusbutton->setObjectName(QStringLiteral("minusbutton"));

        horizontalLayout_2->addWidget(minusbutton);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 490, 301, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        clusterButton = new QPushButton(horizontalLayoutWidget_3);
        clusterButton->setObjectName(QStringLiteral("clusterButton"));

        horizontalLayout_3->addWidget(clusterButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        FRAnClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FRAnClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        FRAnClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FRAnClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FRAnClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FRAnClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FRAnClass->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addSeparator();
        menuMenu->addAction(actionOpen_file_s);
        menuMenu->addAction(actionExit);

        retranslateUi(FRAnClass);
        QObject::connect(actionExit, SIGNAL(triggered()), FRAnClass, SLOT(close()));

        QMetaObject::connectSlotsByName(FRAnClass);
    } // setupUi

    void retranslateUi(QMainWindow *FRAnClass)
    {
        FRAnClass->setWindowTitle(QApplication::translate("FRAnClass", "FRAn", Q_NULLPTR));
        actionOpen_file_s->setText(QApplication::translate("FRAnClass", "Open file(s)", Q_NULLPTR));
        actionExit->setText(QApplication::translate("FRAnClass", "Exit", Q_NULLPTR));
        convertButton->setText(QApplication::translate("FRAnClass", "Convert", Q_NULLPTR));
        plotButton->setText(QApplication::translate("FRAnClass", "Plot", Q_NULLPTR));
        saveButton->setText(QApplication::translate("FRAnClass", "Save", Q_NULLPTR));
        editButton->setText(QApplication::translate("FRAnClass", "Edit", Q_NULLPTR));
        plusButton->setText(QApplication::translate("FRAnClass", "+", Q_NULLPTR));
        minusbutton->setText(QApplication::translate("FRAnClass", "-", Q_NULLPTR));
        clusterButton->setText(QApplication::translate("FRAnClass", "Cluster Analysis", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FRAnClass", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FRAnClass", "PushButton", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("FRAnClass", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FRAnClass: public Ui_FRAnClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAN_H
