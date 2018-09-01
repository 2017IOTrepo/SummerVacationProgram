#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();

signals:
    void sendMessages(int, int, int, QString,
                      int, QString, QString);

private slots:
    void on_finalCheck_accepted();

    void on_finalCheck_rejected();

private:
    Ui::InfoDialog *ui;
    bool recordData();

    int docNum;
    int docPeo;
    int docClass;
    QString stuName;
    int stuNumber;
    QString stuSex;
    QString stuMajor;
};

#endif // INFODIALOG_H
