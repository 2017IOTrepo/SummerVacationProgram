#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HuffmanTreeRefactor.h"

class HuffmanTreeRefactor : public QMainWindow
{
	Q_OBJECT

public:
	HuffmanTreeRefactor(QWidget *parent = Q_NULLPTR);

private:
	Ui::HuffmanTreeRefactorClass ui;
	void init();
};
