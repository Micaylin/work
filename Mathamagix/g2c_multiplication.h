#ifndef G2C_MULTIPLICATION_H
#define G2C_MULTIPLICATION_H

#include <QDialog>

namespace Ui {
class g2C_multiplication;
}

class g2C_multiplication : public QDialog
{
    Q_OBJECT

public:
    explicit g2C_multiplication(QWidget *parent = 0);
    ~g2C_multiplication();
    void new_Multiplication();
    void startNewMultQuiz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g2C_multiplication *ui;
    int high= 12;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
};

#endif // G2C_MULTIPLICATION_H
