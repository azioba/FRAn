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
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QCustomPlot *widget;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *widget_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *widget_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget = new QCustomPlot(tab);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(widget);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(groupBox_4);

        Histogram->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_2 = new QCustomPlot(tab_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(widget_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_3);

        Histogram->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QCustomPlot(tab_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(widget_3);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_2);

        Histogram->addTab(tab_3, QString());

        verticalLayout_5->addWidget(Histogram);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClusterAnalysis);

        Histogram->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ClusterAnalysis);
    } // setupUi

    void retranslateUi(QDialog *ClusterAnalysis)
    {
        ClusterAnalysis->setWindowTitle(QApplication::translate("ClusterAnalysis", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab), QApplication::translate("ClusterAnalysis", "Tab 1", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_2), QApplication::translate("ClusterAnalysis", "Tab 2", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ClusterAnalysis", "GroupBox", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ClusterAnalysis", "PushButton", Q_NULLPTR));
        Histogram->setTabText(Histogram->indexOf(tab_3), QApplication::translate("ClusterAnalysis", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClusterAnalysis: public Ui_ClusterAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERANALYSIS_H
