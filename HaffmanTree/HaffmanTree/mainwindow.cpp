#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "haffmantree.h"
#include "savedialog.h"

#include <QTextEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainText = ui->mainTextView;
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
    if(!dataPath.isEmpty()){

        file.open(QIODevice::ReadOnly);
        QByteArray array = file.readAll();
        filePath = QString(array);
        QFile dataFile(filePath);

        if(dataFile.open(QIODevice::ReadOnly)){
            isOpenOk = true;
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

}

void MainWindow::on_mainTextView_textChanged()
{

}
