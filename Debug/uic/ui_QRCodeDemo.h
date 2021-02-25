/********************************************************************************
** Form generated from reading UI file 'QRCodeDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODEDEMO_H
#define UI_QRCODEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRCodeDemoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QRCodeDemoClass)
    {
        if (QRCodeDemoClass->objectName().isEmpty())
            QRCodeDemoClass->setObjectName(QString::fromUtf8("QRCodeDemoClass"));
        QRCodeDemoClass->resize(600, 400);
        centralWidget = new QWidget(QRCodeDemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        QRCodeDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QRCodeDemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QRCodeDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QRCodeDemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QRCodeDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QRCodeDemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QRCodeDemoClass->setStatusBar(statusBar);

        retranslateUi(QRCodeDemoClass);

        QMetaObject::connectSlotsByName(QRCodeDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QRCodeDemoClass)
    {
        QRCodeDemoClass->setWindowTitle(QCoreApplication::translate("QRCodeDemoClass", "QRCodeDemo", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QRCodeDemoClass: public Ui_QRCodeDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODEDEMO_H
