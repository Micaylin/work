#include "g1s_subtraction.h"
#include "ui_g1s_subtraction.h"
#include <QMessageBox>

g1S_subtraction::g1S_subtraction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1S_subtraction)
{
    ui->setupUi(this);
    startNewSubQuiz(); //starts new subtraction quiz
    sum= 1; //initializes sum to 1
    score= 0; //initializes score to 0
}

g1S_subtraction::~g1S_subtraction() //destructor
{
    delete ui;
}

void g1S_subtraction::startNewSubQuiz(){
    int r1= qrand() % ((high+1)-low) + low; //random number generator
    int r2= qrand() % ((high+1)-low) + low; //random number generator
    /*no negative numbers for small children */
    if (r1>=r2){
        randomValue1= r1;
        randomValue2= r2;
    }
    else if (r1<r2){
        randomValue1= r2;
        randomValue2= r1;
    }


    new_Subtraction();
    sum++;

}

void g1S_subtraction::new_Subtraction(){
    QString r1 = QString::number(randomValue1); //string value of int
    QString minus= " - ";
    QString r2= QString::number(randomValue2); //string value of int
    QString equals= " = ";
    QString qn= " ? ";
    QString str= r1+minus+r2+equals+qn;
    ui->label->setText(str);
    correct= randomValue1 - randomValue2; //calculates correct value



}



void g1S_subtraction::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //string of correct value
    QString str= ui->lineEdit->text(); //finds out what user entered
    if (str==correctStr){ //if correct answer
        QMessageBox::information(this, "Correct", "You are correct!");
        ui->lineEdit->clear(); //clears input for usere
        score++; //increases score
        QString scoreStr= QString::number(score); //string of score value
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score

        if (sum<10){ //if not enough questions were asked
            startNewSubQuiz(); //ask more questions

        }
        else{ //enough questions were asked. quiz is over
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr); //display score
            ui->lineEdit->setDisabled(true); //disables input
            ui->pushButton->setDisabled(true); //disables button
        }

    }
    else{ //incorrect answer
        QMessageBox::warning(this, "Incorrect", "You are incorrect");
        ui->lineEdit->clear();
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score
        if (sum<10){ //if not enough questions were asked
            startNewSubQuiz(); //ask more
        }
        else{
            ui->lineEdit->setDisabled(true); //disables input
            ui->pushButton->setDisabled(true); //disables button
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr); //displays score
        }
    }
}

int g1S_subtraction::getScore(){
    return score;
}
