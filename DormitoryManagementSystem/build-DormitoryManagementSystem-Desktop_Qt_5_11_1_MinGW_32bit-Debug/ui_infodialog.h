/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_InfoDialog
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
    QLineEdit *stuNameEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *stuNumberEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *stuSexCheck;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *stuMajorEdit;
    QDialogButtonBox *finalCheck;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->resize(400, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        InfoDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(InfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(InfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        docNumberEdit = new QLineEdit(InfoDialog);
        docNumberEdit->setObjectName(QStringLiteral("docNumberEdit"));

        horizontalLayout->addWidget(docNumberEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(InfoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        docPeoEdit = new QLineEdit(InfoDialog);
        docPeoEdit->setObjectName(QStringLiteral("docPeoEdit"));

        horizontalLayout_2->addWidget(docPeoEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(InfoDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        docClassEdit = new QLineEdit(InfoDialog);
        docClassEdit->setObjectName(QStringLiteral("docClassEdit"));

        horizontalLayout_3->addWidget(docClassEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(InfoDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        stuNameEdit = new QLineEdit(InfoDialog);
        stuNameEdit->setObjectName(QStringLiteral("stuNameEdit"));

        horizontalLayout_4->addWidget(stuNameEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(InfoDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        stuNumberEdit = new QLineEdit(InfoDialog);
        stuNumberEdit->setObjectName(QStringLiteral("stuNumberEdit"));

        horizontalLayout_5->addWidget(stuNumberEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(InfoDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_8);

        stuSexCheck = new QComboBox(InfoDialog);
        stuSexCheck->addItem(QString());
        stuSexCheck->addItem(QString());
        stuSexCheck->setObjectName(QStringLiteral("stuSexCheck"));

        horizontalLayout_6->addWidget(stuSexCheck);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(InfoDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        stuMajorEdit = new QLineEdit(InfoDialog);
        stuMajorEdit->setObjectName(QStringLiteral("stuMajorEdit"));

        horizontalLayout_7->addWidget(stuMajorEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        finalCheck = new QDialogButtonBox(InfoDialog);
        finalCheck->setObjectName(QStringLiteral("finalCheck"));
        finalCheck->setOrientation(Qt::Horizontal);
        finalCheck->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(finalCheck);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "\346\226\260\345\273\272\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("InfoDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\256\277\350\210\215\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("InfoDialog", "\345\256\277\350\210\215\345\217\267", nullptr));
        label_4->setText(QApplication::translate("InfoDialog", "\345\256\277\350\210\215\344\272\272\346\225\260", nullptr));
        label_5->setText(QApplication::translate("InfoDialog", "\346\211\200\345\261\236\347\217\255\347\272\247", nullptr));
        label_2->setText(QApplication::translate("InfoDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\255\246\347\224\237\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("InfoDialog", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_7->setText(QApplication::translate("InfoDialog", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        label_8->setText(QApplication::translate("InfoDialog", "\345\255\246\347\224\237\346\200\247\345\210\253", nullptr));
        stuSexCheck->setItemText(0, QApplication::translate("InfoDialog", "\347\224\267", nullptr));
        stuSexCheck->setItemText(1, QApplication::translate("InfoDialog", "\345\245\263", nullptr));

        label_9->setText(QApplication::translate("InfoDialog", "\345\255\246\347\224\237\346\211\200\345\261\236\344\270\223\344\270\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
