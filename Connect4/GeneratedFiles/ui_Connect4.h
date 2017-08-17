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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "RowButton.h"

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
    RowButton *row0;
    RowButton *row1;
    RowButton *row2;
    RowButton *row3;
    RowButton *row4;
    RowButton *row5;
    RowButton *row6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Connect4Class)
    {
        if (Connect4Class->objectName().isEmpty())
            Connect4Class->setObjectName(QStringLiteral("Connect4Class"));
        Connect4Class->resize(558, 497);
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
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(piece35->sizePolicy().hasHeightForWidth());
        piece35->setSizePolicy(sizePolicy);
        piece35->setTextFormat(Qt::AutoText);
        piece35->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece35->setScaledContents(true);

        gridForPieces->addWidget(piece35, 3, 5, 1, 1);

        piece55 = new QLabel(gridLayoutWidget);
        piece55->setObjectName(QStringLiteral("piece55"));
        sizePolicy.setHeightForWidth(piece55->sizePolicy().hasHeightForWidth());
        piece55->setSizePolicy(sizePolicy);
        piece55->setTextFormat(Qt::AutoText);
        piece55->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece55->setScaledContents(true);

        gridForPieces->addWidget(piece55, 5, 5, 1, 1);

        piece42 = new QLabel(gridLayoutWidget);
        piece42->setObjectName(QStringLiteral("piece42"));
        sizePolicy.setHeightForWidth(piece42->sizePolicy().hasHeightForWidth());
        piece42->setSizePolicy(sizePolicy);
        piece42->setTextFormat(Qt::AutoText);
        piece42->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece42->setScaledContents(true);

        gridForPieces->addWidget(piece42, 4, 2, 1, 1);

        piece44 = new QLabel(gridLayoutWidget);
        piece44->setObjectName(QStringLiteral("piece44"));
        sizePolicy.setHeightForWidth(piece44->sizePolicy().hasHeightForWidth());
        piece44->setSizePolicy(sizePolicy);
        piece44->setTextFormat(Qt::AutoText);
        piece44->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece44->setScaledContents(true);

        gridForPieces->addWidget(piece44, 4, 4, 1, 1);

        piece02 = new QLabel(gridLayoutWidget);
        piece02->setObjectName(QStringLiteral("piece02"));
        sizePolicy.setHeightForWidth(piece02->sizePolicy().hasHeightForWidth());
        piece02->setSizePolicy(sizePolicy);
        piece02->setTextFormat(Qt::AutoText);
        piece02->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece02->setScaledContents(true);

        gridForPieces->addWidget(piece02, 0, 2, 1, 1);

        piece45 = new QLabel(gridLayoutWidget);
        piece45->setObjectName(QStringLiteral("piece45"));
        sizePolicy.setHeightForWidth(piece45->sizePolicy().hasHeightForWidth());
        piece45->setSizePolicy(sizePolicy);
        piece45->setTextFormat(Qt::AutoText);
        piece45->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece45->setScaledContents(true);

        gridForPieces->addWidget(piece45, 4, 5, 1, 1);

        piece51 = new QLabel(gridLayoutWidget);
        piece51->setObjectName(QStringLiteral("piece51"));
        sizePolicy.setHeightForWidth(piece51->sizePolicy().hasHeightForWidth());
        piece51->setSizePolicy(sizePolicy);
        piece51->setTextFormat(Qt::AutoText);
        piece51->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece51->setScaledContents(true);

        gridForPieces->addWidget(piece51, 5, 1, 1, 1);

        piece11 = new QLabel(gridLayoutWidget);
        piece11->setObjectName(QStringLiteral("piece11"));
        sizePolicy.setHeightForWidth(piece11->sizePolicy().hasHeightForWidth());
        piece11->setSizePolicy(sizePolicy);
        piece11->setTextFormat(Qt::AutoText);
        piece11->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece11->setScaledContents(true);

        gridForPieces->addWidget(piece11, 1, 1, 1, 1);

        piece06 = new QLabel(gridLayoutWidget);
        piece06->setObjectName(QStringLiteral("piece06"));
        sizePolicy.setHeightForWidth(piece06->sizePolicy().hasHeightForWidth());
        piece06->setSizePolicy(sizePolicy);
        piece06->setTextFormat(Qt::AutoText);
        piece06->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece06->setScaledContents(true);

        gridForPieces->addWidget(piece06, 0, 6, 1, 1);

        piece33 = new QLabel(gridLayoutWidget);
        piece33->setObjectName(QStringLiteral("piece33"));
        sizePolicy.setHeightForWidth(piece33->sizePolicy().hasHeightForWidth());
        piece33->setSizePolicy(sizePolicy);
        piece33->setTextFormat(Qt::AutoText);
        piece33->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece33->setScaledContents(true);

        gridForPieces->addWidget(piece33, 3, 3, 1, 1);

        piece16 = new QLabel(gridLayoutWidget);
        piece16->setObjectName(QStringLiteral("piece16"));
        sizePolicy.setHeightForWidth(piece16->sizePolicy().hasHeightForWidth());
        piece16->setSizePolicy(sizePolicy);
        piece16->setTextFormat(Qt::AutoText);
        piece16->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece16->setScaledContents(true);

        gridForPieces->addWidget(piece16, 1, 6, 1, 1);

        piece41 = new QLabel(gridLayoutWidget);
        piece41->setObjectName(QStringLiteral("piece41"));
        sizePolicy.setHeightForWidth(piece41->sizePolicy().hasHeightForWidth());
        piece41->setSizePolicy(sizePolicy);
        piece41->setTextFormat(Qt::AutoText);
        piece41->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece41->setScaledContents(true);

        gridForPieces->addWidget(piece41, 4, 1, 1, 1);

        piece05 = new QLabel(gridLayoutWidget);
        piece05->setObjectName(QStringLiteral("piece05"));
        sizePolicy.setHeightForWidth(piece05->sizePolicy().hasHeightForWidth());
        piece05->setSizePolicy(sizePolicy);
        piece05->setTextFormat(Qt::AutoText);
        piece05->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece05->setScaledContents(true);

        gridForPieces->addWidget(piece05, 0, 5, 1, 1);

        piece20 = new QLabel(gridLayoutWidget);
        piece20->setObjectName(QStringLiteral("piece20"));
        sizePolicy.setHeightForWidth(piece20->sizePolicy().hasHeightForWidth());
        piece20->setSizePolicy(sizePolicy);
        piece20->setTextFormat(Qt::AutoText);
        piece20->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece20->setScaledContents(true);

        gridForPieces->addWidget(piece20, 2, 0, 1, 1);

        piece53 = new QLabel(gridLayoutWidget);
        piece53->setObjectName(QStringLiteral("piece53"));
        sizePolicy.setHeightForWidth(piece53->sizePolicy().hasHeightForWidth());
        piece53->setSizePolicy(sizePolicy);
        piece53->setTextFormat(Qt::AutoText);
        piece53->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece53->setScaledContents(true);

        gridForPieces->addWidget(piece53, 5, 3, 1, 1);

        piece56 = new QLabel(gridLayoutWidget);
        piece56->setObjectName(QStringLiteral("piece56"));
        sizePolicy.setHeightForWidth(piece56->sizePolicy().hasHeightForWidth());
        piece56->setSizePolicy(sizePolicy);
        piece56->setTextFormat(Qt::AutoText);
        piece56->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece56->setScaledContents(true);

        gridForPieces->addWidget(piece56, 5, 6, 1, 1);

        piece26 = new QLabel(gridLayoutWidget);
        piece26->setObjectName(QStringLiteral("piece26"));
        sizePolicy.setHeightForWidth(piece26->sizePolicy().hasHeightForWidth());
        piece26->setSizePolicy(sizePolicy);
        piece26->setTextFormat(Qt::AutoText);
        piece26->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece26->setScaledContents(true);

        gridForPieces->addWidget(piece26, 2, 6, 1, 1);

        piece03 = new QLabel(gridLayoutWidget);
        piece03->setObjectName(QStringLiteral("piece03"));
        sizePolicy.setHeightForWidth(piece03->sizePolicy().hasHeightForWidth());
        piece03->setSizePolicy(sizePolicy);
        piece03->setTextFormat(Qt::AutoText);
        piece03->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece03->setScaledContents(true);

        gridForPieces->addWidget(piece03, 0, 3, 1, 1);

        piece52 = new QLabel(gridLayoutWidget);
        piece52->setObjectName(QStringLiteral("piece52"));
        sizePolicy.setHeightForWidth(piece52->sizePolicy().hasHeightForWidth());
        piece52->setSizePolicy(sizePolicy);
        piece52->setTextFormat(Qt::AutoText);
        piece52->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece52->setScaledContents(true);

        gridForPieces->addWidget(piece52, 5, 2, 1, 1);

        piece04 = new QLabel(gridLayoutWidget);
        piece04->setObjectName(QStringLiteral("piece04"));
        sizePolicy.setHeightForWidth(piece04->sizePolicy().hasHeightForWidth());
        piece04->setSizePolicy(sizePolicy);
        piece04->setTextFormat(Qt::AutoText);
        piece04->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece04->setScaledContents(true);

        gridForPieces->addWidget(piece04, 0, 4, 1, 1);

        piece34 = new QLabel(gridLayoutWidget);
        piece34->setObjectName(QStringLiteral("piece34"));
        sizePolicy.setHeightForWidth(piece34->sizePolicy().hasHeightForWidth());
        piece34->setSizePolicy(sizePolicy);
        piece34->setTextFormat(Qt::AutoText);
        piece34->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece34->setScaledContents(true);

        gridForPieces->addWidget(piece34, 3, 4, 1, 1);

        piece46 = new QLabel(gridLayoutWidget);
        piece46->setObjectName(QStringLiteral("piece46"));
        sizePolicy.setHeightForWidth(piece46->sizePolicy().hasHeightForWidth());
        piece46->setSizePolicy(sizePolicy);
        piece46->setTextFormat(Qt::AutoText);
        piece46->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece46->setScaledContents(true);

        gridForPieces->addWidget(piece46, 4, 6, 1, 1);

        piece50 = new QLabel(gridLayoutWidget);
        piece50->setObjectName(QStringLiteral("piece50"));
        sizePolicy.setHeightForWidth(piece50->sizePolicy().hasHeightForWidth());
        piece50->setSizePolicy(sizePolicy);
        piece50->setTextFormat(Qt::AutoText);
        piece50->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece50->setScaledContents(true);

        gridForPieces->addWidget(piece50, 5, 0, 1, 1);

        piece00 = new QLabel(gridLayoutWidget);
        piece00->setObjectName(QStringLiteral("piece00"));
        sizePolicy.setHeightForWidth(piece00->sizePolicy().hasHeightForWidth());
        piece00->setSizePolicy(sizePolicy);
        piece00->setTextFormat(Qt::AutoText);
        piece00->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece00->setScaledContents(true);

        gridForPieces->addWidget(piece00, 0, 0, 1, 1);

        piece22 = new QLabel(gridLayoutWidget);
        piece22->setObjectName(QStringLiteral("piece22"));
        sizePolicy.setHeightForWidth(piece22->sizePolicy().hasHeightForWidth());
        piece22->setSizePolicy(sizePolicy);
        piece22->setTextFormat(Qt::AutoText);
        piece22->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece22->setScaledContents(true);

        gridForPieces->addWidget(piece22, 2, 2, 1, 1);

        piece01 = new QLabel(gridLayoutWidget);
        piece01->setObjectName(QStringLiteral("piece01"));
        sizePolicy.setHeightForWidth(piece01->sizePolicy().hasHeightForWidth());
        piece01->setSizePolicy(sizePolicy);
        piece01->setTextFormat(Qt::AutoText);
        piece01->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece01->setScaledContents(true);

        gridForPieces->addWidget(piece01, 0, 1, 1, 1);

        piece10 = new QLabel(gridLayoutWidget);
        piece10->setObjectName(QStringLiteral("piece10"));
        sizePolicy.setHeightForWidth(piece10->sizePolicy().hasHeightForWidth());
        piece10->setSizePolicy(sizePolicy);
        piece10->setTextFormat(Qt::AutoText);
        piece10->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece10->setScaledContents(true);

        gridForPieces->addWidget(piece10, 1, 0, 1, 1);

        piece12 = new QLabel(gridLayoutWidget);
        piece12->setObjectName(QStringLiteral("piece12"));
        sizePolicy.setHeightForWidth(piece12->sizePolicy().hasHeightForWidth());
        piece12->setSizePolicy(sizePolicy);
        piece12->setTextFormat(Qt::AutoText);
        piece12->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece12->setScaledContents(true);

        gridForPieces->addWidget(piece12, 1, 2, 1, 1);

        piece13 = new QLabel(gridLayoutWidget);
        piece13->setObjectName(QStringLiteral("piece13"));
        sizePolicy.setHeightForWidth(piece13->sizePolicy().hasHeightForWidth());
        piece13->setSizePolicy(sizePolicy);
        piece13->setTextFormat(Qt::AutoText);
        piece13->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece13->setScaledContents(true);

        gridForPieces->addWidget(piece13, 1, 3, 1, 1);

        piece14 = new QLabel(gridLayoutWidget);
        piece14->setObjectName(QStringLiteral("piece14"));
        sizePolicy.setHeightForWidth(piece14->sizePolicy().hasHeightForWidth());
        piece14->setSizePolicy(sizePolicy);
        piece14->setTextFormat(Qt::AutoText);
        piece14->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece14->setScaledContents(true);

        gridForPieces->addWidget(piece14, 1, 4, 1, 1);

        piece15 = new QLabel(gridLayoutWidget);
        piece15->setObjectName(QStringLiteral("piece15"));
        sizePolicy.setHeightForWidth(piece15->sizePolicy().hasHeightForWidth());
        piece15->setSizePolicy(sizePolicy);
        piece15->setTextFormat(Qt::AutoText);
        piece15->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece15->setScaledContents(true);

        gridForPieces->addWidget(piece15, 1, 5, 1, 1);

        piece36 = new QLabel(gridLayoutWidget);
        piece36->setObjectName(QStringLiteral("piece36"));
        sizePolicy.setHeightForWidth(piece36->sizePolicy().hasHeightForWidth());
        piece36->setSizePolicy(sizePolicy);
        piece36->setTextFormat(Qt::AutoText);
        piece36->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece36->setScaledContents(true);

        gridForPieces->addWidget(piece36, 3, 6, 1, 1);

        piece25 = new QLabel(gridLayoutWidget);
        piece25->setObjectName(QStringLiteral("piece25"));
        sizePolicy.setHeightForWidth(piece25->sizePolicy().hasHeightForWidth());
        piece25->setSizePolicy(sizePolicy);
        piece25->setTextFormat(Qt::AutoText);
        piece25->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece25->setScaledContents(true);

        gridForPieces->addWidget(piece25, 2, 5, 1, 1);

        piece30 = new QLabel(gridLayoutWidget);
        piece30->setObjectName(QStringLiteral("piece30"));
        sizePolicy.setHeightForWidth(piece30->sizePolicy().hasHeightForWidth());
        piece30->setSizePolicy(sizePolicy);
        piece30->setTextFormat(Qt::AutoText);
        piece30->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece30->setScaledContents(true);

        gridForPieces->addWidget(piece30, 3, 0, 1, 1);

        piece21 = new QLabel(gridLayoutWidget);
        piece21->setObjectName(QStringLiteral("piece21"));
        sizePolicy.setHeightForWidth(piece21->sizePolicy().hasHeightForWidth());
        piece21->setSizePolicy(sizePolicy);
        piece21->setTextFormat(Qt::AutoText);
        piece21->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece21->setScaledContents(true);

        gridForPieces->addWidget(piece21, 2, 1, 1, 1);

        piece24 = new QLabel(gridLayoutWidget);
        piece24->setObjectName(QStringLiteral("piece24"));
        sizePolicy.setHeightForWidth(piece24->sizePolicy().hasHeightForWidth());
        piece24->setSizePolicy(sizePolicy);
        piece24->setTextFormat(Qt::AutoText);
        piece24->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece24->setScaledContents(true);

        gridForPieces->addWidget(piece24, 2, 4, 1, 1);

        piece23 = new QLabel(gridLayoutWidget);
        piece23->setObjectName(QStringLiteral("piece23"));
        sizePolicy.setHeightForWidth(piece23->sizePolicy().hasHeightForWidth());
        piece23->setSizePolicy(sizePolicy);
        piece23->setTextFormat(Qt::AutoText);
        piece23->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece23->setScaledContents(true);

        gridForPieces->addWidget(piece23, 2, 3, 1, 1);

        piece54 = new QLabel(gridLayoutWidget);
        piece54->setObjectName(QStringLiteral("piece54"));
        sizePolicy.setHeightForWidth(piece54->sizePolicy().hasHeightForWidth());
        piece54->setSizePolicy(sizePolicy);
        piece54->setTextFormat(Qt::AutoText);
        piece54->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece54->setScaledContents(true);

        gridForPieces->addWidget(piece54, 5, 4, 1, 1);

        piece43 = new QLabel(gridLayoutWidget);
        piece43->setObjectName(QStringLiteral("piece43"));
        sizePolicy.setHeightForWidth(piece43->sizePolicy().hasHeightForWidth());
        piece43->setSizePolicy(sizePolicy);
        piece43->setTextFormat(Qt::AutoText);
        piece43->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece43->setScaledContents(true);

        gridForPieces->addWidget(piece43, 4, 3, 1, 1);

        piece32 = new QLabel(gridLayoutWidget);
        piece32->setObjectName(QStringLiteral("piece32"));
        sizePolicy.setHeightForWidth(piece32->sizePolicy().hasHeightForWidth());
        piece32->setSizePolicy(sizePolicy);
        piece32->setTextFormat(Qt::AutoText);
        piece32->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece32->setScaledContents(true);

        gridForPieces->addWidget(piece32, 3, 2, 1, 1);

        piece40 = new QLabel(gridLayoutWidget);
        piece40->setObjectName(QStringLiteral("piece40"));
        sizePolicy.setHeightForWidth(piece40->sizePolicy().hasHeightForWidth());
        piece40->setSizePolicy(sizePolicy);
        piece40->setTextFormat(Qt::AutoText);
        piece40->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece40->setScaledContents(true);

        gridForPieces->addWidget(piece40, 4, 0, 1, 1);

        piece31 = new QLabel(gridLayoutWidget);
        piece31->setObjectName(QStringLiteral("piece31"));
        sizePolicy.setHeightForWidth(piece31->sizePolicy().hasHeightForWidth());
        piece31->setSizePolicy(sizePolicy);
        piece31->setTextFormat(Qt::AutoText);
        piece31->setPixmap(QPixmap(QString::fromUtf8(":/Connect4/Resources/Blank.PNG")));
        piece31->setScaledContents(true);

        gridForPieces->addWidget(piece31, 3, 1, 1, 1);

        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(20, 10, 481, 41));
        row0 = new RowButton(centralWidget);
        row0->setObjectName(QStringLiteral("row0"));
        row0->setGeometry(QRect(20, 10, 71, 421));
        row1 = new RowButton(centralWidget);
        row1->setObjectName(QStringLiteral("row1"));
        row1->setGeometry(QRect(90, 10, 71, 421));
        row2 = new RowButton(centralWidget);
        row2->setObjectName(QStringLiteral("row2"));
        row2->setGeometry(QRect(160, 10, 71, 421));
        row3 = new RowButton(centralWidget);
        row3->setObjectName(QStringLiteral("row3"));
        row3->setGeometry(QRect(230, 10, 71, 421));
        row4 = new RowButton(centralWidget);
        row4->setObjectName(QStringLiteral("row4"));
        row4->setGeometry(QRect(310, 10, 71, 421));
        row5 = new RowButton(centralWidget);
        row5->setObjectName(QStringLiteral("row5"));
        row5->setGeometry(QRect(380, 10, 71, 421));
        row6 = new RowButton(centralWidget);
        row6->setObjectName(QStringLiteral("row6"));
        row6->setGeometry(QRect(450, 10, 71, 421));
        Connect4Class->setCentralWidget(centralWidget);
        Title->raise();
        gridLayoutWidget->raise();
        row0->raise();
        row1->raise();
        row3->raise();
        row4->raise();
        row5->raise();
        row6->raise();
        row2->raise();
        menuBar = new QMenuBar(Connect4Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 558, 21));
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
        row0->setText(QString());
        row1->setText(QString());
        row2->setText(QString());
        row3->setText(QString());
        row4->setText(QString());
        row5->setText(QString());
        row6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Connect4Class: public Ui_Connect4Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT4_H
