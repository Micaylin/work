#ifndef G1_SINGLECHOOSE_H
#define G1_SINGLECHOOSE_H

#include <QDialog>

namespace Ui {
class g1_singlechoose;
}

class g1_singlechoose : public QDialog
{
    Q_OBJECT

public:
    explicit g1_singlechoose(QWidget *parent = 0);
    ~g1_singlechoose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::g1_singlechoose *ui;
};

#endif // G1_SINGLECHOOSE_H
