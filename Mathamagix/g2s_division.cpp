#include "g2s_division.h"
#include "ui_g2s_division.h"
#include <QMessageBox>

g2S_division::g2S_division(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2S_division)
{
    ui->setupUi(this);
    startNewDivQuiz(); //starts new quiz
    sum=1; //initializes sum to 1
    score= 0; //initializes score to 0
}

g2S_division::~g2S_division() //destructor
{
    delete ui;
}

void g2S_division::startNewDivQuiz(){
    int r2= qrand() % ((high+1)-low) + low; //random number generator
    int num= qrand() % ((high+1)-low) + low; //random number generator
    int r1= num*r2;
    if (r1>=r2){
        randomValue1= r1;
        randomValue2= r2;
    }
    else if (r1<r2){
        randomValue1= r2;
        randomValue2= r1;
    }
    new_Division();
    sum++;

    }


void g2S_division::new_Division(){
    QString r1 = QString::number(randomValue1);
    QString divide= " / ";
    QString r2= QString::number(randomValue2);
    QString equals= " = ";
    QString qn= " ? ";
    QString str= r1+divide+r2+equals+qn;
    ui->label->setText(str);
    correct= randomValue1 / randomValue2; //finds correct answer



}



void g2S_division::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //finds string of correct answer
    QString str= ui->lineEdit->text();
    if (str==correctStr){ //if answer is correct
        QMessageBox::information(this, "Correct", "You are correct!");
        ui->lineEdit->clear(); //clears input
        score++; //increases score
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score

        if (sum<10){ //if not enough questions were asked
            startNewDivQuiz(); //ask  more
        }
        else{
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr); //displays code
            ui->lineEdit->setDisabled(true); //disables input
            ui->pushButton->setDisabled(true); //disables push button
        }

    }
    else{ //incorrect answer
        QMessageBox::warning(this, "Incorrect", "You are incorrect");
        ui->lineEdit->clear();
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr);
        if (sum<10){ //if not enough questions were asked
            startNewDivQuiz(); //start quiz


        }
        else{
            QString scoreStr= QString::number(score);
            ui->lineEdit->setDisabled(true); //disables input
            ui->pushButton->setDisabled(true); //disables push button
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr); //displays score
        }
    }
}

int g2S_division:: getScore(){ //returns score
    return score;
}
