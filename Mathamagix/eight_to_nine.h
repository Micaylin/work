#ifndef EIGHT_TO_NINE_H
#define EIGHT_TO_NINE_H

#include <QDialog>

namespace Ui {
class Eight_to_Nine;
}

class Eight_to_Nine : public QDialog
{
    Q_OBJECT

public:
    explicit Eight_to_Nine(QWidget *parent = 0);
    ~Eight_to_Nine();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Eight_to_Nine *ui;
};

#endif // EIGHT_TO_NINE_H
