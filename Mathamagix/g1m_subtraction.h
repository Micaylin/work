#ifndef G1M_SUBTRACTION_H
#define G1M_SUBTRACTION_H

#include <QDialog>

namespace Ui {
class g1M_subtraction;
}

class g1M_subtraction : public QDialog
{
    Q_OBJECT

public:
    explicit g1M_subtraction(QWidget *parent = 0);
    ~g1M_subtraction();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::g1M_subtraction *ui;
    int score_p1;
    int score_p2;
};

#endif // G1M_SUBTRACTION_H
