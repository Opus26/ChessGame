/**
* Déclaration de BoardWindow
* \file   BoardGame.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/

#pragma once
#ifndef BOARDWINDOW_HPP
#define BOARDWINDOW_HPP

#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#include "Board.hpp"
#include <QDrag>
#include <QMimeData>
#include <QGraphicsSceneMouseEvent>
#include <QPaintEvent>
#include <QMainWindow>
#include "ui_boardwindow.h"
#include <QShortcut>
#include <QGraphicsPixmapItem>
#pragma pop()

namespace Ui {
    class BoardWindow;
}

class BoardWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit BoardWindow(int nSimulation, QWidget* parent = nullptr);
    ~BoardWindow();

    void getSimulation(int nSimulation);
    void drawBoard();
    void drawCases(QGraphicsScene* scene);
    void setPlayer1(QString player1);
    void setPlayer2(QString player2);
    void setPlayerTurn(bool isNextTurn);
    void setMiddleLabel(QString messageWhite, QString messageBlack);
    void setWinner();
    void warning();
    void newWindow();
    std::pair<int, int> findCoordinateToDraw(int position);
    void drawPiece(QGraphicsScene* scene, std::string pieceName, bool isWhite, int position);
    void addPieces(QGraphicsScene* scene);

    void movePieceOnBoard();
    void setQPointNull(QPoint& point);

    void drawKing(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord);
    void drawBishop(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord);
    void drawKnight(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord);

    bool playableClick(int x, int y);
    bool isFirstClic();
    void startMove(QPoint& point, std::pair<int, int>& position);
    void finishMove(QPoint& point, std::pair<int, int>& position);
    bool abortMove(int actualPos, int newPos) { return actualPos == newPos; }
    void resetActualAndFinalPositions();

    bool confirmPieceColorForMouvement(std::pair<int, int> position);
    bool compareColorTurn(std::pair<int, int> position);

    std::pair<int, int> convertPixelsToCase(int x, int y);

public slots:
    bool eventFilter(QObject* obj, QEvent* ev);

private slots:
    void on_pushButton_clicked();


private:
    Board board_;
    std::string fileSimulation;
    Ui::BoardWindow* ui_;
    const int CASE_SIZE = 90;
    const int ROW_BORDER = 20, COLUMN_BORDER = 20;
    const int CASE_CENTER = CASE_SIZE / 2;
    const int L_R_BORDER = 30;
    const int T_D_BORDER = 750;
    const bool PLAYER1 = true;
    const bool PLAYER2 = false;

    const int PIECE_WIDTH = 25;
    const int PIECE_CENTER = PIECE_WIDTH / 2;

    std::pair<int, int> actualPosition;
    std::pair<int, int> newPosition;

    QPoint point1_;
    QPoint point2_;

    QColor darkWood_ = QColor(60, 32, 20);
    QColor lightWood_ = QColor(186, 153, 81);
};


#endif // BOARDWINDOW_HPP
