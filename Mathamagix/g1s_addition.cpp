#include "g1s_addition.h"
#include "ui_g1s_addition.h"
#include <QMessageBox>

g1S_addition::g1S_addition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1S_addition)
{
    ui->setupUi(this); //sets up
    startNewAddQuiz(); //starts new quiz
    sum= 1; //initializes sum to 1
    score= 0; //initializes score to 0
}

g1S_addition::~g1S_addition() //deconstructor
{
    delete ui;
}


void g1S_addition::startNewAddQuiz(){
    randomValue1= qrand() % ((high+1)-low) + low; //random number generator
    randomValue2= qrand() % ((high+1)-low) + low; //random number generator

    new_Addition(); //calls function
    sum++; //increases sum

    }


void g1S_addition::new_Addition(){
    QString r1 = QString::number(randomValue1); //assigns string to int
    QString plus= " + "; //finds string of plus sign
    QString r2= QString::number(randomValue2); //assigns string to int
    QString equals= " = "; //finds string of equals sign
    QString qn= " ? "; //finds string of question mark
    QString str= r1+plus+r2+equals+qn; //concatenation
    ui->label->setText(str); //gives question to user
    correct= randomValue1 + randomValue2; //calculates answer



}


void g1S_addition::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //string version of right answer
    QString str= ui->lineEdit->text(); //reads user's input
    if (str==correctStr){ //if string is correct
        QMessageBox::information(this, "Correct", "You are correct!"); //display correct
        ui->lineEdit->clear(); //clears input
        score++; //increases score
        QString scoreStr= QString::number(score); //puts score in string
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score

        if (sum<10){ //if not enough questions were asked
            startNewAddQuiz(); //ask more


        }
        else{
            //we are done with questions. display score.
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr);
            ui->lineEdit->setDisabled(true); //disables input from user
            ui->pushButton->setDisabled(true); //disables button
        }

    }
    else{
        QMessageBox::warning(this, "Incorrect", "You are incorrect"); //answer is wrong
        ui->lineEdit->clear();
        QString scoreStr= QString::number(score);
        QString fullScoreStr= "Score= " + scoreStr;
        ui->label_3->setText(fullScoreStr); //displays score
        if (sum<10){ //if not enough questions were asked
            startNewAddQuiz(); //ask more questions

        }
        else{ //enough questions were asked, quiz is over
            ui->lineEdit->setDisabled(true); //disables input from user
            ui->pushButton->setDisabled(true); //disables button
            QString scoreStr= QString::number(score);
            QString fullScoreStr= "Final Score= " + scoreStr + " out of 10";
            ui->label_3->setText(fullScoreStr); //display score
        }
    }
}

int g1S_addition:: getScore(){ //return score, used for multiplayer games
    return score;
}
