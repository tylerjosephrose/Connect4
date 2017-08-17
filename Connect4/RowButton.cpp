/* 
This will be the class for my buttons to select the row to drop the piece in
Tyler Rose
*/

#include "RowButton.h"

RowButton::RowButton(QWidget *parent) : QPushButton(parent) {
    // We want all of our RowButtons to be transparent
    setFlat(true);
}

RowButton::~RowButton() {
}