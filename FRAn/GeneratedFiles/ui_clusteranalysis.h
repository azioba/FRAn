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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClusterAnalysis
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ClusterAnalysis)
    {
        if (ClusterAnalysis->objectName().isEmpty())
            ClusterAnalysis->setObjectName(QStringLiteral("ClusterAnalysis"));
        ClusterAnalysis->resize(500, 500);
        verticalLayout = new QVBoxLayout(ClusterAnalysis);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetFixedSize);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ClusterAnalysis);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ClusterAnalysis);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ClusterAnalysis);
        QObject::connect(okButton, SIGNAL(clicked()), ClusterAnalysis, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ClusterAnalysis, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClusterAnalysis);
    } // setupUi

    void retranslateUi(QDialog *ClusterAnalysis)
    {
        ClusterAnalysis->setWindowTitle(QApplication::translate("ClusterAnalysis", "Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("ClusterAnalysis", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ClusterAnalysis", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClusterAnalysis: public Ui_ClusterAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERANALYSIS_H
