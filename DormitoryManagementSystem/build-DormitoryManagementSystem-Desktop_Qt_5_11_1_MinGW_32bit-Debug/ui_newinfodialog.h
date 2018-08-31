/********************************************************************************
** Form generated from reading UI file 'newinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWINFODIALOG_H
#define UI_NEWINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *docNumberEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *docPeoEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *docClassEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *newInfoDialog)
    {
        if (newInfoDialog->objectName().isEmpty())
            newInfoDialog->setObjectName(QStringLiteral("newInfoDialog"));
        newInfoDialog->resize(400, 500);
        verticalLayout = new QVBoxLayout(newInfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(newInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(newInfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        docNumberEdit = new QLineEdit(newInfoDialog);
        docNumberEdit->setObjectName(QStringLiteral("docNumberEdit"));

        horizontalLayout->addWidget(docNumberEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(newInfoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        docPeoEdit = new QLineEdit(newInfoDialog);
        docPeoEdit->setObjectName(QStringLiteral("docPeoEdit"));

        horizontalLayout_2->addWidget(docPeoEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(newInfoDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        docClassEdit = new QLineEdit(newInfoDialog);
        docClassEdit->setObjectName(QStringLiteral("docClassEdit"));

        horizontalLayout_3->addWidget(docClassEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(newInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(newInfoDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit = new QLineEdit(newInfoDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(newInfoDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_2 = new QLineEdit(newInfoDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(newInfoDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_8);

        comboBox = new QComboBox(newInfoDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_6->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(newInfoDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        lineEdit_4 = new QLineEdit(newInfoDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_7);

        buttonBox = new QDialogButtonBox(newInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(newInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(newInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *newInfoDialog)
    {
        newInfoDialog->setWindowTitle(QApplication::translate("newInfoDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("newInfoDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\256\277\350\210\215\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("newInfoDialog", "\345\256\277\350\210\215\345\217\267", nullptr));
        label_4->setText(QApplication::translate("newInfoDialog", "\345\256\277\350\210\215\344\272\272\346\225\260", nullptr));
        label_5->setText(QApplication::translate("newInfoDialog", "\346\211\200\345\261\236\347\217\255\347\272\247", nullptr));
        label_2->setText(QApplication::translate("newInfoDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\255\246\347\224\237\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("newInfoDialog", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_7->setText(QApplication::translate("newInfoDialog", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        label_8->setText(QApplication::translate("newInfoDialog", "\345\255\246\347\224\237\346\200\247\345\210\253", nullptr));
        comboBox->setItemText(0, QApplication::translate("newInfoDialog", "\347\224\267", nullptr));
        comboBox->setItemText(1, QApplication::translate("newInfoDialog", "\345\245\263", nullptr));

        label_9->setText(QApplication::translate("newInfoDialog", "\345\255\246\347\224\237\346\211\200\345\261\236\344\270\223\344\270\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newInfoDialog: public Ui_newInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWINFODIALOG_H
