#include "g2c_division.h"
#include "ui_g2c_division.h"
#include <QMessageBox>

g2C_division::g2C_division(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::g2C_division)
{
    ui->setupUi(this); //sets up
    startNewDivQuiz(); //starts new quiz
    sum=1; //initalizes sum to 0
}

g2C_division::~g2C_division()
{
    delete ui;
}

void g2C_division::startNewDivQuiz(){
    int r2= qrand() % ((high+1)-low) + low; //random number generator
    int num= qrand() % ((high+1)-low) + low; //random number generator
    //asks answers children are expected to learn
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


void g2C_division::new_Division(){
    QString r1 = QString::number(randomValue1);
    QString divide= " / ";
    QString r2= QString::number(randomValue2);
    QString equals= " = ";
    QString qn= " ? ";
    QString str= r1+divide+r2+equals+qn;
    ui->label->setText(str);
    correct= randomValue1 / randomValue2; //finds correct answer



}

void g2C_division::on_pushButton_clicked()
{
    QString correctStr= QString::number(correct); //finds string of correct answer
    QString str= ui->lineEdit->text(); //finds users answer
    if (str==correctStr){ //if answer is correct
        QMessageBox::information(this, "Correct", "You are correct!");
        ui->lineEdit->clear(); //clears input
        if (sum<10){ //if not enough questions were asked
            startNewDivQuiz(); //ask more

        }
        else{
            QMessageBox::information(this, "Congrats!", "You finished the practice round!");
            ui->lineEdit->setDisabled(true);
            ui->pushButton->setDisabled(true);
        }

    }
    else{
        QMessageBox::warning(this, "Incorrect", "You are incorrect. Try again");
    }
}
