#include "g1_multichoose.h"
#include "ui_g1_multichoose.h"
#include <qglobal.h>
#include "g1m_addition.h"
#include "g1m_subtraction.h"

g1_multichoose::g1_multichoose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1_multichoose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic7.jpg");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));
}

g1_multichoose::~g1_multichoose()
{
    delete ui;
}

void g1_multichoose::on_pushButton_clicked() //Addition multiplayer
{
    g1M_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes



}

void g1_multichoose::on_pushButton_2_clicked() //Subtraction multiplayer
{
    g1M_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes
}
