#ifndef OPENINGSCREEN_H
#define OPENINGSCREEN_H

#include <QMainWindow>

namespace Ui {
class OpeningScreen;
}

class OpeningScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit OpeningScreen(QWidget *parent = 0);
    ~OpeningScreen();




private slots:
    void on_pushButton_clicked();

private:
    Ui::OpeningScreen *ui;

};

#endif // OPENINGSCREEN_H
