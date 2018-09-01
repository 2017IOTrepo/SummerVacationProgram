#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
//对话框头文件
#include <QDialog>
//标准对话框头文件
#include <QMessageBox>
//文件对话框
#include <QFileDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
//表格模型
#include <QSqlTableModel>

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
    dataBase = QSqlDatabase::addDatabase("QSQLITE");
}

void MainWindow::on_MainWindow_destroyed()
{

}

void MainWindow::on_pOpen_triggered()
{
    filePath = fileDialog.getOpenFileName(this, "open", "../", "sql(*.db)");
    dataBase.setDatabaseName(filePath);
    if(!dataBase.open()){
        QMessageBox::critical(this, "错误", "打开数据库错误\n" + dataBase.lastError().text());
        return;
    }
    //qDebug() << filePath;

}

void MainWindow::on_pClose_triggered()
{
    this->close();
}

void MainWindow::on_pAdd_triggered()
{
    connect(&infodialog, InfoDialog::sendMessages, this,
            &MainWindow::receiveMessages);
    infodialog.exec();
}

void MainWindow::receiveMessages(int docNum, int docClass, int docPeo,
                                 QString stuName, int stuNumber, QString stuSex, QString stuMajor){
    qDebug() << docNum << docClass << docPeo << stuName << stuNumber << stuSex << stuMajor;
}
