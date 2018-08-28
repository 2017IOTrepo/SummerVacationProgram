/********************************************************************************
** Form generated from reading UI file 'newentry.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWENTRY_H
#define UI_NEWENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newEntry
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *docNumEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *docPeopleNumEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *docClassEdit;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *studentName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *studentNum;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *studentMajor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *sexChose;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sureButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *newEntry)
    {
        if (newEntry->objectName().isEmpty())
            newEntry->setObjectName(QStringLiteral("newEntry"));
        newEntry->resize(400, 500);
        verticalLayout = new QVBoxLayout(newEntry);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(newEntry);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(0, 38));
        label_9->setStyleSheet(QLatin1String("font: 75 10pt \"Adobe Arabic\";\n"
"font: 75 12pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(label_9, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(newEntry);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        docNumEdit = new QLineEdit(newEntry);
        docNumEdit->setObjectName(QStringLiteral("docNumEdit"));

        horizontalLayout->addWidget(docNumEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(newEntry);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        docPeopleNumEdit = new QLineEdit(newEntry);
        docPeopleNumEdit->setObjectName(QStringLiteral("docPeopleNumEdit"));

        horizontalLayout_2->addWidget(docPeopleNumEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(newEntry);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        docClassEdit = new QLineEdit(newEntry);
        docClassEdit->setObjectName(QStringLiteral("docClassEdit"));

        horizontalLayout_5->addWidget(docClassEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        label_10 = new QLabel(newEntry);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setStyleSheet(QStringLiteral("font: 75 12pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(label_10, 0, Qt::AlignHCenter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(newEntry);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        studentName = new QLineEdit(newEntry);
        studentName->setObjectName(QStringLiteral("studentName"));

        horizontalLayout_6->addWidget(studentName);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(newEntry);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        studentNum = new QLineEdit(newEntry);
        studentNum->setObjectName(QStringLiteral("studentNum"));

        horizontalLayout_7->addWidget(studentNum);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(newEntry);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        studentMajor = new QLineEdit(newEntry);
        studentMajor->setObjectName(QStringLiteral("studentMajor"));

        horizontalLayout_9->addWidget(studentMajor);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(newEntry);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        sexChose = new QComboBox(newEntry);
        sexChose->addItem(QString());
        sexChose->addItem(QString());
        sexChose->setObjectName(QStringLiteral("sexChose"));
        sexChose->setMinimumSize(QSize(187, 0));

        horizontalLayout_4->addWidget(sexChose);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sureButton = new QPushButton(newEntry);
        sureButton->setObjectName(QStringLiteral("sureButton"));

        horizontalLayout_3->addWidget(sureButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(newEntry);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(newEntry);

        QMetaObject::connectSlotsByName(newEntry);
    } // setupUi

    void retranslateUi(QWidget *newEntry)
    {
        newEntry->setWindowTitle(QApplication::translate("newEntry", "Form", nullptr));
        label_9->setText(QApplication::translate("newEntry", "\345\256\277\350\210\215\347\233\270\345\205\263", nullptr));
        label->setText(QApplication::translate("newEntry", "\345\256\277\350\210\215\347\274\226\345\217\267", nullptr));
        label_2->setText(QApplication::translate("newEntry", "\345\256\277\350\210\215\344\272\272\346\225\260", nullptr));
        label_4->setText(QApplication::translate("newEntry", "\346\211\200\345\261\236\347\217\255\347\272\247", nullptr));
        label_10->setText(QApplication::translate("newEntry", "\345\255\246\347\224\237\347\233\270\345\205\263", nullptr));
        label_5->setText(QApplication::translate("newEntry", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("newEntry", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        label_8->setText(QApplication::translate("newEntry", "\345\255\246\347\224\237\346\211\200\345\261\236\344\270\223\344\270\232", nullptr));
        label_3->setText(QApplication::translate("newEntry", "\346\200\247\345\210\253", nullptr));
        sexChose->setItemText(0, QApplication::translate("newEntry", "\347\224\267", nullptr));
        sexChose->setItemText(1, QApplication::translate("newEntry", "\345\245\263", nullptr));

        sureButton->setText(QApplication::translate("newEntry", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("newEntry", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newEntry: public Ui_newEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWENTRY_H
