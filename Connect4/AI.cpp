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

int AI::alphabeta(Node* node, int depth, int a, int b, bool maximize) {
    int v;
    if (depth == 0 || !node->hasChildren)
        return scoreNode(node);
    if (maximize) {
        // highest value of int
        v = INF;
        ASSERT(node->children.size() > 0);
        for (auto child : node->children) {
            v = max(v, alphabeta(child, depth - 1, a, b, false));
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
            v = min(v, alphabeta(child, depth - 1, a, b, true));
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
    root->children.push_back(makeTreeInternal(depth - 1, p, root->board));

    return root;
}

Node* AI::makeTreeInternal(int d, PieceLabel::Player p, vector<vector<PieceLabel::Player>> b) {
    if (d == 0)
        return nullptr;
    Node* returnNode;
    for (int i = 0; i < 7; i++) {
        vector<vector<PieceLabel::Player>> newBoard;
        newBoard = setHypotheticalPiece(i, p, b);
        if (newBoard.size() == 0)
            return nullptr;
        Node* temp = makeTreeInternal(d - 1, p, newBoard);
        if (temp != nullptr)
            returnNode->children.push_back(temp);
    }
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
}

int AI::scoreNode(Node* n) {
    if (checkFours(n->board, PieceLabel::Player_2) > 0)
        return INF;
    if (checkFours(n->board, PieceLabel::Player_1) > 0)
        return NEG_INF;
    
    int threes = checkThrees(n->board, PieceLabel::Player_2) * 1000;
    int twos = checkTwos(n->board, PieceLabel::Player_2) * 10;
    int oppThrees = checkThrees(n->board, PieceLabel::Player_1) * 1000;
    int oppTwos = checkTwos(n->board, PieceLabel::Player_1) * 10;

    return threes + twos - oppThrees - oppTwos;
}

int AI::checkFours(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p) {
    return 0;
}

int AI::checkThrees(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p) {
    return 1;
}

int AI::checkTwos(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p) {
    return 2;
}

AI* AI::GetInstance() {
    if (m_instance == NULL)
        m_instance = new AI();
    return m_instance;
}
