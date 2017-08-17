#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Connect4.h"

class Connect4 : public QMainWindow
{
    Q_OBJECT

public:
    Connect4(QWidget *parent = Q_NULLPTR);
    vector< vector< PieceLabel* > > GetLabels();

private:
    Ui::Connect4Class ui;
};
