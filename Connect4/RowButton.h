/*
This will be the class for my buttons to select the row to drop the piece in
Tyler Rose
*/
#pragma once

#include <QtWidgets\qpushbutton.h>

using namespace std;
using namespace Qt;

class RowButton : public QPushButton {
    //Q_OBJECT

public:
    RowButton(QWidget *parent = Q_NULLPTR);

    ~RowButton();
private:
};