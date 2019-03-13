#include "openingscreen.h"
#include <QApplication>

//Everything starts at main. Main sets up the opening screen for the game

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpeningScreen w;
    w.setWindowState(Qt::WindowMaximized); //Opening screen is now in maximized form
    w.setWindowTitle("Welome to Mathamagix!"); //Window title is now customized
    w.show(); //Window is shown on screen to user

    return a.exec(); //executes
}
