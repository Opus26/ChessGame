/**
* Definition de classe de Knight
* \file   Knight.hpp
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

    class Knight : public Piece {
    public:
        Knight(bool isWhite) : Piece(isWhite, "Knight") {};
        std::vector<int> changePosition(int position) override;

        bool leftLongBottom(int position);
        bool leftSmallBottom(int position);
        bool rightLongBottom(int position);
        bool rightSmallBottom(int position);
        bool leftSmallTop(int position);
        bool rightSmallTop(int position);
        bool leftLongTop(int position);
        bool rightLongTop(int position);

        bool farFromLeftBorder(int position);
        bool midFarFromLeftBorder(int position);
        bool farFromRightBorder(int position);
        bool midFarFromRightBorder(int position);

        void addLeftLongBottom(std::vector<int>& moveKnight, int position);
        void addLeftSmallBottom(std::vector<int>& moveKnight, int position);
        void addRightLongBottom(std::vector<int>& moveKnight, int position);
        void addRightSmallBottom(std::vector<int>& moveKnight, int position);
        void addLeftSmallTop(std::vector<int>& moveKnight, int position);
        void addRightSmallTop(std::vector<int>& moveKnight, int position);
        void addLeftLongTop(std::vector<int>& moveKnight, int position);
        void addRightLongTop(std::vector<int>& moveKnight, int position);
    };

}