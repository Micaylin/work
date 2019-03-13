#ifndef UNDER_FIVE_NUMBERS_H
#define UNDER_FIVE_NUMBERS_H

#include <QDialog>

namespace Ui {
class Under_Five_Numbers;
}

class Under_Five_Numbers : public QDialog
{
    Q_OBJECT

public:
    explicit Under_Five_Numbers(QWidget *parent = 0);
    ~Under_Five_Numbers();

private:
    Ui::Under_Five_Numbers *ui;
};

#endif // UNDER_FIVE_NUMBERS_H
