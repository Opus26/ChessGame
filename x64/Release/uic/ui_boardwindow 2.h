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
    QGraphicsView *graphicsView_3;
    QSpacerItem *verticalSpacer_2;
    QGraphicsView *graphicsView;
    QLabel *player2_label;
    QLabel *player1_label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *playerTurnLabel;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *restartButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *BoardWindow)
    {
        if (BoardWindow->objectName().isEmpty())
            BoardWindow->setObjectName(QString::fromUtf8("BoardWindow"));
        BoardWindow->resize(956, 873);
        BoardWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));
        centralwidget = new QWidget(BoardWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));

        verticalLayout_7->addWidget(graphicsView_3);


        gridLayout->addLayout(verticalLayout_7, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(780, 764));
        graphicsView->setMaximumSize(QSize(780, 764));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));

        gridLayout->addWidget(graphicsView, 2, 1, 1, 1);

        player2_label = new QLabel(centralwidget);
        player2_label->setObjectName(QString::fromUtf8("player2_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir"));
        font.setPointSize(14);
        font.setItalic(true);
        player2_label->setFont(font);
        player2_label->setStyleSheet(QString::fromUtf8(" color: rgb(234, 203, 152)"));

        gridLayout->addWidget(player2_label, 1, 2, 1, 1);

        player1_label = new QLabel(centralwidget);
        player1_label->setObjectName(QString::fromUtf8("player1_label"));
        player1_label->setFont(font);
        player1_label->setStyleSheet(QString::fromUtf8(" color: rgb(234, 203, 152)"));

        gridLayout->addWidget(player1_label, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        playerTurnLabel = new QLabel(centralwidget);
        playerTurnLabel->setObjectName(QString::fromUtf8("playerTurnLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        playerTurnLabel->setFont(font1);
        playerTurnLabel->setStyleSheet(QString::fromUtf8(" color: rgb(214, 185, 140)"));

        horizontalLayout_2->addWidget(playerTurnLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52) "));

        verticalLayout_6->addWidget(graphicsView_2);


        gridLayout->addLayout(verticalLayout_6, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 2, 1, 1);

        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setMinimumSize(QSize(100, 30));
        restartButton->setMaximumSize(QSize(100, 30));
        restartButton->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));

        gridLayout_2->addWidget(restartButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BoardWindow->setCentralWidget(centralwidget);

        retranslateUi(BoardWindow);
        QObject::connect(restartButton, SIGNAL(clicked()), BoardWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(BoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWindow)
    {
        BoardWindow->setWindowTitle(QCoreApplication::translate("BoardWindow", "MainWindow", nullptr));
        player2_label->setText(QCoreApplication::translate("BoardWindow", "Player 2", nullptr));
        player1_label->setText(QCoreApplication::translate("BoardWindow", "Player 1", nullptr));
        playerTurnLabel->setText(QCoreApplication::translate("BoardWindow", "Player's X turn!", nullptr));
        restartButton->setText(QCoreApplication::translate("BoardWindow", "Quit", nullptr));
        pushButton->setText(QCoreApplication::translate("BoardWindow", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWindow: public Ui_BoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWINDOW_H
