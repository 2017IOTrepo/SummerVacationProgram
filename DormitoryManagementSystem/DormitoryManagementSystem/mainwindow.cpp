#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
//对话框头文件
#include <QDialog>
//标准对话框头文件
#include <QMessageBox>
//文件对话框
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    firstOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::firstOpen(){

}

void MainWindow::on_MainWindow_destroyed()
{

}

void MainWindow::on_pOpen_triggered()
{
    filePath = fileDialog.getOpenFileName(this, "open", "../", "sql(*.db)");
    //qDebug() << filePath;

}

void MainWindow::on_pClose_triggered()
{
    this->close();
}

void MainWindow::on_pAdd_triggered()
{
    infodialog.exec();
}
