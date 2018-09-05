#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>
#include <QString>
//#include "mainwindow.h"

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();

    void dealEditSignal(int, int, int, QString, int, QString, QString);
    bool ifChanged = false;

signals:
    void sendMessages(int, int, int, QString,
                      int, QString, QString);

private slots:
    void on_finalCheck_accepted();

    void on_finalCheck_rejected();

private:
    Ui::InfoDialog *ui;
    bool recordData();
    void clear();

    QString falseText;
    int docNum;
    int docPeo;
    int docClass;
    QString stuName;
    int stuNumber;
    QString stuSex;
    QString stuMajor;
};

#endif // INFODIALOG_H
