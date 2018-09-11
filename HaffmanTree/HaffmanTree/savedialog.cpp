#include "savedialog.h"
#include "ui_savedialog.h"

#include <QCloseEvent>

SaveDialog::SaveDialog(QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::CustomizeWindowHint),
    ui(new Ui::SaveDialog)
{
    ui->setupUi(this);
}

void SaveDialog::closeEvent(QCloseEvent *event){
    event->ignore();
}

SaveDialog::~SaveDialog()
{
    delete ui;
}

void SaveDialog::reject(){
    QCloseEvent *event;
    closeEvent(event);
}
