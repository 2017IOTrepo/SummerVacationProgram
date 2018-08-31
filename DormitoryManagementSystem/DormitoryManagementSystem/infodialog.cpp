#include "infodialog.h"
#include "ui_infodialog.h"

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
    if(bool isOK = recordData()){
        emit sendMessages();
        this->close();
    }else{

    }
}

void InfoDialog::on_finalCheck_rejected()
{
    this->close();
}

bool InfoDialog::recordData(){
    if(!ui->docNumberEdit->text().isEmpty()){
        docNum = ui->docNumberEdit->text().toInt();
    }

    return true;
}
