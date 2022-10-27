#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include "Data.h"
#include "Passenger.cpp"

int main(int argc, char *argv[])
{
    Data d;
    d.readFile("liste_des_passagers.txt");

    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}
