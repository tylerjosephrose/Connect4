/*
This is the basis of the AI. Looking to use Alpha-Beta pruning with minmax tree.
Tyler Rose
*/
#pragma once

#include <GameBoard.h>

struct Node {
    vector<Node*> children;
    bool hasChildren;

    vector<vector<PieceLabel::Player>> board;
};

class AI {
public:
    AI();
    ~AI();

    int alphabeta(Node* node, int depth, int a, int b, bool maximize);
    Node* makeTree(int depth, PieceLabel::Player p);

private:
    int scoreNode(Node* n);
    Node* makeTreeInternal(int d, PieceLabel::Player p, vector<vector<PieceLabel::Player>> b);
    vector<vector<PieceLabel::Player>> setHypotheticalPiece(int col, PieceLabel::Player p, vector<vector<PieceLabel::Player>> oldBoard);
    int checkFours(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p);
    int checkThrees(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p);
    int checkTwos(vector<vector<PieceLabel::Player>> b, PieceLabel::Player p);
    PieceLabel::Player GetOtherPlayer(PieceLabel::Player p) {
        if (p = PieceLabel::Player_1)
            return PieceLabel::Player_2;
        return PieceLabel::Player_1;
    }
};

