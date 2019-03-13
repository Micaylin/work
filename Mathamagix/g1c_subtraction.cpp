#include "g1c_subtraction.h"
#include "ui_g1c_subtraction.h"
#include <QMessageBox>

g1C_subtraction::g1C_subtraction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1C_subtraction)
{
    ui->setupUi(this);
    startNewSubQuiz(); //starts new subtraction quiz
    sum= 1; //initializes sum to 1
}

g1C_subtraction::~g1C_subtraction() //deconstructor
{
    delete ui;
}

void g1C_subtraction::startNewSubQuiz(){
    int r1= qrand() % ((high+1)-low) + low; //random number generator
    int r2= qrand() % ((high+1)-low) + low; //random number generator
    /*below, I make the bigger number the first number,
    reason behind this: small children probably don't know negative numbers
    exist */

    if (r1>=r2){
        randomValue1= r1;
        randomValue2= r2;
    }
    else if (r1<r2){
        randomValue1= r2;
        randomValue2= r1;
    }


    new_Subtraction(); //calls function
    sum++; //increases sum

}

void g1C_subtraction::new_Subtraction(){
    QString r1 = QString::number(randomValue1); //assigns string to int
    QString minus= " - "; //gives string of minus sign
    QString r2= QString::number(randomValue2); //assigns string to int
    QString equals= " = "; //gives string of equals sign
    QString qn= " ? "; //gives string of question mark
    QString str= r1+minus+r2+equals+qn; //concatenation
    ui->label->setText(str); //displays question to user
    correct= randomValue1 - randomValue2; //works out correct answer



}



void g1C_subtraction::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //assigns string to int
    QString str= ui->lineEdit->text(); //finds out what user inputted
    if (str==correctStr){ //if the answer is correct
        QMessageBox::information(this, "Correct", "You are correct!"); //display that the answer is correct
        ui->lineEdit->clear(); //clears input for user
        if (sum<10){ //if the total questions asked is less than 10
            startNewSubQuiz(); //ask more questions

        }
        else{
            QMessageBox::information(this, "Congrats!", "You finished the practice round!");
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
        }

    }
    else{
        QMessageBox::warning(this, "Incorrect", "You are incorrect. Try again"); //display answer is incorrect
    }
}
