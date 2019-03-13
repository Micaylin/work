#include "g1_singlechoose.h"
#include "ui_g1_singlechoose.h"
#include <qglobal.h>
#include "g1s_addition.h"
#include "g1s_subtraction.h"

g1_singlechoose::g1_singlechoose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1_singlechoose)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic2.jpg");
    ui->label_3->setPixmap(pic.scaled(400,400, Qt::KeepAspectRatio));

}

g1_singlechoose::~g1_singlechoose()
{
    delete ui;
}

void g1_singlechoose::on_pushButton_clicked() //addition quiz mode
{

    g1S_addition dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Addition: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}

void g1_singlechoose::on_pushButton_2_clicked() //subtraction quiz mode
{
    g1S_subtraction dialog; //creates dialog
    dialog.setModal(true); //sets modal mode true
    dialog.setWindowTitle("Subtraction: Single Player mode"); //sets window title
    dialog.showMaximized(); //shows maximized form
    dialog.exec(); //executes

}
