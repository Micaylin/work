#include "g1m_addition.h"
#include "ui_g1m_addition.h"
#include <QMessageBox>
#include "g1s_addition.h"


g1M_addition::g1M_addition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1M_addition)
{
    ui->setupUi(this);


}

g1M_addition::~g1M_addition() //destructor
{
    delete ui;
}


void g1M_addition::on_pushButton_clicked() //player 1's turn
{
    g1S_addition dialog1; //creates dialog1
    dialog1.setModal(true); //sets modal mode true
    dialog1.showMaximized(); //shows maximized form
    dialog1.exec(); //executes
    score_p1= dialog1.getScore(); //gets score of player 1 after execution
}


void g1M_addition::on_pushButton_2_clicked() //player 2's turn
{

    g1S_addition dialog2; //creates dialog2
    dialog2.setModal(true); //sets modal mode true
    dialog2.showMaximized(); //shows maximized form
    dialog2.exec(); //executes
    score_p2= dialog2.getScore(); //gets score of player 2 after execution

}



void g1M_addition::on_pushButton_3_clicked() //find out who winner is
{
    QString scoreStrp1= QString::number(score_p1); //string version of score 1
    QString scoreStrp2= QString::number(score_p2); //string version of score 2
    /* The next few steps displays scores of both players
      as well as who the winner is */

    ui->label_2->setText("Final score of player 1 is: "+scoreStrp1 +
                         " and Final score of player 2 is: " + scoreStrp2);
    if (score_p1<score_p2){
        ui->label_3->setText("Player 2 Wins"); //player 2 is the winner
    }
    else if (score_p1>score_p2){
        ui->label_3->setText("Player 1 wins"); //player 1 is the winner
    }
    else{
        ui->label_3->setText("It's a tie!"); //it is a tie
    }

}
