/********************************************************************************
** Form generated from reading UI file 'savedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SaveDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *SaveDialog)
    {
        if (SaveDialog->objectName().isEmpty())
            SaveDialog->setObjectName(QStringLiteral("SaveDialog"));
        SaveDialog->setEnabled(true);
        SaveDialog->resize(200, 100);
        SaveDialog->setCursor(QCursor(Qt::ArrowCursor));
        SaveDialog->setMouseTracking(false);
        SaveDialog->setAcceptDrops(false);
        horizontalLayout = new QHBoxLayout(SaveDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SaveDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/actions/reload.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(SaveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(SaveDialog);

        QMetaObject::connectSlotsByName(SaveDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveDialog)
    {
        SaveDialog->setWindowTitle(QApplication::translate("SaveDialog", "\344\277\235\345\255\230\344\270\255", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("SaveDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\344\277\235\345\255\230\344\270\255\302\267\302\267\302\267\302\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveDialog: public Ui_SaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
