/**
* Definition de classe de Bishop
* \file   Bishop.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/
 
#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>
#include "Piece.hpp"


namespace ChessGame {
    class Bishop : public Piece {
    public:
        Bishop(bool isWhite) : Piece(isWhite, "Bishop") {};

        std::vector<int> changePosition(int position) override;
        std::vector<int> pathTaken(int initialPosition, int finalPosition) override;

        void addPosition(std::vector<int>& moveBishop, int position);

        int rightTopDiagonal(int position, int index);
        int leftTopDiagonal(int position, int index);
        int rightBottomDiagonal(int position, int index);
        int leftBottomDiagonal(int position, int index);

        bool firstColumn(int position);
        bool lastColumn(int position);
        void setBorderLimit(bool& topBorder, bool& bottomBorder);

        bool canMoveTopRight(int position, int index, bool topRightBorder);
        void addTopRightPosition(std::vector<int>& moveBishop, int position, int index, bool& topRightBorder);
        bool canMoveTopLeft(int position, int index, bool topLeftBorder);
        void addTopLeftPosition(std::vector<int>& moveBishop, int position, int index, bool& topLeftBorder);
        bool canMoveBottomRight(int position, int index, bool bottomRightBorder);
        void addBottomRightPosition(std::vector<int>& moveBishop, int position, int index, bool& bottomRightBorder);
        bool canMoveBottomLeft(int position, int index, bool bottomLeftBorder);
        void addBottomLeftPosition(std::vector<int>& moveBishop, int position, int index, bool& bottomLeftBorder);
    };
}
