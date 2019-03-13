#ifndef UNDER_FIVE_SHAPES_H
#define UNDER_FIVE_SHAPES_H

#include <QDialog>

namespace Ui {
class Under_Five_Shapes;
}

class Under_Five_Shapes : public QDialog
{
    Q_OBJECT

public:
    explicit Under_Five_Shapes(QWidget *parent = 0);
    ~Under_Five_Shapes();

private:
    Ui::Under_Five_Shapes *ui;
};

#endif // UNDER_FIVE_SHAPES_H
