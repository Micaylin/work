#ifndef G1S_ADDITION_H
#define G1S_ADDITION_H

#include <QDialog>

namespace Ui {
class g1S_addition;
}

class g1S_addition : public QDialog
{
    Q_OBJECT

public:
    explicit g1S_addition(QWidget *parent = 0);
    ~g1S_addition();
    void new_Addition();
    void startNewAddQuiz();
    int getScore();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g1S_addition *ui;
    int high= 50;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
    int score;
};

#endif // G1S_ADDITION_H
