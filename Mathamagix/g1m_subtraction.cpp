#include "g1m_subtraction.h"
#include "ui_g1m_subtraction.h"
#include "g1s_subtraction.h"

g1M_subtraction::g1M_subtraction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1M_subtraction)
{
    ui->setupUi(this);
}

g1M_subtraction::~g1M_subtraction() //destructor
{
    delete ui;
}

void g1M_subtraction::on_pushButton_clicked()
{
    g1S_subtraction dialog1; //creates dialog1
    dialog1.setModal(true); //sets modal mode true
    dialog1.showMaximized(); //shows maximized form
    dialog1.exec(); //executes
    score_p1= dialog1.getScore(); //gets score of player 1

}

void g1M_subtraction::on_pushButton_2_clicked()
{
    g1S_subtraction dialog2; //creates dialog2
    dialog2.setModal(true); //sets modal mode true
    dialog2.showMaximized(); //shows maximized form
    dialog2.exec(); //executes
    score_p2= dialog2.getScore(); //gets score of player 2

}

void g1M_subtraction::on_pushButton_3_clicked()
{
    QString scoreStrp1= QString::number(score_p1); //string version of p1 score
    QString scoreStrp2= QString::number(score_p2); //string version of p2 score
    /* The next few steps displays scores of both players
      as well as who the winner is */

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
