/*
This will be the class for my buttons to select the column to drop the piece in
Tyler Rose
*/
#pragma once

#include <QtWidgets\qpushbutton.h>

using namespace std;
using namespace Qt;

class ColButton : public QPushButton {

public:
    void colClicked();
    int getCol() { return col; };

    ColButton(QWidget *parent = Q_NULLPTR);

    ~ColButton();
private:
    int col;
};