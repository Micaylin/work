#include "g1_choose.h"
#include "ui_g1_choose.h"
#include "g1c_addition.h"
#include "g1c_subtraction.h"
#include <qglobal.h>

g1_choose::g1_choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1_choose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic5.png");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));






}





g1_choose::~g1_choose()
{
    delete ui;
}











void g1_choose::on_pushButton_clicked() //Addition: Practice Mode
{
    g1C_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g1_choose::on_pushButton_2_clicked() //Subtraction: Practice Mode
{
    g1C_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Practice mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes
}
