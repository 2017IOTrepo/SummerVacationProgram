#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "infodialog.h"
//#include "namedialog.h"

#include <QMainWindow>
//文件对话框
#include <QFileDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
//表格模型
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QVariant>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);

    InfoDialog infodialog;
    //NameDialog namedialog;

signals:

private slots:
    void on_pOpen_triggered();

    void on_pClose_triggered();

    void on_pAdd_triggered();

    void on_startSort_clicked();
    
    void on_searchView_textChanged(const QString &arg1);
    
    void on_pNew_triggered();
        
    void on_pDelete_triggered();
    
    void on_downSort_clicked(bool checked);

    void on_upsort_clicked(bool checked);

    void on_nameSort_clicked(bool checked);

    void on_numSort_clicked(bool checked);

    void on_docSort_clicked(bool checked);

    void on_pSave_triggered();

    void on_pEdit_triggered();

private:
    Ui::MainWindow *ui;
    void firstOpen();
    void receiveMessages(int, int, int, QString, int, QString, QString);
    void initDataBase();
    void openDataBase();
    void newTabel();
    void addModel();
    void turnUI();

    void upOrDownSort(int);
    void setHeader();

    QSqlDatabase dataBase;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlRecord record;

    QFileDialog fileDialog;
    QString filePath;
    QString dataPath = "./data.txt";
    QFile file;
    QString fileName;

    bool isUp = false;
    int sortType = 0;
    int editRow = -1;
    bool isEdit = false;
    bool isOpenOk = true;

};

#endif // MAINWINDOW_H
