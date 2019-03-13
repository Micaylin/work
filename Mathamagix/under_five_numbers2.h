#ifndef UNDER_FIVE_NUMBERS2_H
#define UNDER_FIVE_NUMBERS2_H

#include <QDialog>

namespace Ui {
class Under_Five_Numbers2;
}

class Under_Five_Numbers2 : public QDialog
{
    Q_OBJECT

public:
    explicit Under_Five_Numbers2(QWidget *parent = 0);
    ~Under_Five_Numbers2();

private:
    Ui::Under_Five_Numbers2 *ui;
};

#endif // UNDER_FIVE_NUMBERS2_H
