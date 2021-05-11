/**
* Implementation des methodes de Piece
* \file   Piece.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/
#include "Piece.hpp"

bool ChessGame::Piece::accesFinalCase(int initialPosition, int finalPosition) {
    std::vector<int> positions = changePosition(initialPosition);
    if (find(positions.begin(), positions.end(), finalPosition) != positions.end())
        return true;
    else return false;
}
