#include "g2c_multiplication.h"
#include "ui_g2c_multiplication.h"
#include <QMessageBox>

g2C_multiplication::g2C_multiplication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2C_multiplication)
{
    ui->setupUi(this);
    startNewMultQuiz(); //starts new quiz
    sum=1; //initializes sum to 1
}

g2C_multiplication::~g2C_multiplication() //destructor
{
    delete ui;
}

void g2C_multiplication::startNewMultQuiz(){
    randomValue1= qrand() % ((high+1)-low) + low; //random generator
    randomValue2= qrand() % ((high+1)-low) + low; //random generator

    new_Multiplication(); //new quiz
    sum++;

    }


void g2C_multiplication::new_Multiplication(){
    QString r1 = QString::number(randomValue1);
    QString multiply= " X ";
    QString r2= QString::number(randomValue2);
    QString equals= " = ";
    QString qn= " ? ";
    QString str= r1+multiply+r2+equals+qn;
    ui->label->setText(str);
    correct= randomValue1 * randomValue2; //find correct answer



}

void g2C_multiplication::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //find string of correct answer
    QString str= ui->lineEdit->text(); //finds user's input
    if (str==correctStr){ //if answer is correct
        QMessageBox::information(this, "Correct", "You are correct!");
        ui->lineEdit->clear();
        if (sum<10){ //if not enough questions were asked
            startNewMultQuiz(); //ask more

        }
        else{
            QMessageBox::information(this, "Congrats!", "You finished the practice round!");
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
        }

    }
    else{ //answer is wrong. try again
        QMessageBox::warning(this, "Incorrect", "You are incorrect. Try again");
    }
}


