#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Connect4.h"

class QAction;
class QMenu;

class Connect4 : public QMainWindow
{
    Q_OBJECT

public:
    Connect4(QWidget *parent = Q_NULLPTR);
    vector< vector< PieceLabel* > > GetLabels();

protected:
#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

    private slots :
    void restart();
    void close();
    void rules();

private:
    void createActions();
    void createMenus();

    QMenu *fileMenu;
    QAction *actionRestart;
    QAction *actionClose;
    QAction *actionRules;

    Ui::Connect4Class ui;
};
