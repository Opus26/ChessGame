/**
* Implementation des methodes de King
* \file   King.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#include "King.hpp"

int ChessGame::King::nKing = 0;


void ChessGame::King::addPosition(std::vector<int>& moveKing, int position) { moveKing.push_back(position); }

void ChessGame::King::addTopLeft(std::vector<int>& moveKing, int position) { moveKing.push_back(position + 7); }
void ChessGame::King::addTop(std::vector<int>& moveKing, int position) { moveKing.push_back(position + 8); }
void ChessGame::King::addTopRight(std::vector<int>& moveKing, int position) { moveKing.push_back(position + 9); }

void ChessGame::King::addLeft(std::vector<int>& moveKing, int position) { moveKing.push_back(position - 1); }
void ChessGame::King::addRight(std::vector<int>& moveKing, int position) { moveKing.push_back(position + 1); }

void ChessGame::King::addLeftBottom(std::vector<int>& moveKing, int position) { moveKing.push_back(position - 9); }
void ChessGame::King::addBottom(std::vector<int>& moveKing, int position) { moveKing.push_back(position - 8); }
void ChessGame::King::addRightBottom(std::vector<int>& moveKing, int position) { moveKing.push_back(position - 7); }


bool ChessGame::King::notTopRow(int position) { return position + 8 < 64 ? true : false; }
bool ChessGame::King::notBottomRow(int position) { return position - 8 > 0 ? true : false; }

bool ChessGame::King::lastColumn(int position) { return position % 8 == 7 ? true : false; }
bool ChessGame::King::firstColumn(int position) { return position % 8 == 0 ? true : false; }


void ChessGame::King::addPositions_LastColumn_NotTopRow(std::vector<int>& moveKing, int position) {
    addTopLeft(moveKing, position);
    addTop(moveKing, position);
}

void ChessGame::King::addPositions_LastColumn_NotBottomRow(std::vector<int>& moveKing, int position) {
    addLeftBottom(moveKing, position);
    addBottom(moveKing, position);
}

void ChessGame::King::addPositions_LastColumn(std::vector<int>& moveKing, int position) {
    if (notTopRow(position))
        addPositions_LastColumn_NotTopRow(moveKing, position);
    if (notBottomRow(position))
        addPositions_LastColumn_NotBottomRow(moveKing, position);
    addLeft(moveKing, position);
}

void ChessGame::King::addPositions_FirstColumn_NotTopRow(std::vector<int>& moveKing, int position) {
    addTopRight(moveKing, position);
    addTop(moveKing, position);
}

void ChessGame::King::addPositions_FirstColumn_NotBottomRowRow(std::vector<int>& moveKing, int position) {
    addBottom(moveKing, position);
    addRightBottom(moveKing, position);
}

void ChessGame::King::addPositions_FirstColumn(std::vector<int>& moveKing, int position) {
    if (notTopRow(position))
        addPositions_FirstColumn_NotTopRow(moveKing, position);
    if (notBottomRow(position))
        addPositions_FirstColumn_NotBottomRowRow(moveKing, position);
    addRight(moveKing, position);
}

void ChessGame::King::addPositions_OtherColumns_NotTopRow(std::vector<int>& moveKing, int position) {
    addTopRight(moveKing, position);
    addTop(moveKing, position);
    addTopLeft(moveKing, position);
}

void ChessGame::King::addPositions_OtherColumns_NotBottomRow(std::vector<int>& moveKing, int position) {
    addLeftBottom(moveKing, position);
    addBottom(moveKing, position);
    addRightBottom(moveKing, position);
}

void ChessGame::King::addPositions_OtherColumns(std::vector<int>& moveKing, int position) {
    if (notTopRow(position))
        addPositions_OtherColumns_NotTopRow(moveKing, position);
    if (notBottomRow(position))
        addPositions_OtherColumns_NotBottomRow(moveKing, position);
    addLeft(moveKing, position);
    addRight(moveKing, position);
}

std::vector<int> ChessGame::King::changePosition(int position) {
    using namespace std;
    vector<int> moveKing;
    addPosition(moveKing, position);

    if (lastColumn(position))
        addPositions_LastColumn(moveKing, position);
    else if (firstColumn(position))
        addPositions_FirstColumn(moveKing, position);
    else
        addPositions_OtherColumns(moveKing, position);

    return moveKing;
}