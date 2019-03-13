#include "g2m_multiplication.h"
#include "ui_g2m_multiplication.h"
#include "g2s_multiplication.h"

g2M_multiplication::g2M_multiplication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2M_multiplication)
{
    ui->setupUi(this);
}

g2M_multiplication::~g2M_multiplication()
{
    delete ui; //destructor
}

void g2M_multiplication::on_pushButton_clicked() //Player 1 is ready
{
    g2S_multiplication dialog1; //creates dialog
    dialog1.setModal(true); //sets modal mode true
    dialog1.showMaximized(); //shows maximized form
    dialog1.exec(); //executes
    score_p1= dialog1.getScore(); //gets score of player 1

}

void g2M_multiplication::on_pushButton_2_clicked() //Player 2 is ready
{
    g2S_multiplication dialog2; //creates dialog2
    dialog2.setModal(true); //sets modal mode true
    dialog2.showMaximized(); //shows maximized form
    dialog2.exec(); //executes
    score_p2= dialog2.getScore(); //gets score of player 2

}

void g2M_multiplication::on_pushButton_3_clicked() //Ready to announce winner
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
