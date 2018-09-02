#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//文件对话框
#include <QFileDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
//表格模型
#include <QSqlTableModel>

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

    void on_startSort_clicked();
    
    void on_searchView_textChanged(const QString &arg1);
    
    void on_pNew_triggered();
    
    void on_pSaveAs_triggered();
    
    void on_pDelete_triggered();
    
private:
    Ui::MainWindow *ui;
    void firstOpen();
    void receiveMessages(int, int, int, QString, int, QString, QString);
    void initDataBase();
    void initNewDataBase();
    void openDataBase();
    void newTabel();
    void addModel();

    QSqlDatabase dataBase;
    QSqlQuery query;
    QSqlTableModel *model;

    QFileDialog fileDialog;
    QString filePath;
    QString dataPath = "./data.txt";
    QFile file;

};

#endif // MAINWINDOW_H
