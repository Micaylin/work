#include "under_five.h"
#include "ui_under_five.h"
#include "under_five_numbers1.h"
#include "under_five_numbers2.h"
#include "under_five_shapes.h"
#include "under_five_numbers.h"
#include <QPixmap>

Under_Five::Under_Five(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Under_Five)
{
    ui->setupUi(this);
    QPixmap pic(":/img/pic6.jpg");
    ui->label_2->setPixmap(pic.scaled(1300,1000, Qt::KeepAspectRatio));
}

Under_Five::~Under_Five() //destructor
{
    delete ui;
}

void Under_Five::on_pushButton_clicked() //learn numbers 1-20
{
    Under_Five_Numbers1 dialog; //creates dialog box
    dialog.setModal(true);  //sets modal mode true
    dialog.showMaximized();
    dialog.setWindowTitle("Numbers One to Twenty"); //sets window title
    dialog.exec(); //executes
}

void Under_Five::on_pushButton_2_clicked() //learn numbers 1-100
{
    Under_Five_Numbers2 dialog; //creates dialog box
    dialog.setModal(true);  //sets modal mode true
    dialog.showMaximized();
    dialog.setWindowTitle("Numbers One to One Hundred"); //sets window title
    dialog.exec(); //executes
}

void Under_Five::on_pushButton_3_clicked() //learn shapes
{
    Under_Five_Shapes dialog; //creates dialog box
    dialog.setModal(true);  //sets modal mode true
    dialog.showMaximized();
    dialog.setWindowTitle("Shapes"); //sets window title
    dialog.exec(); //executes
}

void Under_Five::on_pushButton_4_clicked() //learn numbers 1-10
{
    Under_Five_Numbers dialog; //creates dialog box
    dialog.setModal(true); //sets  modal mode true
    dialog.showMaximized();
    dialog.setWindowTitle("Numbers One to Ten"); //sets window title
    dialog.exec(); //executes
}
