#include "Connect4.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connect4 w;
    w.show();
    return a.exec();
}

