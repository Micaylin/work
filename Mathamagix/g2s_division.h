#ifndef G2S_DIVISION_H
#define G2S_DIVISION_H

#include <QDialog>

namespace Ui {
class g2S_division;
}

class g2S_division : public QDialog
{
    Q_OBJECT

public:
    explicit g2S_division(QWidget *parent = 0);
    ~g2S_division();
    void new_Division();
    void startNewDivQuiz();
    int getScore();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g2S_division *ui;
    int high= 13;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
    int score;
};

#endif // G2S_DIVISION_H
