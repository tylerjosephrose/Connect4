#include "Connect4.h"
#include "RowButton.h"

Connect4::Connect4(QWidget *parent)
    : QMainWindow(parent)
{
    RowButton* test;
    test = new RowButton(parent);
    ui.setupUi(this);
}
