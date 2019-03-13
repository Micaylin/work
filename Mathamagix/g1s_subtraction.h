#ifndef G1S_SUBTRACTION_H
#define G1S_SUBTRACTION_H

#include <QDialog>

namespace Ui {
class g1S_subtraction;
}

class g1S_subtraction : public QDialog
{
    Q_OBJECT

public:
    explicit g1S_subtraction(QWidget *parent = 0);
    ~g1S_subtraction();
    void new_Subtraction();
    void startNewSubQuiz();
    int getScore();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g1S_subtraction *ui;
    int high= 50;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
    int score; //score field
};

#endif // G1S_SUBTRACTION_H
