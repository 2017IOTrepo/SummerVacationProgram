#ifndef NEWENTRY_H
#define NEWENTRY_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class newEntry;
}

class newEntry : public QWidget
{
    Q_OBJECT

public:
    explicit newEntry(QWidget *parent = 0);
    ~newEntry();

private slots:
    void on_sureButton_clicked();

private:
    Ui::newEntry *ui;
};

#endif // NEWENTRY_H
