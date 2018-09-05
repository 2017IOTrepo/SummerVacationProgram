#include "namedialog.h"
#include "ui_namedialog.h"

#include <QMessageBox>

/*
这个本来是新建文件用的
后来发现并不需要这个类
也懒得删了
反正就是用不到就对了
*/
NameDialog::NameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameDialog)
{
    ui->setupUi(this);
}

NameDialog::~NameDialog()
{
    delete ui;
}

void NameDialog::on_ok_clicked()
{
    fileName = ui->lineEdit->text();
    if(!fileName.isEmpty()){
        ifSetName = true;
        this->close();
    }else {
        QMessageBox::critical(this, "错误！", "新文件名不能为空！");
        ifSetName = false;
    }
}

void NameDialog::on_cancel_clicked()
{
    ifSetName = false;
    this->close();
}
