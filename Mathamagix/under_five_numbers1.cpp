#include "under_five_numbers1.h"
#include "ui_under_five_numbers1.h"
#include <QPixmap>

Under_Five_Numbers1::Under_Five_Numbers1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Under_Five_Numbers1)
{
    ui->setupUi(this);
    QPixmap pic(":/img/numbers1.png");
    ui->label->setPixmap(pic.scaled(1000,1000, Qt::KeepAspectRatio));

}

Under_Five_Numbers1::~Under_Five_Numbers1()
{
    delete ui;
}
