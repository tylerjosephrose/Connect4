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

    int alphabeta(Node* node, int a, int b, bool maximize);
    Node* makeTree(int depth, PieceLabel::Player p);
    static AI* GetInstance();

private:
    int scoreNode(Node* n);
    Node* makeTreeInternal(int d, PieceLabel::Player p, vector<vector<PieceLabel::Player>> b, int pos);
    vector<vector<PieceLabel::Player>> setHypotheticalPiece(int col, PieceLabel::Player p, vector<vector<PieceLabel::Player>> oldBoard);
	int checkNum(int Num, vector<vector<PieceLabel::Player>> b, PieceLabel::Player p);
    PieceLabel::Player GetOtherPlayer(PieceLabel::Player p) {
        if (p == PieceLabel::Player_1)
            return PieceLabel::Player_2;
        return PieceLabel::Player_1;
    }

    static AI* m_instance;
};

