/**
* Definition de classe de BoardGame
* \file   BoardGame.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include <memory>
#include <iomanip>

#include "Piece.hpp"
#include "Knight.hpp"
#include "King.hpp"
#include "Bishop.hpp"


typedef std::vector<std::tuple<std::string, bool, int>> showPiecesInfos;

namespace ChessGame
{
    class BoardGame {
    public:
        typedef std::vector<std::vector<std::unique_ptr<Piece>>> boardGame;

        BoardGame();
        ~BoardGame() { King::nKing = 0; };

        void resetBoard();

        bool squareIsFree(int position);
        bool isInside(int position);

        void insertion(int position, std::unique_ptr<Piece> piece);
        void insertNewPiece(int position, std::unique_ptr<Piece> piece);

        bool pathIsFree(std::vector<int> pathTaken);
        void movePiece(int initialPosition, int finalPosition);
        bool getSuccessfulMove() { return successfulMove_; };

        std::unique_ptr<Piece> firstClic(int position);
        std::unique_ptr<Piece> secondClic(int position);

        bool isChessMate(int actualCase);
        bool findEscape(int escapeCase, int kingPosition);
        bool chessOnActualCase(int actualCase);
        bool chessOnPossibleCases(int testCase);

        std::pair<int, int> findRowAndColumn(int position);
        int findPosition(int row, int column);

        void addPiece(showPiecesInfos& piecesInfos, int position, std::string pieceClass, bool isWhite);
        void addKing(showPiecesInfos& piecesInfos, int position, bool isWhite);
        void addBishop(showPiecesInfos& piecesInfos, int position, bool isWhite);
        void addKnight(showPiecesInfos& piecesInfos, int position, bool isWhite);

        bool notEndOfFile(std::istream& file);

        void pieceForShow(showPiecesInfos& piecesInfos, std::string pieceClass, bool isWhite, int position);
        showPiecesInfos fillBoard(std::string nomFichier);

        void validMoveForKing(int initialPosition, int finalPosition, int kingPosition, std::unique_ptr<ChessGame::Piece> obstacle = nullptr);
        int getPositionKing(bool color);
        bool isKingInDanger(int piecePosition, int kingPosition);
    private:
        const int NCASE_MIN = 0;
        const int NCASE_MAX = 63;
        const int SIZE = 8;
        std::vector<std::vector<std::unique_ptr<Piece>>> board_;
        bool successfulMove_;
        static bool color_;
    };
}