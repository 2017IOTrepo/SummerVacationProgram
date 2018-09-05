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
#include <QItemSelectionModel>
//记录类
#include <QSqlRecord>
#include <QVariant>
#include <QByteArray>
#include <QFile>
#include <QEvent>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&infodialog, InfoDialog::sendMessages, this,
            &MainWindow::receiveMessages);
    firstOpen();
}

MainWindow::~MainWindow()
{
    //记录上一次打开的文件
    file.open(QIODevice::WriteOnly);
    file.write(filePath.toUtf8());

    file.close();
    model->submitAll();
    delete ui;
}

//覆写关闭事件 实现关闭前保存
void MainWindow::closeEvent(QCloseEvent *event){
    if(infodialog.ifChanged){
        int ok = QMessageBox::warning(this,tr("确认保存!"),tr("您还有尚未保存的条目，请问是否保存！"),
            QMessageBox::Yes,QMessageBox::No);
        if(ok == QMessageBox::Yes){
            model->submitAll();//是则保存
            event->accept();
        }else{
            event->ignore();
        }
    }
}

//初始化
void MainWindow::firstOpen(){
    dataBase = QSqlDatabase::addDatabase("QSQLITE");
    file.setFileName(dataPath);
    if(!dataPath.isEmpty()){

        file.open(QIODevice::ReadOnly);
        QByteArray array = file.readAll();
        filePath = QString(array);
        QFile dataFile(filePath);

        if(dataFile.open(QIODevice::ReadOnly)){
            initDataBase();
        }else{
            QMessageBox::warning(this, "warning", "无法读取上次打开的文件!\n请手动打开!");
        }

    }
    file.close();
}

void MainWindow::on_pOpen_triggered()
{
    filePath = fileDialog.getOpenFileName(this, "打开", "../", "sql(*.db)");
    initDataBase();
}

//初始化
void MainWindow::initDataBase(){
    query = QSqlQuery(dataBase);
    openDataBase();
    newTabel();
    addModel();
}

void MainWindow::openDataBase(){
    dataBase.setDatabaseName(filePath);
    if(!dataBase.open()){
        QMessageBox::critical(this, "错误", "打开数据库错误\n" + dataBase.lastError().text());
    }
}

//新建表
void MainWindow::newTabel(){
    bool isSuccess = query.exec("create table student(docNum INTEGER, docClass INTEGER, docPeo INTEGER, stuName varchar(50) primary key, \
                                stuNum INTEGER, stuSex varchar(4), stuMajor varchar(50));");
    if(isSuccess){
        qDebug() << "成功";
    }else{
        qDebug() << "失败";
    }
}

