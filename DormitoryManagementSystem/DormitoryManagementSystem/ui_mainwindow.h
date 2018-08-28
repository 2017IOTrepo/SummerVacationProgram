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
    QAction *pDelete;
    QAction *pClose;
    QAction *pSaveAS;
    QAction *pSave;
    QAction *pOpen;
    QAction *pAdd;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *searchText;
    QComboBox *chooseSearch;
    QLineEdit *searchView;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *sortButton;
    QRadioButton *nameSlect;
    QRadioButton *numberSlect;
    QRadioButton *docnumSlect;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(755, 553);
        pNew = new QAction(MainWindow);
        pNew->setObjectName(QStringLiteral("pNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/gtk-new.png"), QSize(), QIcon::Normal, QIcon::On);
        pNew->setIcon(icon);
        pDelete = new QAction(MainWindow);
        pDelete->setObjectName(QStringLiteral("pDelete"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/edit-delete.png"), QSize(), QIcon::Normal, QIcon::On);
        pDelete->setIcon(icon1);
        pClose = new QAction(MainWindow);
        pClose->setObjectName(QStringLiteral("pClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/stock_close.png"), QSize(), QIcon::Normal, QIcon::On);
        pClose->setIcon(icon2);
        pSaveAS = new QAction(MainWindow);
        pSaveAS->setObjectName(QStringLiteral("pSaveAS"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/actions/stock_save-as.png"), QSize(), QIcon::Normal, QIcon::On);
        pSaveAS->setIcon(icon3);
        pSave = new QAction(MainWindow);
        pSave->setObjectName(QStringLiteral("pSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/actions/document-save.png"), QSize(), QIcon::Normal, QIcon::On);
        pSave->setIcon(icon4);
        pOpen = new QAction(MainWindow);
        pOpen->setObjectName(QStringLiteral("pOpen"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/actions/document-open.png"), QSize(), QIcon::Normal, QIcon::On);
        pOpen->setIcon(icon5);
        pAdd = new QAction(MainWindow);
        pAdd->setObjectName(QStringLiteral("pAdd"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/actions/add.png"), QSize(), QIcon::Normal, QIcon::On);
        pAdd->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        searchText = new QLabel(centralWidget);
        searchText->setObjectName(QStringLiteral("searchText"));

        gridLayout->addWidget(searchText, 1, 0, 1, 1);

        chooseSearch = new QComboBox(centralWidget);
        chooseSearch->addItem(QString());
        chooseSearch->addItem(QString());
        chooseSearch->addItem(QString());
        chooseSearch->setObjectName(QStringLiteral("chooseSearch"));

        gridLayout->addWidget(chooseSearch, 1, 2, 1, 1);

        searchView = new QLineEdit(centralWidget);
        searchView->setObjectName(QStringLiteral("searchView"));

        gridLayout->addWidget(searchView, 1, 1, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        sortButton = new QLabel(centralWidget);
        sortButton->setObjectName(QStringLiteral("sortButton"));
        sortButton->setMaximumSize(QSize(16777215, 100));
        sortButton->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(sortButton);

        nameSlect = new QRadioButton(centralWidget);
        nameSlect->setObjectName(QStringLiteral("nameSlect"));
        nameSlect->setAutoRepeatDelay(300);
        nameSlect->setAutoRepeatInterval(100);

        verticalLayout->addWidget(nameSlect);

        numberSlect = new QRadioButton(centralWidget);
        numberSlect->setObjectName(QStringLiteral("numberSlect"));

        verticalLayout->addWidget(numberSlect);

        docnumSlect = new QRadioButton(centralWidget);
        docnumSlect->setObjectName(QStringLiteral("docnumSlect"));

        verticalLayout->addWidget(docnumSlect);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(pNew);
        mainToolBar->addAction(pOpen);
        mainToolBar->addAction(pSave);
        mainToolBar->addAction(pSaveAS);
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
        pNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
        pNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
        pDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        pSaveAS->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        pSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#ifndef QT_NO_TOOLTIP
        pAdd->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#endif // QT_NO_TOOLTIP
        searchText->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        chooseSearch->setItemText(0, QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        chooseSearch->setItemText(1, QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        chooseSearch->setItemText(2, QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "\350\277\233\350\241\214\346\216\222\345\272\217", nullptr));
        sortButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\216\222\345\272\217\346\240\207\345\207\206", nullptr));
        nameSlect->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        numberSlect->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        docnumSlect->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
