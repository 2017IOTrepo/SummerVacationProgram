#include "savedialog.h"
#include "ui_savedialog.h"

#include <QCloseEvent>
#include <QLabel>

SaveDialog::SaveDialog(QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::CustomizeWindowHint),
    ui(new Ui::SaveDialog)
{
    ui->setupUi(this);

    text = ui->label_2;
}

void SaveDialog::closeEvent(QCloseEvent *event){
    if(isClose){
        event->accept();
    }else {
        event->ignore();
    }
}

SaveDialog::~SaveDialog()
{
    delete ui;
}

void SaveDialog::reject(){
    QCloseEvent *event;
    closeEvent(event);
}
