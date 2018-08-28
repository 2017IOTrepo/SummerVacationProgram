#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//行为头文件
#include <QAction>
#include <QDebug>
#include <QPushButton>
//工具栏头文件
#include <QToolBar>
//状态栏头文件
#include <QStatusBar>
//标签头文件
#include <QLabel>
//文本编辑头文件
#include <QTextEdit>
////浮动窗口头文件
//#include <QDockWidget>
//#include <QSqlDatabase>
//#include <QDebug>
//#include <QMessageBox>
//#include <QSqlError>
//#include <QSqlQuery>
//#include <QVariantList>
////表格模型
//#include <QSqlTableModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pNew_triggered();

    void on_pOpen_triggered();

    void on_pSave_triggered();

    void on_pClose_triggered();

    void on_pSaveAS_triggered();

    void on_pDelete_triggered();

    void on_searchView_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_nameSlect_clicked();

    void on_numberSlect_clicked();

    void on_docnumSlect_clicked();

    void on_chooseSearch_activated(const QString &arg1);

    void on_pAdd_triggered();

private:
    Ui::MainWindow *ui;
    void initView();
};

#endif // MAINWINDOW_H
