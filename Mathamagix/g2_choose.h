#ifndef G2_CHOOSE_H
#define G2_CHOOSE_H

#include <QDialog>

namespace Ui {
class g2_choose;
}

class g2_choose : public QDialog
{
    Q_OBJECT

public:
    explicit g2_choose(QWidget *parent = 0);
    ~g2_choose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::g2_choose *ui;
};

#endif // G2_CHOOSE_H
