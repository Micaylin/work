#ifndef G1_CHOOSE_H
#define G1_CHOOSE_H
#include "five_to_seven.h"
#include <QDialog>

namespace Ui {
class g1_choose;
}

class g1_choose : public QDialog
{
    Q_OBJECT

public:
    explicit g1_choose(QWidget *parent = 0);
    ~g1_choose();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::g1_choose *ui;




};

#endif // G1_CHOOSE_H
