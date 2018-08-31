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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *pNew;
    QAction *pSave;
    QAction *pSaveAs;
    QAction *pClose;
    QAction *pAdd;
    QAction *pDelete;
    QAction *pOpen;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(747, 550);
        pNew = new QAction(MainWindow);
        pNew->setObjectName(QStringLiteral("pNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/document-new.png"), QSize(), QIcon::Active, QIcon::On);
        pNew->setIcon(icon);
        pSave = new QAction(MainWindow);
        pSave->setObjectName(QStringLiteral("pSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/document-save.png"), QSize(), QIcon::Active, QIcon::On);
        pSave->setIcon(icon1);
        pSaveAs = new QAction(MainWindow);
        pSaveAs->setObjectName(QStringLiteral("pSaveAs"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/filesaveas.png"), QSize(), QIcon::Active, QIcon::On);
        pSaveAs->setIcon(icon2);
        pClose = new QAction(MainWindow);
        pClose->setObjectName(QStringLiteral("pClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/actions/gtk-close.png"), QSize(), QIcon::Active, QIcon::On);
        pClose->setIcon(icon3);
        pAdd = new QAction(MainWindow);
        pAdd->setObjectName(QStringLiteral("pAdd"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pAdd->setIcon(icon4);
        pDelete = new QAction(MainWindow);
        pDelete->setObjectName(QStringLiteral("pDelete"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/actions/edit-delete.png"), QSize(), QIcon::Active, QIcon::On);
        pDelete->setIcon(icon5);
        pOpen = new QAction(MainWindow);
        pOpen->setObjectName(QStringLiteral("pOpen"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/actions/document-open.png"), QSize(), QIcon::Active, QIcon::On);
        pOpen->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(pOpen);
        mainToolBar->addAction(pNew);
        mainToolBar->addAction(pSave);
        mainToolBar->addAction(pSaveAs);
        mainToolBar->addAction(pClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(pAdd);
        mainToolBar->addAction(pDelete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\256\277\350\210\215\347\256\241\347\220\206\350\241\250", nullptr));
        pSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pSaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        pClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        pAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\216\222\345\272\217", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\216\222\345\272\217\346\226\271\345\274\217</span></p></body></html>", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
