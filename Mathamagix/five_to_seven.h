#ifndef FIVE_TO_SEVEN_H
#define FIVE_TO_SEVEN_H

#include <QDialog>

namespace Ui {
class Five_to_Seven;
}

class Five_to_Seven : public QDialog
{
    Q_OBJECT

public:
    explicit Five_to_Seven(QWidget *parent = 0);
    ~Five_to_Seven();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Five_to_Seven *ui;

};

#endif // FIVE_TO_SEVEN_H
