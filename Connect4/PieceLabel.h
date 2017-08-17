/*
This will be the class for the labels that go on the board
Tyler Rose
*/
#pragma once

#include <QtWidgets\qlabel.h>

using namespace std;
using namespace Qt;

class PieceLabel : public QLabel {

public:
    enum Player {
        No_Player = 0,
        Player_1 = 1,
        Player_2 = 2
    };

    Player getCurrentOwner() { return m_currentOwner; };
    void setCurrentOwner(Player player) { m_currentOwner = player; };

    PieceLabel(QWidget *parent = Q_NULLPTR);

    ~PieceLabel();
private:
    Player m_currentOwner;
};