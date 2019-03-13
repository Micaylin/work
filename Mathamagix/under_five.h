#ifndef UNDER_FIVE_H
#define UNDER_FIVE_H

#include <QDialog>

namespace Ui {
class Under_Five;
}

class Under_Five : public QDialog
{
    Q_OBJECT

public:
    explicit Under_Five(QWidget *parent = 0);
    ~Under_Five();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Under_Five *ui;
};

#endif // UNDER_FIVE_H
