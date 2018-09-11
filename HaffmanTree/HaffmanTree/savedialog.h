#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class SaveDialog;
}

class SaveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaveDialog(QWidget *parent = 0);
    ~SaveDialog();

    void closeEvent(QCloseEvent *event);
    void reject();

private slots:

private:
    Ui::SaveDialog *ui;
};

#endif // SAVEDIALOG_H
