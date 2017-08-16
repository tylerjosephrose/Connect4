/********************************************************************************
** Form generated from reading UI file 'Connect4.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT4_H
#define UI_CONNECT4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connect4Class
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridForPieces;
    QLabel *piece35;
    QLabel *piece55;
    QLabel *piece42;
    QLabel *piece44;
    QLabel *piece02;
    QLabel *piece45;
    QLabel *piece51;
    QLabel *piece11;
    QLabel *piece06;
    QLabel *piece33;
    QLabel *piece16;
    QLabel *piece41;
    QLabel *piece05;
    QLabel *piece20;
    QLabel *piece53;
    QLabel *piece56;
    QLabel *piece26;
    QLabel *piece03;
    QLabel *piece52;
    QLabel *piece04;
    QLabel *piece34;
    QLabel *piece46;
    QLabel *piece50;
    QLabel *piece00;
    QLabel *piece22;
    QLabel *piece01;
    QLabel *piece10;
    QLabel *piece12;
    QLabel *piece13;
    QLabel *piece14;
    QLabel *piece15;
    QLabel *piece36;
    QLabel *piece25;
    QLabel *piece30;
    QLabel *piece21;
    QLabel *piece24;
    QLabel *piece23;
    QLabel *piece54;
    QLabel *piece43;
    QLabel *piece32;
    QLabel *piece40;
    QLabel *piece31;
    QLabel *Title;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Connect4Class)
    {
        if (Connect4Class->objectName().isEmpty())
            Connect4Class->setObjectName(QStringLiteral("Connect4Class"));
        Connect4Class->resize(1008, 511);
        centralWidget = new QWidget(Connect4Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 501, 371));
        gridForPieces = new QGridLayout(gridLayoutWidget);
        gridForPieces->setSpacing(6);
        gridForPieces->setContentsMargins(11, 11, 11, 11);
        gridForPieces->setObjectName(QStringLiteral("gridForPieces"));
        gridForPieces->setContentsMargins(0, 0, 0, 0);
        piece35 = new QLabel(gridLayoutWidget);
        piece35->setObjectName(QStringLiteral("piece35"));
        piece35->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece35, 3, 5, 1, 1);

        piece55 = new QLabel(gridLayoutWidget);
        piece55->setObjectName(QStringLiteral("piece55"));
        piece55->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece55, 5, 5, 1, 1);

        piece42 = new QLabel(gridLayoutWidget);
        piece42->setObjectName(QStringLiteral("piece42"));
        piece42->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece42, 4, 2, 1, 1);

        piece44 = new QLabel(gridLayoutWidget);
        piece44->setObjectName(QStringLiteral("piece44"));
        piece44->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece44, 4, 4, 1, 1);

        piece02 = new QLabel(gridLayoutWidget);
        piece02->setObjectName(QStringLiteral("piece02"));
        piece02->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece02, 0, 2, 1, 1);

        piece45 = new QLabel(gridLayoutWidget);
        piece45->setObjectName(QStringLiteral("piece45"));
        piece45->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece45, 4, 5, 1, 1);

        piece51 = new QLabel(gridLayoutWidget);
        piece51->setObjectName(QStringLiteral("piece51"));
        piece51->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece51, 5, 1, 1, 1);

        piece11 = new QLabel(gridLayoutWidget);
        piece11->setObjectName(QStringLiteral("piece11"));
        piece11->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece11, 1, 1, 1, 1);

        piece06 = new QLabel(gridLayoutWidget);
        piece06->setObjectName(QStringLiteral("piece06"));
        piece06->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece06, 0, 6, 1, 1);

        piece33 = new QLabel(gridLayoutWidget);
        piece33->setObjectName(QStringLiteral("piece33"));
        piece33->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece33, 3, 3, 1, 1);

        piece16 = new QLabel(gridLayoutWidget);
        piece16->setObjectName(QStringLiteral("piece16"));
        piece16->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece16, 1, 6, 1, 1);

        piece41 = new QLabel(gridLayoutWidget);
        piece41->setObjectName(QStringLiteral("piece41"));
        piece41->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece41, 4, 1, 1, 1);

        piece05 = new QLabel(gridLayoutWidget);
        piece05->setObjectName(QStringLiteral("piece05"));
        piece05->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece05, 0, 5, 1, 1);

        piece20 = new QLabel(gridLayoutWidget);
        piece20->setObjectName(QStringLiteral("piece20"));
        piece20->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece20, 2, 0, 1, 1);

        piece53 = new QLabel(gridLayoutWidget);
        piece53->setObjectName(QStringLiteral("piece53"));
        piece53->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece53, 5, 3, 1, 1);

        piece56 = new QLabel(gridLayoutWidget);
        piece56->setObjectName(QStringLiteral("piece56"));
        piece56->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece56, 5, 6, 1, 1);

        piece26 = new QLabel(gridLayoutWidget);
        piece26->setObjectName(QStringLiteral("piece26"));
        piece26->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece26, 2, 6, 1, 1);

        piece03 = new QLabel(gridLayoutWidget);
        piece03->setObjectName(QStringLiteral("piece03"));
        piece03->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece03, 0, 3, 1, 1);

        piece52 = new QLabel(gridLayoutWidget);
        piece52->setObjectName(QStringLiteral("piece52"));
        piece52->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece52, 5, 2, 1, 1);

        piece04 = new QLabel(gridLayoutWidget);
        piece04->setObjectName(QStringLiteral("piece04"));
        piece04->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece04, 0, 4, 1, 1);

        piece34 = new QLabel(gridLayoutWidget);
        piece34->setObjectName(QStringLiteral("piece34"));
        piece34->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece34, 3, 4, 1, 1);

        piece46 = new QLabel(gridLayoutWidget);
        piece46->setObjectName(QStringLiteral("piece46"));
        piece46->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece46, 4, 6, 1, 1);

        piece50 = new QLabel(gridLayoutWidget);
        piece50->setObjectName(QStringLiteral("piece50"));
        piece50->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece50, 5, 0, 1, 1);

        piece00 = new QLabel(gridLayoutWidget);
        piece00->setObjectName(QStringLiteral("piece00"));
        piece00->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece00, 0, 0, 1, 1);

        piece22 = new QLabel(gridLayoutWidget);
        piece22->setObjectName(QStringLiteral("piece22"));
        piece22->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece22, 2, 2, 1, 1);

        piece01 = new QLabel(gridLayoutWidget);
        piece01->setObjectName(QStringLiteral("piece01"));
        piece01->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece01, 0, 1, 1, 1);

        piece10 = new QLabel(gridLayoutWidget);
        piece10->setObjectName(QStringLiteral("piece10"));
        piece10->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece10, 1, 0, 1, 1);

        piece12 = new QLabel(gridLayoutWidget);
        piece12->setObjectName(QStringLiteral("piece12"));
        piece12->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece12, 1, 2, 1, 1);

        piece13 = new QLabel(gridLayoutWidget);
        piece13->setObjectName(QStringLiteral("piece13"));
        piece13->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece13, 1, 3, 1, 1);

        piece14 = new QLabel(gridLayoutWidget);
        piece14->setObjectName(QStringLiteral("piece14"));
        piece14->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece14, 1, 4, 1, 1);

        piece15 = new QLabel(gridLayoutWidget);
        piece15->setObjectName(QStringLiteral("piece15"));
        piece15->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece15, 1, 5, 1, 1);

        piece36 = new QLabel(gridLayoutWidget);
        piece36->setObjectName(QStringLiteral("piece36"));
        piece36->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece36, 3, 6, 1, 1);

        piece25 = new QLabel(gridLayoutWidget);
        piece25->setObjectName(QStringLiteral("piece25"));
        piece25->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece25, 2, 5, 1, 1);

        piece30 = new QLabel(gridLayoutWidget);
        piece30->setObjectName(QStringLiteral("piece30"));
        piece30->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece30, 3, 0, 1, 1);

        piece21 = new QLabel(gridLayoutWidget);
        piece21->setObjectName(QStringLiteral("piece21"));
        piece21->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece21, 2, 1, 1, 1);

        piece24 = new QLabel(gridLayoutWidget);
        piece24->setObjectName(QStringLiteral("piece24"));
        piece24->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece24, 2, 4, 1, 1);

        piece23 = new QLabel(gridLayoutWidget);
        piece23->setObjectName(QStringLiteral("piece23"));
        piece23->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece23, 2, 3, 1, 1);

        piece54 = new QLabel(gridLayoutWidget);
        piece54->setObjectName(QStringLiteral("piece54"));
        piece54->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece54, 5, 4, 1, 1);

        piece43 = new QLabel(gridLayoutWidget);
        piece43->setObjectName(QStringLiteral("piece43"));
        piece43->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece43, 4, 3, 1, 1);

        piece32 = new QLabel(gridLayoutWidget);
        piece32->setObjectName(QStringLiteral("piece32"));
        piece32->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece32, 3, 2, 1, 1);

        piece40 = new QLabel(gridLayoutWidget);
        piece40->setObjectName(QStringLiteral("piece40"));
        piece40->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece40, 4, 0, 1, 1);

        piece31 = new QLabel(gridLayoutWidget);
        piece31->setObjectName(QStringLiteral("piece31"));
        piece31->setTextFormat(Qt::AutoText);

        gridForPieces->addWidget(piece31, 3, 1, 1, 1);

        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(20, 10, 481, 41));
        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setEnabled(true);
        horizontalWidget->setGeometry(QRect(19, 19, 501, 411));
        horizontalWidget->setMinimumSize(QSize(0, 411));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, 1, -1);
        pushButton_2 = new QPushButton(horizontalWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 23));
        pushButton_2->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(horizontalWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(horizontalWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(horizontalWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(horizontalWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(horizontalWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        Connect4Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Connect4Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 21));
        Connect4Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Connect4Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Connect4Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Connect4Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Connect4Class->setStatusBar(statusBar);

        retranslateUi(Connect4Class);

        QMetaObject::connectSlotsByName(Connect4Class);
    } // setupUi

    void retranslateUi(QMainWindow *Connect4Class)
    {
        Connect4Class->setWindowTitle(QApplication::translate("Connect4Class", "Connect4", Q_NULLPTR));
        piece35->setText(QString());
        piece55->setText(QString());
        piece42->setText(QString());
        piece44->setText(QString());
        piece02->setText(QString());
        piece45->setText(QString());
        piece51->setText(QString());
        piece11->setText(QString());
        piece06->setText(QString());
        piece33->setText(QString());
        piece16->setText(QString());
        piece41->setText(QString());
        piece05->setText(QString());
        piece20->setText(QString());
        piece53->setText(QString());
        piece56->setText(QString());
        piece26->setText(QString());
        piece03->setText(QString());
        piece52->setText(QString());
        piece04->setText(QString());
        piece34->setText(QString());
        piece46->setText(QString());
        piece50->setText(QString());
        piece00->setText(QString());
        piece22->setText(QString());
        piece01->setText(QString());
        piece10->setText(QString());
        piece12->setText(QString());
        piece13->setText(QString());
        piece14->setText(QString());
        piece15->setText(QString());
        piece36->setText(QString());
        piece25->setText(QString());
        piece30->setText(QString());
        piece21->setText(QString());
        piece24->setText(QString());
        piece23->setText(QString());
        piece54->setText(QString());
        piece43->setText(QString());
        piece32->setText(QString());
        piece40->setText(QString());
        piece31->setText(QString());
        Title->setText(QApplication::translate("Connect4Class", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Connect Four</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Connect4Class", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Connect4Class: public Ui_Connect4Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT4_H
