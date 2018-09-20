/*
 * 四种情况
 * 1.普通打开
 * 2.哈夫曼打开
 * 3.普通保存
 * 4.哈夫曼保存
 * 但4^4 = 16方法，操作不当有很大可能失误
 * 如果改变只能从新编码保存
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "savedialog.h"

#include <QDebug>
#include <QCloseEvent>
#include <vector>
#define ENGBET 256

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    fileChar = new int[ENGBET];
//    *fileChar = {0};
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

void MainWindow::on_pUnzip_triggered()
{
    saveByNormal();
}

void MainWindow::on_pCompressSave_triggered()
{
    this->setEnabled(false);
    saveDialog.text->setText("<html><head/><body><p><span style=' font-size:12pt; "
                             "font-weight:600;'>保存中····</span></p></body></html>");
    saveDialog.show();
    saveDialog.isClose = true;
    saveDialog.close();
    saveDialog.isClose = false;
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
    turnUI(true);

    int res = QMessageBox::question(this, "询问", "请问此文件是否为哈夫曼编码格式?");
    switch (res) {
    case QMessageBox::Yes:
        isHaffman = true;
        readByNormal();
        readByHaffman();
        changeToNormal();
        break;

    case QMessageBox::No:
        isHaffman = false;
        readByNormal();
        break;

    default:
        break;
    }
}

void MainWindow::readByHaffman(){
    saveDialog.text->setText("<html><head/><body><p><span style=' font-size:12pt; "
                             "font-weight:600;'>读取中····</span></p></body></html>");
    saveDialog.show();
    for(int i = 0; i<array.length(); i++){
        fileChar[array[i]]++;
    }

    //没有用vector类
    //因为对象问题
    for(int i = 0; i<ENGBET; i++){
        //qDebug() << fileChar[i];
        if(fileChar[i]){
            node[charCount++] = HaffmanTree((char)i, fileChar[i]);
            qDebug() << (char)i << fileChar[i];
        }
    }

    //手动去除多余的空间
    HaffmanTree *oldNode = node;
    node = new HaffmanTree[charCount];
    for(int i=0; i<charCount; i++){
        node[i] = oldNode[i];
    }
    delete []oldNode;

    sortByWeight(0, charCount - 1);

    for(int i=0; i<charCount; i++){
        qDebug() <<node[i].fileChar << node[i].weight;
    }

    saveDialog.isClose = true;
    saveDialog.close();
    saveDialog.isClose = false;
}

void MainWindow::sortByWeight(int lo, int hi){
    while (lo < (hi = sortCore(lo, hi))) ;
}

//快排实现迅速移动节点
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

void MainWindow::changeToNormal(){

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
    mainText->setText(array);
    //默认识别成普通编码形式
    isOpenOk = true;
    file.close();
}

void MainWindow::saveByHaffman(){
    readByHaffman();
}

void MainWindow::saveByNormal(){
    this->setEnabled(false);
    saveDialog.text->setText("<html><head/><body><p><span style=' font-size:12pt; "
                             "font-weight:600;'>保存中····</span></p></body></html>");
    saveDialog.show();
    QString text = mainText->toPlainText();
    if(file.open(QIODevice::WriteOnly)){
        file.write(text.toUtf8());
        isSave = true;
        file.close();
    }else {
        QMessageBox::critical(this, "错误", "无法写入文件\n请检查文件是否损坏!");
        isSave = false;
    }
    saveDialog.isClose = true;
    saveDialog.close();
    saveDialog.isClose = false;
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
