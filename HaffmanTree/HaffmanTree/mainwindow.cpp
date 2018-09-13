#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "savedialog.h"

#include <QTextEdit>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainText = ui->mainTextView;
    turnUI(false);
}

MainWindow::~MainWindow()
{
    if(!isOpenOk){
        //记录上一次打开的文件
        file.open(QIODevice::WriteOnly);
        file.write(filePath.toUtf8());

        file.close();
    }

    delete ui;
}

void MainWindow::firstOpen(){
    file.setFileName(dataPath);
    if(!file.open(QIODevice::ReadOnly)){

        QByteArray array = file.readAll();
        filePath = QString(array);
        QFile dataFile(filePath);

        if(dataFile.open(QIODevice::ReadOnly)){
            isOpenOk = true;
            turnUI(true);
        }else{
            isOpenOk = false;
            QMessageBox::warning(this, "warning", "无法读取上次打开的文件!\n请手动打开!");
        }

    }
    file.close();
}

void MainWindow::on_pUnzip_triggered()
{
    this->setEnabled(false);
    saveDialog.exec();
}

void MainWindow::on_pCompressSave_triggered()
{
    this->setEnabled(false);
    saveDialog.exec();
}

void MainWindow::on_pOpen_triggered()
{
    filePath = fileDialog.getOpenFileName(this, "打开", "../", "txt(*.txt)");
    if(!filePath.isEmpty()){
        isOpenOk = true;
        turnUI(true);
    }
}

void MainWindow::on_pNew_triggered()
{
    //namedialog.exec();
    QString newFilePath = fileDialog.getSaveFileName(this, "新建", "../", "txt(*.txt)");
    qDebug() << newFilePath << "地址";
    if(!newFilePath.isEmpty()){
        QFile newFile;
        newFile.setFileName(newFilePath);
        newFile.open(QIODevice::WriteOnly);
        filePath = newFilePath;
        isOpenOk = true;
        turnUI(true);
    }
}

void MainWindow::turnUI(bool ifTurn){
    if(ifTurn){
        ui->pCompressSave->setEnabled(true);
        ui->pUnzip->setEnabled(true);
        ui->mainTextView->setEnabled(true);
    }else{
        ui->pCompressSave->setEnabled(false);
        ui->pUnzip->setEnabled(false);
        ui->mainTextView->setEnabled(false);
    }
}
