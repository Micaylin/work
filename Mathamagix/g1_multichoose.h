#ifndef G1_MULTICHOOSE_H
#define G1_MULTICHOOSE_H

#include <QDialog>

namespace Ui {
class g1_multichoose;
}

class g1_multichoose : public QDialog
{
    Q_OBJECT

public:
    explicit g1_multichoose(QWidget *parent = 0);
    ~g1_multichoose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::g1_multichoose *ui;
};

#endif // G1_MULTICHOOSE_H
