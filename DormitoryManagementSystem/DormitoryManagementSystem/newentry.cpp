#include "newentry.h"
#include "ui_newentry.h"

newEntry::newEntry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newEntry)
{
    ui->setupUi(this);
}

newEntry::~newEntry()
{
    delete ui;
}

void newEntry::on_sureButton_clicked()
{

}
