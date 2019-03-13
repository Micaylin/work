#ifndef G1M_ADDITION_H
#define G1M_ADDITION_H

#include <QDialog>

namespace Ui {
class g1M_addition;
}

class g1M_addition : public QDialog
{
    Q_OBJECT

public:
    explicit g1M_addition(QWidget *parent = 0);
    ~g1M_addition();



private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::g1M_addition *ui;
    int score_p1;
    int score_p2;
};

#endif // G1M_ADDITION_H
