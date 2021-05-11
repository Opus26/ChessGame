/**
* Implementation des methodes de Bishop
* \file   Bishop.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/
#include "Bishop.hpp"

int ChessGame::Bishop::rightTopDiagonal(int position, int index) { return position + index * 9; }
int ChessGame::Bishop::leftTopDiagonal(int position, int index) { return position + index * 7; }
int ChessGame::Bishop::rightBottomDiagonal(int position, int index) { return position + index * -7; }
int ChessGame::Bishop::leftBottomDiagonal(int position, int index) { return position + index * -9; }

bool ChessGame::Bishop::firstColumn(int position) { return position % 8 == 0 ? true : false; }
bool ChessGame::Bishop::lastColumn(int position) { return position % 8 == 7 ? true : false; }

void ChessGame::Bishop::addPosition(std::vector<int>& moveBishop, int position) { moveBishop.push_back(position); }

void ChessGame::Bishop::setBorderLimit(bool& topBorder, bool& bottomBorder) { topBorder = bottomBorder = false; }


bool ChessGame::Bishop::canMoveTopRight(int position, int index, bool topRightBorder) {
    return (rightTopDiagonal(position, index) <= 64) && (topRightBorder) ? true : false;
}


void ChessGame::Bishop::addTopRightPosition(std::vector<int>& moveBishop, int position, int index, bool& topRightBorder) {
    if (canMoveTopRight(position, index, topRightBorder)) {
        if (lastColumn(rightTopDiagonal(position, index)))
            topRightBorder = false;

        addPosition(moveBishop, rightTopDiagonal(position, index));
    }
}


bool ChessGame::Bishop::canMoveTopLeft(int position, int index, bool topLeftBorder) {
    return (leftTopDiagonal(position, index) < 64) && (topLeftBorder) ? true : false;
}


void ChessGame::Bishop::addTopLeftPosition(std::vector<int>& moveBishop, int position, int index, bool& topLeftBorder) {
    if (canMoveTopLeft(position, index, topLeftBorder)) {
        if (firstColumn(leftTopDiagonal(position, index)))
            topLeftBorder = false;

        addPosition(moveBishop, leftTopDiagonal(position, index));
    }
}


bool ChessGame::Bishop::canMoveBottomRight(int position, int index, bool bottomRightBorder) {
    return (rightBottomDiagonal(position, index) >= 0) && (bottomRightBorder) ? true : false;
}


void ChessGame::Bishop::addBottomRightPosition(std::vector<int>& moveBishop, int position, int index, bool& bottomRightBorder) {
    if (canMoveBottomRight(position, index, bottomRightBorder)) {
        if (lastColumn(rightBottomDiagonal(position, index)))
            bottomRightBorder = false;

        addPosition(moveBishop, rightBottomDiagonal(position, index));
    }
}


bool ChessGame::Bishop::canMoveBottomLeft(int position, int index, bool bottomLeftBorder) {
    return (leftBottomDiagonal(position, index) >= 0) && (bottomLeftBorder) ? true : false;
}


void ChessGame::Bishop::addBottomLeftPosition(std::vector<int>& moveBishop, int position, int index, bool& bottomLeftBorder) {
    if (canMoveBottomLeft(position, index, bottomLeftBorder)) {
        if (firstColumn(leftBottomDiagonal(position, index)))
            bottomLeftBorder = false;

        addPosition(moveBishop, leftBottomDiagonal(position, index));
    }
}

std::vector<int> ChessGame::Bishop::changePosition(int position) {
    using namespace std;
    vector<int> moveBishop;
    addPosition(moveBishop, position);

    bool rightTopBorder = true,
        rightBottomBorder = true,
        leftTopBorder = true,
        leftBottomBorder = true;

    if (firstColumn(position))
        setBorderLimit(leftTopBorder, leftBottomBorder);
    else if (lastColumn(position))
        setBorderLimit(rightTopBorder, rightBottomBorder);

    for (int index = 1; index < 8; ++index) {
        addTopRightPosition(moveBishop, position, index, rightTopBorder);
        addTopLeftPosition(moveBishop, position, index, leftTopBorder);
        addBottomRightPosition(moveBishop, position, index, rightBottomBorder);
        addBottomLeftPosition(moveBishop, position, index, leftBottomBorder);
    }
    return moveBishop;
}

std::vector<int> ChessGame::Bishop::pathTaken(int initialPosition, int finalPosition) {

    std::pair initialPositions = std::make_pair(initialPosition / 8, initialPosition % 8);
    std::pair finalPositions = std::make_pair(finalPosition / 8, finalPosition % 8);
    int nSquares = abs(finalPositions.first - initialPositions.first) - 1;
    int position;
    std::vector<int> pathTaken;

    if ((finalPositions.first > initialPositions.first) && (finalPositions.second > initialPositions.second)) {
        for (int i = 1; i <= nSquares; i++) {
            initialPositions.first += 1, initialPositions.second += 1;
            position = initialPositions.first * 8 + initialPositions.second;
            pathTaken.push_back(position);
        }
    }
    else if ((finalPositions.first > initialPositions.first) && (finalPositions.second < initialPositions.second)) {
        for (int i = 1; i <= nSquares; i++) {
            initialPositions.first += 1, initialPositions.second -= 1;
            position = initialPositions.first * 8 + initialPositions.second;
            pathTaken.push_back(position);
        }
    }
    else if ((finalPositions.first < initialPositions.first) && (finalPositions.second > initialPositions.second)) {
        for (int i = 1; i <= nSquares; i++) {
            initialPositions.first -= 1, initialPositions.second += 1;
            position = initialPositions.first * 8 + initialPositions.second;
            pathTaken.push_back(position);
        }
    }
    else if ((finalPositions.first < initialPositions.first) && (finalPositions.second < initialPositions.second)) {
        for (int i = 1; i <= nSquares; i++) {
            initialPositions.first -= 1, initialPositions.second -= 1;
            position = initialPositions.first * 8 + initialPositions.second;
            pathTaken.push_back(position);
        }
    }
    return pathTaken;
}