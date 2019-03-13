#include "five_to_seven.h"
#include "ui_five_to_seven.h"
#include "g1_choose.h"
#include "g1_singlechoose.h"
#include "g1_multichoose.h"



Five_to_Seven::Five_to_Seven(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Five_to_Seven)
{
    ui->setupUi(this);
}

Five_to_Seven::~Five_to_Seven() //destructor
{
    delete ui;
}



void Five_to_Seven::on_pushButton_clicked() //practice mode,
{
    hide(); //hides this window
    g1_choose dialog; //creates choose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Practice mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes



}

void Five_to_Seven::on_pushButton_2_clicked() //single player mode
{
    hide(); //hides this window
    g1_singlechoose dialog; //creates singlechoose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Single Player Mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes


}

void Five_to_Seven::on_pushButton_3_clicked() //multiplayer mode
{
    hide(); //hides this window
    g1_multichoose dialog; //creates multichoose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Multiplayer mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes


}
