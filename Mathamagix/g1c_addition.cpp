#include "g1c_addition.h"
#include "ui_g1c_addition.h"
#include <QMessageBox>

g1C_addition::g1C_addition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g1C_addition)
{
    ui->setupUi(this); //sets up window
    startNewAddQuiz(); //calls function
    sum=1; //initializes field sum to 1
}

g1C_addition::~g1C_addition()
{
    delete ui;
}

void g1C_addition::startNewAddQuiz(){
    randomValue1= qrand() % ((high+1)-low) + low; //random number generator
    randomValue2= qrand() % ((high+1)-low) + low; //random number generator

    new_Addition(); //calls function
    sum++; //increases sum

    }


void g1C_addition::new_Addition(){
    QString r1 = QString::number(randomValue1); //assigns string to int
    QString plus= " + "; //creates string with plus sign
    QString r2= QString::number(randomValue2); //assigns string to int
    QString equals= " = "; //creates string with equals sign
    QString qn= " ? "; //creates string with question mark
    QString str= r1+plus+r2+equals+qn; //concatenation
    ui->label->setText(str); //sets text on label to str to give question
    correct= randomValue1 + randomValue2; //works out correct answer



}


void g1C_addition::on_pushButton_clicked()
{

    QString correctStr= QString::number(correct); //string version of int
    QString str= ui->lineEdit->text(); //finds out what user inputted
    if (str==correctStr){ //if answer is correct
        QMessageBox::information(this, "Correct", "You are correct!"); //display that the answer is correct
        ui->lineEdit->clear(); //clears input
        if (sum<10){ //if the total number of questions is less than 10
            startNewAddQuiz(); //ask more questions
        }
        else{
            QMessageBox::information(this, "Congrats!", "You finished the practice round!");
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
        }

    }
    else{
        QMessageBox::warning(this, "Incorrect", "You are incorrect. Try again"); //the answer is incorrect
    }

}
