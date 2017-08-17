/* 
This will be the class for my buttons to select the row to drop the piece in
Tyler Rose
*/

#include "GameBoard.h"
#include "ColButton.h"

void ColButton::colClicked() {
    //QPixmap pixmap(":/Connect4/Resources/Red.PNG");
    //(QObject::sender())->property("Row").Int;
    //QString test = QObject::sender()->property("Row").toInt();
    GameBoard::GetInstance()->colSelected(QObject::sender()->property("Col").toInt());
}

ColButton::ColButton(QWidget *parent) : QPushButton(parent) {
    // We want all of our RowButtons to be transparent
    setFlat(true);
    connect(this, &QPushButton::clicked, this, &ColButton::colClicked);
}

ColButton::~ColButton() {
}