#include "g2s_multiplication.h"
#include "ui_g2s_multiplication.h"
#include <QMessageBox>

g2S_multiplication::g2S_multiplication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2S_multiplication)
{
    ui->setupUi(this);
    startNewMultQuiz();
    sum=1; //initalizes sum to 1
    score=0; //initializes score to 0
}

g2S_multiplication::~g2S_multiplication() //destructor
{
    delete ui;
}

void g2S_multiplication::startNewMultQuiz(){
    randomValue1= qrand() % ((high+1)-low) + low; //random number generator
    randomValue2= qrand() % ((high+1)-low) + low; //random number generator

    new_Multiplication(); //calls function
    sum++; //increases sum

    }


void g2S_multiplication::new_Multiplication(){
    QString r1 = QString::number(randomValue1);
    QString multiply= " X ";
    QString r2= QString::number(randomValue2);
    QString equals= " = ";
    QString qn= " ? ";
    QString str= r1+multiply+r2+equals+qn;
    ui->label->setText(str); //sets question
    correct= randomValue1 * randomValue2; //calculates answer



}


void g2S_multiplication::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //string version of correct answer
    QString str= ui->lineEdit->text();
    if (str==correctStr){ //if the answer is correct
        QMessageBox::information(this, "Correct", "You are correct!");
        score++; //increments score
        ui->lineEdit->clear(); //clears input
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score

        if (sum<10){ //if not enough questions asked
            startNewMultQuiz(); //ask more
        }
        else{ //otherwise, game over, display final score
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr);
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
        }

    }
    else{
        QMessageBox::warning(this, "Incorrect", "You are incorrect");
        ui->lineEdit->clear();
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr);
        if (sum<10){
            startNewMultQuiz();

        }
        else{
            QString scoreStr= QString::number(score);
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr);
        }
    }
}
int g2S_multiplication:: getScore(){
    return score;
}
