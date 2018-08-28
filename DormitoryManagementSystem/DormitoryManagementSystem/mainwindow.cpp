#include "mainwindow.h"
#include "ui_mainwindow.h"
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
//#include <QtSql/QSqlDatabase>
//#include <QDebug>
//#include <QMessageBox>
//#include <Qtsql/QSqlError>
//#include <Qtsql/QSqlQuery>
//#include <QVariantList>
////表格模型
//#include <Qtsql/QSqlTableModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    initView();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initView(){


}

void MainWindow::on_pNew_triggered()
{

}

void MainWindow::on_pOpen_triggered()
{

}

void MainWindow::on_pSave_triggered()
{

}

void MainWindow::on_pClose_triggered()
{

}

void MainWindow::on_pSaveAS_triggered()
{

}

void MainWindow::on_pDelete_triggered()
{

}

void MainWindow::on_pAdd_triggered()
{

}

void MainWindow::on_searchView_textChanged(const QString &arg1)
{

}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_nameSlect_clicked()
{

}

void MainWindow::on_numberSlect_clicked()
{

}

void MainWindow::on_docnumSlect_clicked()
{

}

void MainWindow::on_chooseSearch_activated(const QString &arg1)
{

}
