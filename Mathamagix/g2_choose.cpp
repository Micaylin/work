#include "g2_choose.h"
#include "ui_g2_choose.h"
#include "g1c_addition.h"
#include "g1c_subtraction.h"
#include "g2c_multiplication.h"
#include "g2c_division.h"

g2_choose::g2_choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2_choose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic5.png");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));
}

g2_choose::~g2_choose()
{
    delete ui;
}

void g2_choose::on_pushButton_clicked() //Addition Practice Mode
{
    g1C_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes


}

void g2_choose::on_pushButton_2_clicked() //Subtraction Practice Mode
{
    g1C_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g2_choose::on_pushButton_3_clicked() //Multiplication Practice Mode
{
    g2C_multiplication dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Multiplication: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes



}

void g2_choose::on_pushButton_4_clicked() //Division Practice Mode
{
    g2C_division dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Divison: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}
