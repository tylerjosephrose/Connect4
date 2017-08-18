/*
This will be the class for the labels that go on the board
Tyler Rose
*/

#include <PieceLabel.h>

PieceLabel::PieceLabel(QWidget *parent) : QLabel(parent) {
    m_currentOwner = No_Player;
}

PieceLabel::~PieceLabel() {
}