/*
This is the basis of the AI. Looking to use Alpha-Beta pruning with minmax tree.
Tyler Rose
*/

#include <AI.h>
#include <assert.h>

static int INF = 2147483647;
static int NEG_INF = -2147483648;
#define ASSERT(bool) assert(bool)
AI* AI::m_instance = 0;

AI::AI() {

}

AI::~AI() {

}

int AI::alphabeta(Node* node, int a, int b, bool maximize) {
    int v;
    if (!node->hasChildren)
        return scoreNode(node);
    if (maximize) {
        // highest value of int
        v = INF;
        ASSERT(node->children.size() > 0);
        for (auto child : node->children) {
			if (child == nullptr)
				continue;
            v = max(v, alphabeta(child, a, b, false));
            a = max(a, v);
            if (b <= a)
                break;
            return v;
        }
    }
    else {
        // lowest value of int
        v = NEG_INF;
        ASSERT(node->children.size() > 0);
        for (auto child : node->children) {
			if (child == nullptr)
				continue;
            v = min(v, alphabeta(child, a, b, true));
            b = min(b, v);
            if (b <= a)
                break;
            return v;
        }
    }
}

Node* AI::makeTree(int depth, PieceLabel::Player p) {
    Node* root = new Node();
    root->board = GameBoard::GetInstance()->GetBoard();
    // do stuff to fill the tree
    // remember to make hasChildren true if we add them
	for (int i = 0; i < 7; i++) {
		Node* temp = makeTreeInternal(depth, p, root->board, i);
		if (temp != nullptr) {
			root->hasChildren = true;
			root->children.push_back(temp);
		}
		else
			root->children.push_back(nullptr);
	}

    return root;
}

Node* AI::makeTreeInternal(int d, PieceLabel::Player p, vector<vector<PieceLabel::Player>> b, int pos) {
    if (d == 0)
        return nullptr;
    Node* returnNode = new Node();
	returnNode->hasChildren = false;
	vector<vector<PieceLabel::Player>> newBoard;
	newBoard = setHypotheticalPiece(pos, p, b);
	if (newBoard.size() == 0)
		return nullptr;
	returnNode->board = newBoard;
    for (int i = 0; i < 7; i++) {
        Node* temp = makeTreeInternal(d - 1, GetOtherPlayer(p), newBoard, i);
		if (temp != nullptr) {
			returnNode->hasChildren = true;
			returnNode->children.push_back(temp);
		}
		else
			returnNode->children.push_back(nullptr);
    }
	return returnNode;
}

vector<vector<PieceLabel::Player>> AI::setHypotheticalPiece(int col, PieceLabel::Player p, vector<vector<PieceLabel::Player>> oldBoard) {
    vector<vector<PieceLabel::Player>> newBoard;
    vector<PieceLabel::Player> column = oldBoard[col];
    if (column[0] != PieceLabel::No_Player) {
        return newBoard;
    }
    int row;
    for (int i = 5; i >= 0; i--) {
        if (column[i] == PieceLabel::No_Player) {
            newBoard = oldBoard;
            newBoard[col][i] = p;
            break;
        }
    }
	return newBoard;
}

int AI::scoreNode(Node* n) {
    if (checkNum(4, n->board, PieceLabel::Player_2) > 0)
        return INF;
    if (checkNum(4, n->board, PieceLabel::Player_1) > 0)
        return NEG_INF;
    
    int threes = checkNum(3, n->board, PieceLabel::Player_2) * 1000;
    int twos = checkNum(2, n->board, PieceLabel::Player_2) * 10;
	int oppThrees = checkNum(3, n->board, PieceLabel::Player_1) * 100000;
    int oppTwos = checkNum(2, n->board, PieceLabel::Player_1) * 10;

    return threes + twos - oppThrees - oppTwos;
}

int AI::checkNum(int Num, vector<vector<PieceLabel::Player>> b, PieceLabel::Player p) {
	int count = 0;
	// check vertical
	for (auto col : b) {
		int inARow = 0;
		for (auto piece : col) {
			if (piece == PieceLabel::No_Player)
				break;
			else if (piece = p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}

	// check horizontal
	for (int i = 5; i >= 0; i--) {
		int inARow = 0;
		for (int j = 0; j < 7; j++) {
			if (b[j][i] == p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}

	// check increasing diagonal
	// down the side
	// We start at Num - 1 since anything less than that doesn't have enough space for that num in a row
	for (int j = Num - 1; j < 6; j++) {
		// uses 0, j as ref point
		int inARow = 0;
		for (int x = 0, y = j; x < 7 && y >= 0; x++, y--) {
			if (b[x][y] == p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}
	// across the bottom
	for (int i = 0; i < 7; i++) {
		// uses i, 5 as ref point
		int inARow = 0;
		for (int x = i, y = 5; x < 7 && y >= 0; x++, y--) {
			if (b[x][y] == p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}

	// check decreasing diagonal
	for (int j = 0; j < 6; j++) {
		int inARow = 0;
		for (int x = 0, y = j; x < 7 && y < 6; x++, y++) {
			if (b[x][y] == p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}
	for (int i = 0; i < 7; i++) {
		int inARow = 0;
		for (int x = i, y = 0; x < 6 && y < 7; x++, y++) {
			if (b[x][y] == p) {
				inARow++;
				if (inARow == Num)
					count++;
			}
			else
				inARow = 0;
		}
	}
	return count;
}

AI* AI::GetInstance() {
    if (m_instance == NULL)
        m_instance = new AI();
    return m_instance;
}
