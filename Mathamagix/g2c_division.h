#ifndef G2C_DIVISION_H
#define G2C_DIVISION_H

#include <QDialog>

namespace Ui {
class g2C_division;
}

class g2C_division : public QDialog
{
    Q_OBJECT

public:
    explicit g2C_division(QWidget *parent = 0);
    ~g2C_division();
    void new_Division();
    void startNewDivQuiz();


private slots:


    void on_pushButton_clicked();

private:
    Ui::g2C_division *ui;
    int high= 13;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;

};

#endif // G2C_DIVISION_H
