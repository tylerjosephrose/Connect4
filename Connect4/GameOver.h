#pragma once

#include <QtWidgets/QDialog>
#include "ui_GameOver.h"

class GameOver : public QDialog
{
	Q_OBJECT

public:
	void setTitle(QString text);

	GameOver(QWidget *parent = Q_NULLPTR);

private:
	Ui::GameOverClass ui;
	QLabel* m_title;
};

