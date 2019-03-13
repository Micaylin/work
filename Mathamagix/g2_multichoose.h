#ifndef G2_MULTICHOOSE_H
#define G2_MULTICHOOSE_H

#include <QDialog>

namespace Ui {
class g2_multichoose;
}

class g2_multichoose : public QDialog
{
    Q_OBJECT

public:
    explicit g2_multichoose(QWidget *parent = 0);
    ~g2_multichoose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::g2_multichoose *ui;
};

#endif // G2_MULTICHOOSE_H
