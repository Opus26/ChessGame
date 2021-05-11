/********************************************************************************
** Form generated from reading UI file 'boardwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWINDOW_H
#define UI_BOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QGraphicsView *graphicsView;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *playerTurnLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *player1_label;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *player2_label;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *BoardWindow)
    {
        if (BoardWindow->objectName().isEmpty())
            BoardWindow->setObjectName(QString::fromUtf8("BoardWindow"));
        BoardWindow->resize(956, 877);
        BoardWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));
        centralwidget = new QWidget(BoardWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_5);


        gridLayout->addLayout(verticalLayout_7, 2, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(verticalLayout_6, 2, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(780, 764));
        graphicsView->setMaximumSize(QSize(780, 764));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));

        gridLayout->addWidget(graphicsView, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        playerTurnLabel = new QLabel(centralwidget);
        playerTurnLabel->setObjectName(QString::fromUtf8("playerTurnLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        playerTurnLabel->setFont(font);
        playerTurnLabel->setStyleSheet(QString::fromUtf8(" color: rgb(214, 185, 140)"));

        horizontalLayout_2->addWidget(playerTurnLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        player1_label = new QLabel(centralwidget);
        player1_label->setObjectName(QString::fromUtf8("player1_label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        font1.setPointSize(14);
        font1.setItalic(true);
        player1_label->setFont(font1);
        player1_label->setStyleSheet(QString::fromUtf8(" color: rgb(234, 203, 152)"));

        horizontalLayout_3->addWidget(player1_label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        player2_label = new QLabel(centralwidget);
        player2_label->setObjectName(QString::fromUtf8("player2_label"));
        player2_label->setFont(font1);
        player2_label->setStyleSheet(QString::fromUtf8(" color: rgb(234, 203, 152)"));

        horizontalLayout_4->addWidget(player2_label);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_4, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));

        gridLayout_2->addWidget(pushButton, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BoardWindow->setCentralWidget(centralwidget);

        retranslateUi(BoardWindow);

        QMetaObject::connectSlotsByName(BoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWindow)
    {
        BoardWindow->setWindowTitle(QCoreApplication::translate("BoardWindow", "MainWindow", nullptr));
        playerTurnLabel->setText(QCoreApplication::translate("BoardWindow", "Player's X turn!", nullptr));
        player1_label->setText(QCoreApplication::translate("BoardWindow", "Player 1", nullptr));
        player2_label->setText(QCoreApplication::translate("BoardWindow", "Player 2", nullptr));
        pushButton->setText(QCoreApplication::translate("BoardWindow", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWindow: public Ui_BoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWINDOW_H
