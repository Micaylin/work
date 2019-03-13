#include "under_five_shapes.h"
#include "ui_under_five_shapes.h"
#include <QPixmap>

Under_Five_Shapes::Under_Five_Shapes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Under_Five_Shapes)
{
    ui->setupUi(this);
    QPixmap pic(":/img/shapes.jpg");
    ui->label->setPixmap(pic.scaled(700,700, Qt::KeepAspectRatio));

}

Under_Five_Shapes::~Under_Five_Shapes()
{
    delete ui;
}
