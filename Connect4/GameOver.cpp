#include "GameOver.h"
#include <GameBoard.h>
#include <assert.h>

GameOver::GameOver(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_title = ui.Title;
}

void GameOver::setTitle(QString text) {
	m_title->setText(text);
}