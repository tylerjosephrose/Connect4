/*
This will hold the board and all pertinent methods
Tyler Rose
*/

#include <GameBoard.h>

GameBoard* GameBoard::m_instance = 0;

void GameBoard::colSelected(int col) {
    //m_board[row][0]->setPixmap(QPixmap(":/Connect4/Resources/Red.PNG"));
    vector<PieceLabel*> column = m_board[col];
    for (int i = 5; i >= 0; i--) {
        if (column[i]->getCurrentOwner() == PieceLabel::No_Player) {
            if (playerUp == PieceLabel::Player_1) {
                column[i]->setPixmap(QPixmap(":/Connect4/Resources/Red.PNG"));
                playerUp = PieceLabel::Player_2;
            }
            else {
                column[i]->setPixmap(QPixmap(":/Connect4/Resources/Black.PNG"));
                playerUp = PieceLabel::Player_1;
            }
            column[i]->setCurrentOwner(PieceLabel::Player_1);
            break;
        }
    }
}

GameBoard::GameBoard(vector<vector<PieceLabel*>> labels) {
    m_board = labels;
}

GameBoard::~GameBoard() {
}

GameBoard* GameBoard::GetInstance(vector<vector<PieceLabel*>> labels) {
    if (m_instance == NULL)
        m_instance = new GameBoard(labels);
    return m_instance;
}