#ifndef NAMEDIALOG_H
#define NAMEDIALOG_H

#include <QDialog>
#include <QWidget>

/*
这个本来是新建文件用的
后来发现并不需要这个类
也懒得删了
反正就是用不到就对了
*/

namespace Ui {
class NameDialog;
}

class NameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NameDialog(QWidget *parent = 0);
    ~NameDialog();

    bool ifSetName = false;
    QString fileName;

private slots:

    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::NameDialog *ui;

    QCloseEvent *event;
};

#endif // NAMEDIALOG_H
