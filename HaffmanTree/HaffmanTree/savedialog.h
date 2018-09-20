#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>
#include <QCloseEvent>
#include <QLabel>

namespace Ui {
class SaveDialog;
}

class SaveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaveDialog(QWidget *parent = 0);
    ~SaveDialog();

    void closeEvent(QCloseEvent *event);//覆写关闭事件
    void reject();
    QLabel *text;
    bool isClose = false;

private slots:

private:
    Ui::SaveDialog *ui;
};

#endif // SAVEDIALOG_H
