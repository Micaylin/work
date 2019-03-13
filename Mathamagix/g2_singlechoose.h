#ifndef G2_SINGLECHOOSE_H
#define G2_SINGLECHOOSE_H

#include <QDialog>

namespace Ui {
class g2_singlechoose;
}

class g2_singlechoose : public QDialog
{
    Q_OBJECT

public:
    explicit g2_singlechoose(QWidget *parent = 0);
    ~g2_singlechoose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::g2_singlechoose *ui;
};

#endif // G2_SINGLECHOOSE_H
