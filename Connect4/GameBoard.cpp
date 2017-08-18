/*
This will hold the board and all pertinent methods
Tyler Rose
*/

#include <GameBoard.h>
#include <GameOver.h>

GameBoard* GameBoard::m_instance = 0;

void GameBoard::colSelected(int col) {
    vector<PieceLabel*> column = m_board[col];
    if (column[0]->getCurrentOwner() != PieceLabel::No_Player) {
        return;
    }
    int row;
    totalPieces++;
    for (int i = 5; i >= 0; i--) {
        if (column[i]->getCurrentOwner() == PieceLabel::No_Player) {
            if (playerUp == PieceLabel::Player_1) {
                column[i]->setPixmap(QPixmap(":/Connect4/Resources/Red.PNG"));
                column[i]->setCurrentOwner(playerUp);
                row = i;
            }
            else {
                column[i]->setPixmap(QPixmap(":/Connect4/Resources/Black.PNG"));
                column[i]->setCurrentOwner(playerUp);
                row = i;
            }
            break;
        }
    }
    if (didWin(col, row)) {
        GameOver* dialog = new GameOver();
		QString string;
		if (playerUp == PieceLabel::Player_1)
			string = QString("Player 1 won!");
		else
			string = QString("Player 2 won!");
		dialog->setTitle(string);
		dialog->exec();
    }

	if (totalPieces == 42) {
		GameOver* dialog = new GameOver();
		QString string;
		string = QString("No More Moves!");
		dialog->setTitle(string);
		dialog->exec();
	}
    if (playerUp == PieceLabel::Player_1)
        playerUp = PieceLabel::Player_2;
    else
        playerUp = PieceLabel::Player_1;
}

bool GameBoard::didWin(int col, int row)
{
    // Determine vertical victory
	
    if (row <= 2) {
        int inARow = 1;
        for (int i = row + 1; i < 6; i++) {
            if (m_board[col][i]->getCurrentOwner() == playerUp) {
                inARow++;
				if (inARow == 4)
					return true;
			}
			else {
				inARow = 0;
			}
        }
    }
    

    // Determine horizontal victory
    // need to have the middle one in that row for a horizontal victory
    if (m_board[3][row]->getCurrentOwner() == playerUp) {
        int inARow = 0;
        for (int i = 0; i < 7; i++) {
            if (m_board[i][row]->getCurrentOwner() == playerUp) {
                inARow++;
				if (inARow == 4)
					return true;
			}
			else {
				inARow = 0;
			}
        }
    }

    // Determine diagonal victory
    int increasingIntercept = row + col;
    int decreasingIntercept = row - col;
    // must be between 3 and 9 to be possible even though we only have up to 5 in rows
    if (increasingIntercept < 9 && increasingIntercept > 3) {
        if (increasingIntercept > 5) {
            // do special stuff since intercept is out of bounds
            int inARow = 0;
            for (int i = 5, j = increasingIntercept - 5; i >= 0 && j < 7; i--, j++) {
                if (m_board[j][i]->getCurrentOwner() == playerUp) {
                    inARow++;
					if (inARow == 4)
						return true;
                }
                else
                    inARow = 0;
            }
        }
        else {
            int inARow = 0;
            // loop on both row and col until one is out of bounds
            for (int i = increasingIntercept, j = 0; i >= 0 && j < 7; i--, j++) {
                if (m_board[j][i]->getCurrentOwner() == playerUp) {
                    inARow++;
					if (inARow == 4)
						return true;
                }
                else
                    inARow = 0;
            }
        }
    }
    if (decreasingIntercept > -4 && decreasingIntercept < 2) {
        if (decreasingIntercept < 0) {
            // Do special stuff since intercept is out of bounds
            int inARow = 0;
            for (int i = 0, j = decreasingIntercept * -1; i < 6 && j < 7; i++, j++) {
                if (m_board[j][i]->getCurrentOwner() == playerUp) {
                    inARow++;
					if (inARow == 4)
						return true;
                }
                else
                    inARow = 0;
            }
        }
        else {
            int inARow = 0;
            for (int i = decreasingIntercept, j = 0; i < 6 && j < 7; i++, j++) {
                if (m_board[j][i]->getCurrentOwner() == playerUp) {
                    inARow++;
					if (inARow == 4)
						return true;
                }
                else
                    inARow = 0;
            }
        }
    }

    return false;
}

void GameBoard::restartGame() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			m_board[i][j]->setCurrentOwner(PieceLabel::No_Player);
			m_board[i][j]->setPixmap(QPixmap(":/Connect4/Resources/Blank.PNG"));
		}
	}
    totalPieces = 0;
}

vector<vector<PieceLabel::Player>> GameBoard::GetBoard() {
    vector<vector<PieceLabel::Player>> board;
    for (auto col : m_board) {
        vector<PieceLabel::Player> column;
        for (auto piece : col) {
            column.push_back(piece->getCurrentOwner());
        }
        board.push_back(column);
    }
    return board;
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