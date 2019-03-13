#include "under_five_numbers2.h"
#include "ui_under_five_numbers2.h"
#include <QPixmap>

Under_Five_Numbers2::Under_Five_Numbers2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Under_Five_Numbers2)
{
    ui->setupUi(this);
    QPixmap pic(":/img/numbers2.jpg");
    ui->label->setPixmap(pic.scaled(700,700, Qt::KeepAspectRatio));

}

Under_Five_Numbers2::~Under_Five_Numbers2()
{
    delete ui;
}
