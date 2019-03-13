#ifndef G2M_DIVISION_H
#define G2M_DIVISION_H

#include <QDialog>

namespace Ui {
class g2M_division;
}

class g2M_division : public QDialog
{
    Q_OBJECT

public:
    explicit g2M_division(QWidget *parent = 0);
    ~g2M_division();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::g2M_division *ui;
    int score_p1;
    int score_p2;
};

#endif // G2M_DIVISION_H
