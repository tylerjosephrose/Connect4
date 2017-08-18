#include <GameBoard.h>
#include <GameOver.h>

GameOver::GameOver(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_title = ui.Title;
	connect(ui.closeButton, &QPushButton::clicked, this, &GameOver::closeClicked);
	connect(ui.restartButton, &QPushButton::clicked, this, &GameOver::restartClicked);
}

void GameOver::closeClicked() {
	QApplication::quit();
}

void GameOver::restartClicked() {
	GameBoard::GetInstance()->restartGame();
}

void GameOver::setTitle(QString text) {
	m_title->setText(text);
}