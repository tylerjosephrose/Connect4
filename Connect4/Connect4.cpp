#include <Connect4.h>
#include <GameBoard.h>
#include <QContextMenuEvent>
#include <QMessageBox>

Connect4::Connect4(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    createActions();
    createMenus();
}

void Connect4::contextMenuEvent(QContextMenuEvent *event) {
    QMenu menu(this);
    menu.addAction(actionRestart);
    menu.addAction(actionClose);
    menu.addAction(actionRules);
    menu.exec(event->globalPos());
    //menu.popup(event->globalPos());
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

void Connect4::restart() {
    GameBoard::GetInstance()->restartGame();
}

void Connect4::close() {
    QApplication::quit();
}

void Connect4::rules() {
    /*GameOver* dialog = new GameOver();
    QString string;
    string = QString("No More Moves!");
    dialog->setTitle(string);
    dialog->exec();*/
    QMessageBox* tempbox = new QMessageBox;
    tempbox->setText("On your turn, drop one of your checkers down ANY of the slots in the top of the grid.\nPlay alternates until one player gets 4 checkers of his/her color in a row.\nThe 4-in-a-row can be horizontal, vertical, or diagonal.\nThe first player to get 4-in-a-row wins.");
    tempbox->show();
}

void Connect4::createActions() {
    actionRestart = new QAction(tr("&Restart"), this);
    actionRestart->setShortcut(QKeySequence(tr("Ctrl+R")));
    actionRestart->setStatusTip(tr("Clears the board and starts a new game"));
    connect(actionRestart, &QAction::triggered, this, &Connect4::restart);

    actionClose = new QAction(tr("&Close"), this);
    actionClose->setStatusTip(tr("Closes the program"));
    connect(actionClose, &QAction::triggered, this, &Connect4::close);

    actionRules = new QAction(tr("&Rules"), this);
    actionRules->setStatusTip(tr("Displays the rules of the game"));
    connect(actionRules, &QAction::triggered, this, &Connect4::rules);
}

void Connect4::createMenus() {
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(actionRestart);
    fileMenu->addAction(actionRules);
    fileMenu->addAction(actionClose);
}
