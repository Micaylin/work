#include "under_five_numbers.h"
#include "ui_under_five_numbers.h"

Under_Five_Numbers::Under_Five_Numbers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Under_Five_Numbers)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic8.png");
    ui->label->setPixmap(pic.scaled(1000,1000, Qt::KeepAspectRatio));
}

Under_Five_Numbers::~Under_Five_Numbers()
{
    delete ui;
}
