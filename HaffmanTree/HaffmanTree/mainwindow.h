#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "savedialog.h"
#include "haffmantree.h"
#include <QMainWindow>
#include <QTextEdit>
//文件对话框
#include <QFileDialog>

#define ENGBET 27

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    SaveDialog saveDialog;

private slots:
    void on_pUnzip_triggered();

    void on_pCompressSave_triggered();

    void on_pOpen_triggered();

    void on_pNew_triggered();

private:
    Ui::MainWindow *ui;
    void firstOpen();
    void turnUI(bool);

    bool isOpenOk = false;

    QTextEdit *mainText;
    QFileDialog fileDialog;
    QString filePath;
    QString dataPath = "./data.txt";
    QFile file;

};

#endif // MAINWINDOW_H
