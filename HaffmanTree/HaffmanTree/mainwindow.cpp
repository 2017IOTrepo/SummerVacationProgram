/*
 * 四种情况
 * 1.普通打开(完成)
 * 2.哈夫曼打开(完成)(待改进
 * 3.普通保存(完成)
 * 4.哈夫曼保存(完成)(待改进
 * 但4^4 = 16方法，操作不当有很大可能失误
 * 如果改变只能从新编码保存
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QCloseEvent>
#include <iostream>
#include <QString>
#include <cmath>
//#define ENGBET 512

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    node = new HaffmanTree[ENGBET];
    firstOpen();
    mainText = ui->mainTextView;
    turnUI(false);
}

MainWindow::~MainWindow()
{
    if(!isOpenOk){
        //记录上一次打开的文件
        dataFile.open(QIODevice::WriteOnly);
        dataFile.write(filePath.toUtf8());

        dataFile.close();
    }
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event){
    if(!isSave){
        int res = QMessageBox::question(this, "保存", "你有未保存内容, 请问是否保存!",
                                        QMessageBox::Yes, QMessageBox::No, QMessageBox::Cancel);
        switch (res) {
        case QMessageBox::Yes:
            if(isHaffman){
                saveByHaffman();
            }else {
                saveByNormal();
            }
            event->accept();
            break;
        case QMessageBox::No:
            event->accept();
            break;
        case QMessageBox::Cancel:
            event->ignore();
            break;
        default:
            break;
        }
    }
}

void MainWindow::firstOpen(){
    dataFile.setFileName(dataPath);
    if(!dataFile.open(QIODevice::ReadOnly)){

        QByteArray array = file.readAll();
        filePath = QString(array);
        file.setFileName(filePath);

        if(file.open(QIODevice::ReadOnly)){
            readFile();
        }else{
            isOpenOk = false;
            QMessageBox::warning(this, "warning", "无法读取上次打开的文件!\n请手动打开!");
        }

    }
    dataFile.close();
}

void MainWindow::on_pCompressSave_triggered()
{
    this->setEnabled(false);
    saveByHaffman();
}

void MainWindow::on_pOpen_triggered()
{
    filePath = fileDialog.getOpenFileName(this, "打开", "../", "txt(*.txt)");
    qDebug() << filePath;
    file.setFileName(filePath);
    if(file.open(QIODevice::ReadOnly)){
        readFile();
    }
}

void MainWindow::on_pNew_triggered()
{
    //namedialog.show();
    QString newFilePath = fileDialog.getSaveFileName(this, "新建", "../", "txt(*.txt)");
    qDebug() << newFilePath << "地址";

    if(!newFilePath.isEmpty()){
        QFile newFile;
        newFile.setFileName(newFilePath);
        newFile.open(QIODevice::WriteOnly);
        filePath = newFilePath;
        readFile();
    }

}

void MainWindow::readFile(){
}

void MainWindow::readByHaffman(){
}

//每个node设置字符串仅是为了debug
void MainWindow::setNum(HaffmanTree *node, QString numSet, bool left){
}

void MainWindow::insert(int lo, HaffmanTree father){
    for(int i = charCount; i > lo; i--){
        node[i] = node[i - 1];
    }
    node[lo] = father;
}

/**
  冒泡排序
*/
void MainWindow::sortByWeight(int lo, int hi){
    while (lo < (hi = sortCore(lo, hi))) ;
}

//实现迅速移动节点
int MainWindow::sortCore(int lo, int hi) {
    int last = lo;//最右侧逆序对初始化为[lo - 1, lo]

    while(++lo <= hi)
    {
        if(node[lo - 1].weight > node[lo].weight)
        {
            last = lo;
            swap(lo - 1, lo);
        }
    }

    return last;//返回最右侧逆序对位置
}

void MainWindow::swap(int a, int b){
    HaffmanTree temp;

    temp = node[a];
    node[a] = node[b];
    node[b] = temp;
}

void MainWindow::readByNormal(){
    if(file.size() < 10000000){
        //默认只识别utf-8
        array = file.readAll();
    }else{
        while (!file.atEnd()) {
            //单行读取
            array += file.readLine();
        }
    }
    //默认识别成普通编码形式
    isOpenOk = true;
    file.close();
}

void MainWindow::saveByHaffman(){
    QString text = "";
    array = mainText->toPlainText().toUtf8();
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream.setCodec("UTF-8"); // 设置编码
        stream << text;
        isSave = true;
        file.close();
    }else {
        QMessageBox::critical(this, "错误", "无法写入文件\n请检查文件是否损坏!");
        isSave = false;
    }
    this->setEnabled(true);
}

void MainWindow::saveByNormal(){
    this->setEnabled(false);
    QString text = mainText->toPlainText();
    if(file.open(QIODevice::WriteOnly)){
        file.write(text.toUtf8());
        isSave = true;
        file.close();
    }else {
        QMessageBox::critical(this, "错误", "无法写入文件\n请检查文件是否损坏!");
        isSave = false;
    }
    this->setEnabled(true);
}

void MainWindow::turnUI(bool ifTurn){
    if(ifTurn){
        ui->pCompressSave->setEnabled(true);
        ui->pUnzip->setEnabled(true);
        mainText->setEnabled(true);
    }else{
        ui->pCompressSave->setEnabled(false);
        ui->pUnzip->setEnabled(false);
        mainText->setEnabled(false);
    }
}

void MainWindow::on_mainTextView_textChanged()
{
    isSave = false;
}
