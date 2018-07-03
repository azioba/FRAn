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
    QGroupBox *groupBox_Parameters;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *QTab_widgets;
    QWidget *tab_Steronet;
    QVBoxLayout *verticalLayout_6;
    QCustomPlot *widget_Stereo;
    QGroupBox *groupBox_Stereo;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *plot_Stereo;
    QPushButton *clear_Stereo;
    QSpacerItem *horizontalSpacer_3;
    QWidget *Tab_Rosace;
    QVBoxLayout *verticalLayout_7;
    QCustomPlot *widget_Rosace;
    QGroupBox *groupBox_Rosace;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *plot_Rosace;
    QPushButton *clear_Rosace;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_Histogram;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *widget_Histo;
    QGroupBox *groupBox_Histo;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *plot_Histo;
    QPushButton *clear_Histo;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_Xplot;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *widget_Xplot;
    QGroupBox *groupBox_Xplot;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *plot_Xplot;
    QPushButton *clear_Xplot;
    QSpacerItem *horizontalSpacer;

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
        groupBox_Parameters = new QGroupBox(groupBox);
        groupBox_Parameters->setObjectName(QStringLiteral("groupBox_Parameters"));
        groupBox_Parameters->setFlat(false);
        groupBox_Parameters->setCheckable(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox_Parameters);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_10 = new QPushButton(groupBox_Parameters);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(groupBox_Parameters);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_9);


        verticalLayout_2->addWidget(groupBox_Parameters);

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
        QTab_widgets = new QTabWidget(groupBox);
        QTab_widgets->setObjectName(QStringLiteral("QTab_widgets"));
        tab_Steronet = new QWidget();
        tab_Steronet->setObjectName(QStringLiteral("tab_Steronet"));
        verticalLayout_6 = new QVBoxLayout(tab_Steronet);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_Stereo = new QCustomPlot(tab_Steronet);
        widget_Stereo->setObjectName(QStringLiteral("widget_Stereo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_Stereo->sizePolicy().hasHeightForWidth());
        widget_Stereo->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(widget_Stereo);

        groupBox_Stereo = new QGroupBox(tab_Steronet);
        groupBox_Stereo->setObjectName(QStringLiteral("groupBox_Stereo"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_Stereo);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        plot_Stereo = new QPushButton(groupBox_Stereo);
        plot_Stereo->setObjectName(QStringLiteral("plot_Stereo"));

        horizontalLayout_5->addWidget(plot_Stereo);

        clear_Stereo = new QPushButton(groupBox_Stereo);
        clear_Stereo->setObjectName(QStringLiteral("clear_Stereo"));

        horizontalLayout_5->addWidget(clear_Stereo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(groupBox_Stereo);

        QTab_widgets->addTab(tab_Steronet, QString());
        Tab_Rosace = new QWidget();
        Tab_Rosace->setObjectName(QStringLiteral("Tab_Rosace"));
        verticalLayout_7 = new QVBoxLayout(Tab_Rosace);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_Rosace = new QCustomPlot(Tab_Rosace);
        widget_Rosace->setObjectName(QStringLiteral("widget_Rosace"));
        sizePolicy1.setHeightForWidth(widget_Rosace->sizePolicy().hasHeightForWidth());
        widget_Rosace->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(widget_Rosace);

        groupBox_Rosace = new QGroupBox(Tab_Rosace);
        groupBox_Rosace->setObjectName(QStringLiteral("groupBox_Rosace"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_Rosace);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        plot_Rosace = new QPushButton(groupBox_Rosace);
        plot_Rosace->setObjectName(QStringLiteral("plot_Rosace"));

        horizontalLayout_6->addWidget(plot_Rosace);

        clear_Rosace = new QPushButton(groupBox_Rosace);
        clear_Rosace->setObjectName(QStringLiteral("clear_Rosace"));

        horizontalLayout_6->addWidget(clear_Rosace);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_7->addWidget(groupBox_Rosace);

        QTab_widgets->addTab(Tab_Rosace, QString());
        tab_Histogram = new QWidget();
        tab_Histogram->setObjectName(QStringLiteral("tab_Histogram"));
        verticalLayout_3 = new QVBoxLayout(tab_Histogram);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_Histo = new QCustomPlot(tab_Histogram);
        widget_Histo->setObjectName(QStringLiteral("widget_Histo"));
        sizePolicy1.setHeightForWidth(widget_Histo->sizePolicy().hasHeightForWidth());
        widget_Histo->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(widget_Histo);

        groupBox_Histo = new QGroupBox(tab_Histogram);
        groupBox_Histo->setObjectName(QStringLiteral("groupBox_Histo"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_Histo);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        plot_Histo = new QPushButton(groupBox_Histo);
        plot_Histo->setObjectName(QStringLiteral("plot_Histo"));

        horizontalLayout_4->addWidget(plot_Histo);

        clear_Histo = new QPushButton(groupBox_Histo);
        clear_Histo->setObjectName(QStringLiteral("clear_Histo"));

        horizontalLayout_4->addWidget(clear_Histo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_Histo);

        QTab_widgets->addTab(tab_Histogram, QString());
        tab_Xplot = new QWidget();
        tab_Xplot->setObjectName(QStringLiteral("tab_Xplot"));
        verticalLayout_4 = new QVBoxLayout(tab_Xplot);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_Xplot = new QCustomPlot(tab_Xplot);
        widget_Xplot->setObjectName(QStringLiteral("widget_Xplot"));
        sizePolicy1.setHeightForWidth(widget_Xplot->sizePolicy().hasHeightForWidth());
        widget_Xplot->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(widget_Xplot);

        groupBox_Xplot = new QGroupBox(tab_Xplot);
        groupBox_Xplot->setObjectName(QStringLiteral("groupBox_Xplot"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Xplot);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        plot_Xplot = new QPushButton(groupBox_Xplot);
        plot_Xplot->setObjectName(QStringLiteral("plot_Xplot"));

        horizontalLayout_3->addWidget(plot_Xplot);

        clear_Xplot = new QPushButton(groupBox_Xplot);
        clear_Xplot->setObjectName(QStringLiteral("clear_Xplot"));

        horizontalLayout_3->addWidget(clear_Xplot);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_Xplot);

        QTab_widgets->addTab(tab_Xplot, QString());

        verticalLayout_5->addWidget(QTab_widgets);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClusterAnalysis);

        QTab_widgets->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClusterAnalysis);
    } // setupUi

    void retranslateUi(QDialog *ClusterAnalysis)
    {
        ClusterAnalysis->setWindowTitle(QApplication::translate("ClusterAnalysis", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        groupBox_Parameters->setTitle(QApplication::translate("ClusterAnalysis", "Parameters", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        plot_Stereo->setText(QApplication::translate("ClusterAnalysis", "Plot", Q_NULLPTR));
        clear_Stereo->setText(QApplication::translate("ClusterAnalysis", "Clear", Q_NULLPTR));
        QTab_widgets->setTabText(QTab_widgets->indexOf(tab_Steronet), QApplication::translate("ClusterAnalysis", "Stereonet", Q_NULLPTR));
        plot_Rosace->setText(QApplication::translate("ClusterAnalysis", "Plot", Q_NULLPTR));
        clear_Rosace->setText(QApplication::translate("ClusterAnalysis", "Clear", Q_NULLPTR));
        QTab_widgets->setTabText(QTab_widgets->indexOf(Tab_Rosace), QApplication::translate("ClusterAnalysis", "Rose Diagram", Q_NULLPTR));
        plot_Histo->setText(QApplication::translate("ClusterAnalysis", "Plot", Q_NULLPTR));
        clear_Histo->setText(QApplication::translate("ClusterAnalysis", "Clear", Q_NULLPTR));
        QTab_widgets->setTabText(QTab_widgets->indexOf(tab_Histogram), QApplication::translate("ClusterAnalysis", "Histogram", Q_NULLPTR));
        plot_Xplot->setText(QApplication::translate("ClusterAnalysis", "Plot", Q_NULLPTR));
        clear_Xplot->setText(QApplication::translate("ClusterAnalysis", "Clear", Q_NULLPTR));
        QTab_widgets->setTabText(QTab_widgets->indexOf(tab_Xplot), QApplication::translate("ClusterAnalysis", "Crossplot", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClusterAnalysis: public Ui_ClusterAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERANALYSIS_H
