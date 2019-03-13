#include "openingscreen.h"
#include "ui_openingscreen.h"
#include <QPixmap> //to add pictures
#include "under_five.h" //to add window
#include "five_to_seven.h" //to add window
#include "eight_to_nine.h" //to add window
#include <QDebug>

OpeningScreen::OpeningScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OpeningScreen)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic4.jpg"); //takes pic from resource files
    ui->label_pic->setPixmap(pic.scaled(600,600,Qt::KeepAspectRatio)); //sets picture into text label





}

OpeningScreen::~OpeningScreen() //destructor
{
    delete ui;
}



void OpeningScreen::on_pushButton_clicked()
{



    if (ui->radioButton_under5->isChecked()){

        hide(); //hides current window
        Under_Five dialog; //creates dialog box
        dialog.setModal(true);  //sets modal mode true
        dialog.setWindowTitle("Are you ready to learn?"); //sets window title
        dialog.showMaximized(); //sets dialog box in maximized screen
        dialog.exec(); //executes



    }

    if (ui->radioButton_5->isChecked() ||
            ui->radioButton_6->isChecked() ||
            ui->radioButton_7->isChecked()){


        hide(); //hides current window
        Five_to_Seven dialog; //creates dialog box
        dialog.setModal(true); //sets modal mode true
        dialog.setWindowTitle("What would you like to do?"); //sets window title
        dialog.showMaximized(); //sets dialog box in maximized screen
        dialog.exec(); //executes

    }

    if (ui->radioButton_8->isChecked() || ui->radioButton_9->isChecked()){


        hide(); //hides current window
        Eight_to_Nine dialog; //creates dialog box
        dialog.setModal(true); //sets modal mode true
        dialog.setWindowTitle("What would you like to do?"); //sets window title
        dialog.showMaximized(); //sets dialog box in maximized screen
        dialog.exec(); //executes

    }
}
