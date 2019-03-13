#include "eight_to_nine.h"
#include "ui_eight_to_nine.h"
#include "g2_choose.h"
#include "g2_singlechoose.h"
#include "g2_multichoose.h"

Eight_to_Nine::Eight_to_Nine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Eight_to_Nine)
{
    ui->setupUi(this);
}

Eight_to_Nine::~Eight_to_Nine() //destructor
{
    delete ui;
}

void Eight_to_Nine::on_pushButton_clicked() //Practice mode
{
    hide(); //hides this window
    g2_choose dialog; //creates choose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Practice mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes

}



void Eight_to_Nine::on_pushButton_2_clicked() //Single player quiz mode

{

    hide(); //hides this window
    g2_singlechoose dialog; //creates single choose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Single user mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes

}



void Eight_to_Nine::on_pushButton_3_clicked() //Multiplayer quiz mode
{
    hide(); //hides this window
    g2_multichoose dialog; //creates multi choose dialog
    dialog.setModal(true); //sets modal mode to true
    dialog.setWindowTitle("Multiplayer mode");
    dialog.showMaximized(); //shows dialog in maximized form
    dialog.exec(); //executes
}
