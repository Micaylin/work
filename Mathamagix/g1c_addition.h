#ifndef G1C_ADDITION_H
#define G1C_ADDITION_H

#include <QDialog>

namespace Ui {
class g1C_addition;
}

class g1C_addition : public QDialog
{
    Q_OBJECT

public:
    explicit g1C_addition(QWidget *parent = 0);
    ~g1C_addition();
    void new_Addition();
    void startNewAddQuiz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g1C_addition *ui;
    int high= 50;
    int low= 1;
    int randomValue1;
    int randomValue2;
    int correct;
    int sum;
};

#endif // G1C_ADDITION_H
