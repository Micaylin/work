#ifndef G2S_MULTIPLICATION_H
#define G2S_MULTIPLICATION_H

#include <QDialog>

namespace Ui {
class g2S_multiplication;
}

class g2S_multiplication : public QDialog
{
    Q_OBJECT

public:
    explicit g2S_multiplication(QWidget *parent = 0);
    ~g2S_multiplication();
    void new_Multiplication();
    void startNewMultQuiz();
    int getScore();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g2S_multiplication *ui;
    int high= 12;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
    int score;
};

#endif // G2S_MULTIPLICATION_H
