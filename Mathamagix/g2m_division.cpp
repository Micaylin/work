#include "g2m_division.h"
#include "ui_g2m_division.h"
#include "g2s_division.h"

g2M_division::g2M_division(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2M_division)
{
    ui->setupUi(this); //sets up
}

g2M_division::~g2M_division() //destructor
{
    delete ui;
}

void g2M_division::on_pushButton_clicked() //Player 1 is ready
{
    g2S_division dialog1; //creates dialog
    dialog1.setModal(true); //sets modal mode true
    dialog1.showMaximized(); //show maximized form
    dialog1.exec(); //executes
    score_p1= dialog1.getScore(); //gets score of player one

}

void g2M_division::on_pushButton_2_clicked() //Player 2 is ready
{
    g2S_division dialog2; //creates dialog2
    dialog2.setModal(true); //sets modal mode true
    dialog2.showMaximized(); //show maximized form
    dialog2.exec(); //executes
    score_p2= dialog2.getScore(); //gets player 2's score
}

void g2M_division::on_pushButton_3_clicked() //Ready to announce winner
{
    QString scoreStrp1= QString::number(score_p1);
    QString scoreStrp2= QString::number(score_p2);
    ui->label_2->setText("Final score of player 1 is: "+scoreStrp1 +
                         " and Final score of player 2 is: " + scoreStrp2);
    if (score_p1<score_p2){
        ui->label_3->setText("Player 2 Wins");
    }
    else if (score_p1>score_p2){
        ui->label_3->setText("Player 1 wins");
    }
    else{
        ui->label_3->setText("It's a tie!");
    }

}
