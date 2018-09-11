/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *pOpen;
    QAction *pCompressSave;
    QAction *pUnzip;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *mainTextView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 600);
        pOpen = new QAction(MainWindow);
        pOpen->setObjectName(QStringLiteral("pOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pOpen->setIcon(icon);
        pCompressSave = new QAction(MainWindow);
        pCompressSave->setObjectName(QStringLiteral("pCompressSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pCompressSave->setIcon(icon1);
        pUnzip = new QAction(MainWindow);
        pUnzip->setObjectName(QStringLiteral("pUnzip"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/go-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pUnzip->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainTextView = new QTextEdit(centralWidget);
        mainTextView->setObjectName(QStringLiteral("mainTextView"));

        gridLayout->addWidget(mainTextView, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(pOpen);
        mainToolBar->addAction(pCompressSave);
        mainToolBar->addAction(pUnzip);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pCompressSave->setText(QApplication::translate("MainWindow", "\345\216\213\347\274\251\344\277\235\345\255\230", nullptr));
        pUnzip->setText(QApplication::translate("MainWindow", "\350\247\243\347\240\201\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
