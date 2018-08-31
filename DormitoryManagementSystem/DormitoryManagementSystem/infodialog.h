#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();

private slots:
    void on_finalCheck_accepted();

    void on_finalCheck_rejected();

private:
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
