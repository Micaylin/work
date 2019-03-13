#ifndef UNDER_FIVE_NUMBERS1_H
#define UNDER_FIVE_NUMBERS1_H

#include <QDialog>

namespace Ui {
class Under_Five_Numbers1;
}

class Under_Five_Numbers1 : public QDialog
{
    Q_OBJECT

public:
    explicit Under_Five_Numbers1(QWidget *parent = 0);
    ~Under_Five_Numbers1();

private:
    Ui::Under_Five_Numbers1 *ui;
};

#endif // UNDER_FIVE_NUMBERS1_H
