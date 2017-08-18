/********************************************************************************
** Form generated from reading UI file 'GameOver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOverClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *restartButton;
    QPushButton *closeButton;
    QLabel *Title;

    void setupUi(QDialog *GameOverClass)
    {
        if (GameOverClass->objectName().isEmpty())
            GameOverClass->setObjectName(QStringLiteral("GameOverClass"));
        GameOverClass->resize(400, 300);
        layoutWidget = new QWidget(GameOverClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 351, 33));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        restartButton = new QPushButton(layoutWidget);
        restartButton->setObjectName(QStringLiteral("restartButton"));

        hboxLayout->addWidget(restartButton);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);

        Title = new QLabel(GameOverClass);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(30, 40, 341, 161));
        QFont font;
        font.setPointSize(30);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);

        retranslateUi(GameOverClass);
        QObject::connect(restartButton, SIGNAL(clicked()), GameOverClass, SLOT(accept()));
        QObject::connect(closeButton, SIGNAL(clicked()), GameOverClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(GameOverClass);
    } // setupUi

    void retranslateUi(QDialog *GameOverClass)
    {
        GameOverClass->setWindowTitle(QApplication::translate("GameOverClass", "Dialog", Q_NULLPTR));
        restartButton->setText(QApplication::translate("GameOverClass", "Restart", Q_NULLPTR));
        closeButton->setText(QApplication::translate("GameOverClass", "Close", Q_NULLPTR));
        Title->setText(QApplication::translate("GameOverClass", "Player # Won!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameOverClass: public Ui_GameOverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
