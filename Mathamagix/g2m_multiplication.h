#ifndef G2M_MULTIPLICATION_H
#define G2M_MULTIPLICATION_H

#include <QDialog>

namespace Ui {
class g2M_multiplication;
}

class g2M_multiplication : public QDialog
{
    Q_OBJECT

public:
    explicit g2M_multiplication(QWidget *parent = 0);
    ~g2M_multiplication();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::g2M_multiplication *ui;
    int score_p1;
    int score_p2;
};

#endif // G2M_MULTIPLICATION_H
