#include "g2_singlechoose.h"
#include "ui_g2_singlechoose.h"
#include "g1s_addition.h"
#include "g1s_subtraction.h"
#include "g2s_multiplication.h"
#include "g2s_division.h"

g2_singlechoose::g2_singlechoose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2_singlechoose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic2.jpg");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));
}

g2_singlechoose::~g2_singlechoose()
{
    delete ui;
}

void g2_singlechoose::on_pushButton_clicked() //Addition Single Player mode
{
    g1S_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes




}

void g2_singlechoose::on_pushButton_2_clicked() //Subtraction Single Player mode
{
    g1S_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g2_singlechoose::on_pushButton_3_clicked() //Multiplication Single Player mode
{
    g2S_multiplication dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Multiplication: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes


}

void g2_singlechoose::on_pushButton_4_clicked() //Division Single Player mode
{
    g2S_division dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Division: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes


}
