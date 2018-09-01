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
        this->close();
    }else{
        QMessageBox::critical(this, "error", "无法正确添加 请检查信息是否正确！");
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
        docClass = ui->docClassEdit->text().toInt(&isOK);
        docPeo = ui->docPeoEdit->text().toInt(&isOK);

        stuName = ui->stuNameEdit->text();
        stuSex = ui->stuSexCheck->currentText();
        stuNumber = ui->docNumberEdit->text().toInt(&isOK);
        stuMajor = ui->stuMajorEdit->text();

        if(isOK == false)
            return isOK;
    }else{
        return !isOK;
    }

    return isOK;
}
