/**
* Definition de classe de King
* \file   King.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#pragma once
#include <stdexcept>
#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>
#include "Piece.hpp"

namespace ChessGame {
    class King : public Piece {
    public:
        static int nKing;
        King(bool isWhite) :Piece(isWhite, "King") {
            if (nKing > 1)
                throw InvalidPieceError("Only two kings are allowed : creation failed");
            nKing++;
        }

        class InvalidPieceError : public std::logic_error {
        public: using logic_error::logic_error;
        };

        std::vector<int> changePosition(int position) override;

        void addPosition(std::vector<int>& moveKing, int position);

        void addTopLeft(std::vector<int>& moveKing, int position);
        void addTop(std::vector<int>& moveKing, int position);
        void addTopRight(std::vector<int>& moveKing, int position);

        void addLeft(std::vector<int>& moveKing, int position);
        void addRight(std::vector<int>& moveKing, int position);

        void addLeftBottom(std::vector<int>& moveKing, int position);
        void addBottom(std::vector<int>& moveKing, int position);
        void addRightBottom(std::vector<int>& moveKing, int position);

        bool notTopRow(int position);
        bool notBottomRow(int position);
        bool lastColumn(int position);
        bool firstColumn(int position);

        void addPositions_LastColumn_NotTopRow(std::vector<int>& moveKing, int position);
        void addPositions_LastColumn_NotBottomRow(std::vector<int>& moveKing, int position);
        void addPositions_LastColumn(std::vector<int>& moveKing, int position);

        void addPositions_FirstColumn_NotTopRow(std::vector<int>& moveKing, int position);
        void addPositions_FirstColumn_NotBottomRowRow(std::vector<int>& moveKing, int position);
        void addPositions_FirstColumn(std::vector<int>& moveKing, int position);

        void addPositions_OtherColumns_NotTopRow(std::vector<int>& moveKing, int position);
        void addPositions_OtherColumns_NotBottomRow(std::vector<int>& moveKing, int position);
        void addPositions_OtherColumns(std::vector<int>& moveKing, int position);
    };
}