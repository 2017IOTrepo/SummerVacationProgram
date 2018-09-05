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
#include <QtGui/QIcon>
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
    QAction *pClose;
    QAction *pAdd;
    QAction *pDelete;
    QAction *pOpen;
    QAction *pEdit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *searchView;
    QPushButton *startSort;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QComboBox *searchChoice;
    QVBoxLayout *sortL;
    QRadioButton *nameSort;
    QRadioButton *numSort;
    QRadioButton *docSort;
    QVBoxLayout *verticalLayout;
    QRadioButton *downSort;
    QRadioButton *upsort;
    QSpacerItem *verticalSpacer_4;
    QTableView *tableView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(747, 550);
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/system-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        pNew = new QAction(MainWindow);
        pNew->setObjectName(QStringLiteral("pNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/document-new.png"), QSize(), QIcon::Active, QIcon::On);
        pNew->setIcon(icon1);
        pSave = new QAction(MainWindow);
        pSave->setObjectName(QStringLiteral("pSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/document-save.png"), QSize(), QIcon::Active, QIcon::On);
        pSave->setIcon(icon2);
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
        pEdit = new QAction(MainWindow);
        pEdit->setObjectName(QStringLiteral("pEdit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/actions/edit-copy.png"), QSize(), QIcon::Active, QIcon::On);
        pEdit->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        searchView = new QLineEdit(centralWidget);
        searchView->setObjectName(QStringLiteral("searchView"));

        gridLayout->addWidget(searchView, 9, 1, 1, 1);

        startSort = new QPushButton(centralWidget);
        startSort->setObjectName(QStringLiteral("startSort"));

        gridLayout->addWidget(startSort, 1, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 2, 1, 1);

        searchChoice = new QComboBox(centralWidget);
        searchChoice->addItem(QString());
        searchChoice->addItem(QString());
        searchChoice->addItem(QString());
        searchChoice->setObjectName(QStringLiteral("searchChoice"));

        gridLayout->addWidget(searchChoice, 9, 2, 1, 1);

        sortL = new QVBoxLayout();
        sortL->setSpacing(6);
        sortL->setObjectName(QStringLiteral("sortL"));
        nameSort = new QRadioButton(centralWidget);
        nameSort->setObjectName(QStringLiteral("nameSort"));
        nameSort->setCheckable(true);
        nameSort->setChecked(true);
        nameSort->setAutoExclusive(false);

        sortL->addWidget(nameSort);

        numSort = new QRadioButton(centralWidget);
        numSort->setObjectName(QStringLiteral("numSort"));
        numSort->setAutoExclusive(false);

        sortL->addWidget(numSort);

        docSort = new QRadioButton(centralWidget);
        docSort->setObjectName(QStringLiteral("docSort"));
        docSort->setAutoExclusive(false);

        sortL->addWidget(docSort);


        gridLayout->addLayout(sortL, 7, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        downSort = new QRadioButton(centralWidget);
        downSort->setObjectName(QStringLiteral("downSort"));
        downSort->setChecked(true);
        downSort->setAutoRepeat(false);
        downSort->setAutoExclusive(false);

        verticalLayout->addWidget(downSort);

        upsort = new QRadioButton(centralWidget);
        upsort->setObjectName(QStringLiteral("upsort"));
        upsort->setAutoExclusive(false);

        verticalLayout->addWidget(upsort);


        gridLayout->addLayout(verticalLayout, 5, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 2, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 9, 2);

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
        mainToolBar->addAction(pClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(pAdd);
        mainToolBar->addAction(pEdit);
        mainToolBar->addAction(pDelete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\256\277\350\210\215\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\256\277\350\210\215\347\256\241\347\220\206\350\241\250", nullptr));
        pSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        pAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pEdit->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        startSort->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\216\222\345\272\217", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\216\222\345\272\217\346\226\271\345\274\217</span></p></body></html>", nullptr));
        searchChoice->setItemText(0, QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        searchChoice->setItemText(1, QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        searchChoice->setItemText(2, QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267", nullptr));

        nameSort->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        numSort->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        docSort->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\217\267", nullptr));
        downSort->setText(QApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        upsort->setText(QApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
