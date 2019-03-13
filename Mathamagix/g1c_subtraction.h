#ifndef G1C_SUBTRACTION_H
#define G1C_SUBTRACTION_H

#include <QDialog>

namespace Ui {
class g1C_subtraction;
}

class g1C_subtraction : public QDialog
{
    Q_OBJECT

public:
    explicit g1C_subtraction(QWidget *parent = 0);
    ~g1C_subtraction();
    void new_Subtraction();
    void startNewSubQuiz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g1C_subtraction *ui;
    int high= 50;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
};

#endif // G1C_SUBTRACTION_H
