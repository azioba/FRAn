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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *originalData;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *editButton;
    QPushButton *addButton;
    QPushButton *removebutton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *convertButton;
    QPushButton *revertButton;
    QPushButton *saveButton;
    QTableWidget *convertedData;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clusterButton;
    QPushButton *plotButton;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
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
        FRAnClass->resize(731, 600);
        actionOpen_file_s = new QAction(FRAnClass);
        actionOpen_file_s->setObjectName(QStringLiteral("actionOpen_file_s"));
        actionExit = new QAction(FRAnClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(FRAnClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        originalData = new QTableWidget(centralWidget);
        originalData->setObjectName(QStringLiteral("originalData"));

        verticalLayout_3->addWidget(originalData);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        editButton = new QPushButton(centralWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(editButton);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_5->addWidget(addButton);

        removebutton = new QPushButton(centralWidget);
        removebutton->setObjectName(QStringLiteral("removebutton"));

        horizontalLayout_5->addWidget(removebutton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        convertButton = new QPushButton(centralWidget);
        convertButton->setObjectName(QStringLiteral("convertButton"));

        horizontalLayout_6->addWidget(convertButton);

        revertButton = new QPushButton(centralWidget);
        revertButton->setObjectName(QStringLiteral("revertButton"));

        horizontalLayout_6->addWidget(revertButton);

        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_6->addWidget(saveButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        convertedData = new QTableWidget(centralWidget);
        convertedData->setObjectName(QStringLiteral("convertedData"));

        verticalLayout_3->addWidget(convertedData);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        clusterButton = new QPushButton(centralWidget);
        clusterButton->setObjectName(QStringLiteral("clusterButton"));

        horizontalLayout_7->addWidget(clusterButton);

        plotButton = new QPushButton(centralWidget);
        plotButton->setObjectName(QStringLiteral("plotButton"));

        horizontalLayout_7->addWidget(plotButton);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_7->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Plot = new QCustomPlot(centralWidget);
        Plot->setObjectName(QStringLiteral("Plot"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plot->sizePolicy().hasHeightForWidth());
        Plot->setSizePolicy(sizePolicy);
        Plot->setMouseTracking(false);

        verticalLayout->addWidget(Plot);

        Histo = new QCustomPlot(centralWidget);
        Histo->setObjectName(QStringLiteral("Histo"));
        sizePolicy.setHeightForWidth(Histo->sizePolicy().hasHeightForWidth());
        Histo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(Histo);


        horizontalLayout->addLayout(verticalLayout);

        FRAnClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FRAnClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 731, 21));
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
        editButton->setText(QApplication::translate("FRAnClass", "Edit", Q_NULLPTR));
        addButton->setText(QApplication::translate("FRAnClass", "+", Q_NULLPTR));
        removebutton->setText(QApplication::translate("FRAnClass", "-", Q_NULLPTR));
        convertButton->setText(QApplication::translate("FRAnClass", "Convert", Q_NULLPTR));
        revertButton->setText(QApplication::translate("FRAnClass", "Revert", Q_NULLPTR));
        saveButton->setText(QApplication::translate("FRAnClass", "Save", Q_NULLPTR));
        clusterButton->setText(QApplication::translate("FRAnClass", "Cluster Analysis", Q_NULLPTR));
        plotButton->setText(QApplication::translate("FRAnClass", "Plot", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FRAnClass", "PushButton", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("FRAnClass", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FRAnClass: public Ui_FRAnClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAN_H
