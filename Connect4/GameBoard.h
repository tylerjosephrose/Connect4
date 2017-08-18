/*
This will hold the board and all pertinent methods
Tyler Rose
*/
#pragma once

#include <Connect4.h>
#include <PieceLabel.h>
#include <QtWidgets\qlabel.h>

using namespace std;
using namespace Qt;

class GameBoard {

public:
    void colSelected(int col);
    bool didWin(int col, int row);
	void restartGame();

    PieceLabel::Player playerUp = PieceLabel::Player_1;

    ~GameBoard();
    static GameBoard* GetInstance(vector<vector<PieceLabel*>> labels = { {} });

private:
    static GameBoard* m_instance;
    GameBoard(vector<vector<PieceLabel*>> labels);
    vector< vector<PieceLabel*> > m_board;
	int totalPieces = 0;
};