//添加模型到视图
void MainWindow::addModel(){
    model = new QSqlTableModel(this);
    model->setTable("student");

    ui->tableView->setModel(model);
    model->select();

    setHeader();

    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置手动提交
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

//设置标题
void MainWindow::setHeader(){
    //设置标题
    model->setHeaderData(0, Qt::Horizontal, "宿舍号");
    model->setHeaderData(1, Qt::Horizontal, "所属班级");
    model->setHeaderData(2, Qt::Horizontal, "宿舍人数");
    model->setHeaderData(3, Qt::Horizontal, "学生姓名");
    model->setHeaderData(4, Qt::Horizontal, "学号");
    model->setHeaderData(5, Qt::Horizontal, "学生性别");
    model->setHeaderData(6, Qt::Horizontal, "学生专业");
}

void MainWindow::on_pClose_triggered()
{
    this->close();
}

void MainWindow::on_pAdd_triggered()
{
    infodialog.ifChanged = true;
    infodialog.setWindowTitle(QString("新建学生信息"));
    infodialog.exec();
}

void MainWindow::receiveMessages(int docNum, int docClass, int docPeo,
                                 QString stuName, int stuNumber, QString stuSex, QString stuMajor){
    qDebug() << docNum << docClass << docPeo << stuName << stuNumber << stuSex << stuMajor << editRow;
    if((editRow == -1) && !isEdit){
        record = model->record();//获取空记录
        record.setValue(0 , docNum);
        record.setValue(1 , docClass);
        record.setValue(2 , docPeo);
        record.setValue(3 , stuName);
        record.setValue(4 , stuNumber);
        record.setValue(5 , stuSex);
        record.setValue(6 , stuMajor);
        //获取行号
        int row = model->rowCount();
        model->insertRecord(row, record);
    }else{
        record.setValue(0 , docNum);
        record.setValue(1 , docClass);
        record.setValue(2 , docPeo);
        record.setValue(3 , stuName);
        record.setValue(4 , stuNumber);
        record.setValue(5 , stuSex);
        record.setValue(6 , stuMajor);
        model->setRecord(editRow, record);
        isEdit = false;
    }

}

//排序 有空写姓氏排序
void MainWindow::on_startSort_clicked()
{
    switch(sortType){

    case 0:
        //query.prepare("select areaName from area order by convert(areaName USING gbk) COLLATE gbk_chinese_ci asc");
        upOrDownSort(3);
        break;

    case 1:
        upOrDownSort(4);
        break;

    case 2:
        upOrDownSort(0);
        break;

    }
}

void MainWindow::upOrDownSort(int line){
    if(isUp){
        model->setSort(line, Qt::AscendingOrder);
    }else{
        model->setSort(line, Qt::DescendingOrder);
    }
    model->select();
}

void MainWindow::on_searchView_textChanged(const QString &arg1)
{
    if(!arg1.isEmpty()){
        switch (ui->searchChoice->currentIndex()) {

        //精确查找 模糊查找以后写
        case 0:
        {
            QString stuName = QString("stuName = '%1'").arg(arg1);
            model->setFilter(stuName);
        }
            break;

        case 1:
        {
            QString stuNum = QString("stuNum = '%1'").arg(arg1);
            model->setFilter(stuNum);
        }
            break;

        case 2:
        {
            QString docNum = QString("docNum = '%1'").arg(arg1);
            model->setFilter(docNum);
        }
            break;

        }
    }else{
        model->setTable("student");
        setHeader();
    }
    model->select();
}

void MainWindow::on_pNew_triggered()
{
    //namedialog.exec();
    QString newFilePath = fileDialog.getSaveFileName(this, "新建", "../", "sql(*.db)");
    qDebug() << newFilePath;
    QFile newFile;
    newFile.setFileName(newFilePath);
    newFile.open(QIODevice::WriteOnly);
    filePath = newFilePath;
    initDataBase();
}

void MainWindow::on_pEdit_triggered()
{
    infodialog.ifChanged = true;
    editRow = ui->tableView->currentIndex().row();
    record = model->record(editRow);

    int docNum = record.value(0).toInt();
    int docClass = record.value(1).toInt();
    int docPeo = record.value(2).toInt();
    QString stuName = record.value(3).toString();
    int stuNumber = record.value(4).toInt();
    QString stuSex = record.value(5).toString();
    QString stuMajor = record.value(6).toString();

    qDebug() << docNum << docClass << docPeo << stuName << stuNumber << stuSex << stuMajor;
    infodialog.dealEditSignal(docNum, docClass, docPeo, stuName, stuNumber, stuSex, stuMajor);
    isEdit = true;
    infodialog.setWindowTitle(QString("修改学生信息"));
    infodialog.exec();
}

void MainWindow::on_pSave_triggered()
{
    infodialog.ifChanged = false;
    bool issuccessful = model->submitAll();
    if(issuccessful){
        qDebug() << "成功";
    }else{
        qDebug() << "失败";
    }
}

void MainWindow::on_pDelete_triggered()
{
    //单行删除
//    int delRow = ui->tableView->currentIndex().row();
//    model->removeRow(delRow);

    //多行删除
    //获取选中模型
    QItemSelectionModel *selectModel = ui->tableView->selectionModel();
    QModelIndexList rowsList = selectModel->selectedRows();
    //删除所有行
    for(int i=0; i<rowsList.size(); i++)
        model->removeRow(rowsList.at(i).row());
    int ok = QMessageBox::warning(this,tr("删除选中行!"),tr("你确定"
        "删除当前选中的行吗？"),
        QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No){
        model->revertAll();//如果不删除，则撤销
    }else{
        model->submitAll(); //否则提交，在数据库中删除该行
    }
}

void MainWindow::on_downSort_clicked(bool checked)
{
    if(checked){
        isUp = false;
        ui->upsort->setChecked(false);
    }
}

void MainWindow::on_upsort_clicked(bool checked)
{
    if(checked){
        isUp = true;
        ui->downSort->setChecked(false);
    }
}

void MainWindow::on_nameSort_clicked(bool checked)
{
    if(checked){
        sortType = 0;
        ui->numSort->setChecked(false);
        ui->docSort->setChecked(false);
    }
}

void MainWindow::on_numSort_clicked(bool checked)
{
    if(checked){
        sortType = 1;
        ui->nameSort->setChecked(false);
        ui->docSort->setChecked(false);
    }
}

void MainWindow::on_docSort_clicked(bool checked)
{
    sortType = 2;
    if(checked){
        ui->numSort->setChecked(false);
        ui->nameSort->setChecked(false);
    }
}
