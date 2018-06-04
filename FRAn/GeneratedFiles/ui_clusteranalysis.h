/********************************************************************************
** Form generated from reading UI file 'clusteranalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUSTERANALYSIS_H
#define UI_CLUSTERANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_ClusterAnalysis
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *Histogram;
    QWidget *tab_Steronet;
    QVBoxLayout *verticalLayout_6;
    QCustomPlot *widget;
    QGroupBox *groupBox_Stereo;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_Histogram;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *widget_2;
    QGroupBox *groupBox_Histo;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_Xplot;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *widget_3;
    QGroupBox *groupBox_Xplot;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QCustomPlot *widget_4;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *ClusterAnalysis)
    {
        if (ClusterAnalysis->objectName().isEmpty())
            ClusterAnalysis->setObjectName(QStringLiteral("ClusterAnalysis"));
        ClusterAnalysis->resize(890, 851);
        verticalLayout = new QVBoxLayout(ClusterAnalysis);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ClusterAnalysis);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_9);


        verticalLayout_2->addWidget(groupBox_5);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Histogram = new QTabWidget(groupBox);
        Histogram->setObjectName(QStringLiteral("Histogram"));
        tab_Steronet = new QWidget();
        tab_Steronet->setObjectName(QStringLiteral("tab_Steronet"));
        verticalLayout_6 = new QVBoxLayout(tab_Steronet);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget = new QCustomPlot(tab_Steronet);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(widget);

        groupBox_Stereo = new QGroupBox(tab_Steronet);
        groupBox_Stereo->setObjectName(QStringLiteral("groupBox_Stereo"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_Stereo);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_7 = new QPushButton(groupBox_Stereo);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_Stereo);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(groupBox_Stereo);

        Histogram->addTab(tab_Steronet, QString());
        tab_Histogram = new QWidget();
        tab_Histogram->setObjectName(QStringLiteral("tab_Histogram"));
        verticalLayout_3 = new QVBoxLayout(tab_Histogram);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_2 = new QCustomPlot(tab_Histogram);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(widget_2);

        groupBox_Histo = new QGroupBox(tab_Histogram);
        groupBox_Histo->setObjectName(QStringLiteral("groupBox_Histo"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_Histo);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_5 = new QPushButton(groupBox_Histo);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(groupBox_Histo);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_Histo);

        Histogram->addTab(tab_Histogram, QString());
        tab_Xplot = new QWidget();
        tab_Xplot->setObjectName(QStringLiteral("tab_Xplot"));
        verticalLayout_4 = new QVBoxLayout(tab_Xplot);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QCustomPlot(tab_Xplot);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(widget_3);

        groupBox_Xplot = new QGroupBox(tab_Xplot);
        groupBox_Xplot->setObjectName(QStringLiteral("groupBox_Xplot"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Xplot);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(groupBox_Xplot);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_Xplot);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_Xplot);

        Histogram->addTab(tab_Xplot, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_4 = new QCustomPlot(tab_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(widget_4);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_11 = new QPushButton(groupBox_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_6->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(groupBox_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_6->addWidget(pushButton_12);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_7->addWidget(groupBox_6);

        Histogram->addTab(tab_4, QString());

        verticalLayout_5->addWidget(Histogram);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClusterAnalysis);

        Histogram->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ClusterAnalysis);
    } // setupUi

    void retranslateUi(QDialog *ClusterAnalysis)
    {
        ClusterAnalysis->setWindowTitle(QApplication::translate("ClusterAnalysis", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("ClusterAnalysis", "Settings", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        groupBox_Stereo->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_Steronet), QApplication::translate("ClusterAnalysis", "Stereonet", Q_NULLPTR));
        groupBox_Histo->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_Histogram), QApplication::translate("ClusterAnalysis", "Histogram", Q_NULLPTR));
        groupBox_Xplot->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_Xplot), QApplication::translate("ClusterAnalysis", "Crossplot", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_4), QApplication::translate("ClusterAnalysis", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClusterAnalysis: public Ui_ClusterAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERANALYSIS_H
