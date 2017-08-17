#include "Connect4.h"

Connect4::Connect4(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

vector<vector<PieceLabel*>> Connect4::GetLabels()
{
    vector<vector<PieceLabel*>> labels;
    labels.push_back( { ui.piece00, ui.piece10, ui.piece20, ui.piece30, ui.piece40, ui.piece50 } );
    labels.push_back( { ui.piece01, ui.piece11, ui.piece21, ui.piece31, ui.piece41, ui.piece51 } );
    labels.push_back( { ui.piece02, ui.piece12, ui.piece22, ui.piece32, ui.piece42, ui.piece52 } );
    labels.push_back( { ui.piece03, ui.piece13, ui.piece23, ui.piece33, ui.piece43, ui.piece53 } );
    labels.push_back( { ui.piece04, ui.piece14, ui.piece24, ui.piece34, ui.piece44, ui.piece54 } );
    labels.push_back( { ui.piece05, ui.piece15, ui.piece25, ui.piece35, ui.piece45, ui.piece55 } );
    labels.push_back( { ui.piece06, ui.piece16, ui.piece26, ui.piece36, ui.piece46, ui.piece56 } );
    return labels;
}
