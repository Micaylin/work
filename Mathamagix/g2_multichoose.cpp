#include "g2_multichoose.h"
#include "ui_g2_multichoose.h"
#include "g1m_addition.h"
#include "g1m_subtraction.h"
#include "g2m_multiplication.h"
#include "g2m_division.h"

g2_multichoose::g2_multichoose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2_multichoose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic7.jpg");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));
}

g2_multichoose::~g2_multichoose()
{
    delete ui;
}



void g2_multichoose::on_pushButton_clicked() //Addition multiplayer
{
    g1M_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g2_multichoose::on_pushButton_2_clicked() //Subtraction multiplayer
{
    g1M_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g2_multichoose::on_pushButton_3_clicked() //Multiplication multiplayer
{
    g2M_multiplication dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Multiplication: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g2_multichoose::on_pushButton_4_clicked() //Division multiplayer
{

    g2M_division dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Division: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes
}
