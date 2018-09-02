#include "infodialog.h"
#include "ui_infodialog.h"

#include <QDebug>
#include <QDialog>
#include <QMessageBox>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_finalCheck_accepted()
{
    if(recordData()){
        emit sendMessages(docNum, docClass, docPeo, stuName, stuNumber, stuSex, stuMajor);
        qDebug() << "发送信号";
        ui->docNumberEdit->clear();
        ui->docClassEdit->clear();
        ui->stuMajorEdit->clear();
        ui->docPeoEdit->clear();
        ui->stuNameEdit->clear();
        ui->stuNumberEdit->clear();
        this->close();
    }else{
        QMessageBox::critical(this, "error", "无法正确添加 请检查是否" + falseText + "信息错误！");
        falseText.clear();
    }
}

void InfoDialog::on_finalCheck_rejected()
{
    this->close();
}

bool InfoDialog::recordData(){
    bool isOK = true;

//    qDebug() << ui->docNumberEdit->text().isEmpty();
//    qDebug() << ui->docClassEdit->text().isEmpty();
//    qDebug() << ui->stuMajorEdit->text().isEmpty();
//    qDebug() << ui->docPeoEdit->text().isEmpty();
//    qDebug() << ui->stuNameEdit->text().isEmpty();
//    qDebug() << ui->stuNumberEdit->text().isEmpty();

    if(!ui->docNumberEdit->text().isEmpty() && !ui->docClassEdit->text().isEmpty() &&
            !ui->stuMajorEdit->text().isEmpty() && !ui->docPeoEdit->text().isEmpty() &&
            !ui->stuNameEdit->text().isEmpty() && !ui->stuNumberEdit->text().isEmpty()){

        docNum = ui->docNumberEdit->text().toInt(&isOK);
        if((!isOK) && (docNum <= 0)){
            falseText.append("宿舍号 ");
        }
        docClass = ui->docClassEdit->text().toInt(&isOK);
        if((!isOK) && (docClass <= 0)){
            falseText.append("宿舍所属班级 ");
        }
        docPeo = ui->docPeoEdit->text().toInt(&isOK);
        if((!isOK) && (docPeo <= 0)){
            falseText.append("宿舍人数 ");
        }
        stuNumber = ui->docNumberEdit->text().toInt(&isOK);
        if((!isOK) && (stuNumber <= 0)){
            falseText.append("学生学号 ");
        }

        stuName = ui->stuNameEdit->text();
        stuMajor = ui->stuMajorEdit->text();

        stuSex = ui->stuSexCheck->currentText();

    }else{
        falseText.append("有无未填");
        return !isOK;
    }

    return isOK;
}
