#include "Connect4.h"
#include <GameBoard.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connect4 w;

    //GameBoard(w.GetLabels());
    GameBoard::GetInstance(w.GetLabels());

    w.show();
    return a.exec();
}

