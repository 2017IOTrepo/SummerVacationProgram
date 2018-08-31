#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//文件对话框
#include <QFileDialog>

#include "infodialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    InfoDialog infodialog;

signals:

private slots:
    void on_MainWindow_destroyed();

    void on_pOpen_triggered();

    void on_pClose_triggered();

    void on_pAdd_triggered();

private:
    Ui::MainWindow *ui;

    QFileDialog fileDialog;
};

#endif // MAINWINDOW_H
