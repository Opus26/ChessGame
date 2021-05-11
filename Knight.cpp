/**
* Implementation des methodes de Knight
* \file   Knight.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#include "Knight.hpp"

bool ChessGame::Knight::leftLongBottom(int position) { return (position + 8) < 64 ? true : false; }
bool ChessGame::Knight::leftSmallBottom(int position) { return (position + 16) <= 63 ? true : false; }
bool ChessGame::Knight::rightLongBottom(int position) { return (position + 10) <= 63 ? true : false; }
bool ChessGame::Knight::rightSmallBottom(int position) { return (position + 17) <= 63 ? true : false; }

bool ChessGame::Knight::leftSmallTop(int position) { return (position - 17) >= 0 ? true : false; }
bool ChessGame::Knight::leftLongTop(int position) { return (position - 10) >= 0 ? true : false; }
bool ChessGame::Knight::rightSmallTop(int position) { return (position - 16) >= 0 ? true : false; }
bool ChessGame::Knight::rightLongTop(int position) { return (position - 8) >= 0 ? true : false; }

bool ChessGame::Knight::farFromLeftBorder(int position) { return (position % 8 >= 2) ? true : false; }
bool ChessGame::Knight::midFarFromLeftBorder(int position) { return (position % 8 >= 1) ? true : false; }
bool ChessGame::Knight::farFromRightBorder(int position) { return (position % 8 <= 5) ? true : false; }
bool ChessGame::Knight::midFarFromRightBorder(int position) { return (position % 8 <= 6) ? true : false; }


void ChessGame::Knight::addLeftLongBottom(std::vector<int>& moveKnight, int position) {
    if (leftLongBottom(position) && farFromLeftBorder(position))
        moveKnight.push_back(position + 6);
}

void ChessGame::Knight::addLeftSmallBottom(std::vector<int>& moveKnight, int position) {
    if (leftSmallBottom(position) && midFarFromLeftBorder(position))
        moveKnight.push_back(position + 15);
}

void ChessGame::Knight::addRightLongBottom(std::vector<int>& moveKnight, int position) {
    if (rightLongBottom(position) && farFromRightBorder(position))
        moveKnight.push_back(position + 10);
}

void ChessGame::Knight::addRightSmallBottom(std::vector<int>& moveKnight, int position) {
    if (rightSmallBottom(position) && midFarFromRightBorder(position))
        moveKnight.push_back(position + 17);
}

void ChessGame::Knight::addLeftSmallTop(std::vector<int>& moveKnight, int position) {
    if (leftSmallTop(position) && midFarFromLeftBorder(position))
        moveKnight.push_back(position - 17);
}

void ChessGame::Knight::addRightSmallTop(std::vector<int>& moveKnight, int position) {
    if (rightSmallTop(position) && midFarFromRightBorder(position))
        moveKnight.push_back(position - 15);
}

void ChessGame::Knight::addLeftLongTop(std::vector<int>& moveKnight, int position) {
    if (leftLongTop(position) && farFromLeftBorder(position))
        moveKnight.push_back(position - 10);
}

void ChessGame::Knight::addRightLongTop(std::vector<int>& moveKnight, int position) {
    if (rightLongTop(position) && farFromRightBorder(position))
        moveKnight.push_back(position - 6);
}

std::vector<int> ChessGame::Knight::changePosition(int position) {
    std::vector<int> moveKnight;

    moveKnight.push_back(position);
    addLeftLongBottom(moveKnight, position);
    addRightLongBottom(moveKnight, position);
    addLeftSmallBottom(moveKnight, position);
    addRightSmallBottom(moveKnight, position);
    addLeftSmallTop(moveKnight, position);
    addRightSmallTop(moveKnight, position);
    addLeftLongTop(moveKnight, position);
    addRightLongTop(moveKnight, position);

    return moveKnight;
}