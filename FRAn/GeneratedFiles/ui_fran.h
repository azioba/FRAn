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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FRAnClass
{
public:
    QAction *actionOpen_file_s;
    QAction *actionExit;
    QWidget *centralWidget;
    QCustomPlot *Plot;
    QCustomPlot *Histo;
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
        Plot = new QCustomPlot(centralWidget);
        Plot->setObjectName(QStringLiteral("Plot"));
        Plot->setGeometry(QRect(380, 10, 409, 309));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plot->sizePolicy().hasHeightForWidth());
        Plot->setSizePolicy(sizePolicy);
        Plot->setMouseTracking(false);
        Histo = new QCustomPlot(centralWidget);
        Histo->setObjectName(QStringLiteral("Histo"));
        Histo->setGeometry(QRect(380, 350, 409, 189));
        FRAnClass->setCentralWidget(centralWidget);
        Plot->raise();
        Plot->raise();
        Histo->raise();
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
        menuMenu->setTitle(QApplication::translate("FRAnClass", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FRAnClass: public Ui_FRAnClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAN_H