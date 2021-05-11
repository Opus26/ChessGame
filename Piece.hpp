/**
* Definition de classe de Piece
* \file   Piece.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#pragma once
#include <utility>
#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>

namespace ChessGame {

    class Piece {
    public:
        Piece(bool isWhite, std::string name) : isWhite_(isWhite), name_(name) {};
        virtual ~Piece() = default;

        virtual std::vector<int> changePosition(int) { return positions_; };
        virtual std::vector<int> pathTaken(int, int) { return pathTaken_; };

        bool accesFinalCase(int initialPosition, int finalPosition);

        bool getColor() { return isWhite_; }
        std::string getName() { return name_; }

    private:
        std::vector<int> positions_;
        std::vector<int> pathTaken_;
        bool isWhite_ = true;
        std::string name_;
    };
}
