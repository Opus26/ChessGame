/**
* Implementation des methodes de Boardgame
* \file   BoardGame.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 2 avril 2021
*/

#include "BoardGame.hpp"

ChessGame::BoardGame::BoardGame() : board_(boardGame(SIZE)) {
    for (auto& m : board_)
        m.resize(SIZE);
}

void ChessGame::BoardGame::resetBoard() {
    King::nKing = 0;
}

bool ChessGame::BoardGame::isInside(int position) {
    std::pair<int, int> posRowColumn = findRowAndColumn(position);
    return (posRowColumn.first * 8 + posRowColumn.second >= NCASE_MIN)
        && (posRowColumn.first * 8 + posRowColumn.second <= NCASE_MAX)
        && (posRowColumn.first <= SIZE) && (posRowColumn.second <= SIZE)
        ? true : false;
}


bool ChessGame::BoardGame::squareIsFree(int position) {
    std::pair<int,int> posRowColumn = findRowAndColumn(position);
    return board_[posRowColumn.first][posRowColumn.second] == nullptr ? true : false;
}


std::unique_ptr<ChessGame::Piece> ChessGame::BoardGame::firstClic(int position) {
    std::pair<int, int> posRowCol = findRowAndColumn(position);
    return (isInside(position) && !squareIsFree(position)) ? move(board_[posRowCol.first][posRowCol.second]) : nullptr;
}


std::unique_ptr<ChessGame::Piece> ChessGame::BoardGame::secondClic(int position) {
    return firstClic(position);
}


void ChessGame::BoardGame::insertion(int position, std::unique_ptr<ChessGame::Piece> piece) {
    std::pair<int, int> posRowColumn = findRowAndColumn(position);
    board_[posRowColumn.first][posRowColumn.second] = std::move(piece);
}


void ChessGame::BoardGame::insertNewPiece(int position, std::unique_ptr<ChessGame::Piece> piece) {
    if (squareIsFree(position))
        insertion(position, std::move(piece));
}


bool ChessGame::BoardGame::pathIsFree(std::vector<int> pathTaken) {
    for ([[maybe_unused]] int i = 0; i < std::ssize(pathTaken); i++) {
        if (!squareIsFree(pathTaken[i]))
            return false;
    }
    return true;
}

void ChessGame::BoardGame::validMoveForKing(int initialPosition, int finalPosition, int kingPosition, std::unique_ptr<ChessGame::Piece> obstacle)
{
    if (!chessOnActualCase(kingPosition))
        successfulMove_ = true;
    else {
        std::unique_ptr<Piece> piece = firstClic(finalPosition);
        insertion(initialPosition, std::move(piece));
        if (obstacle)
            insertion(finalPosition, std::move(obstacle));

        successfulMove_ = false;
    }
}

int ChessGame::BoardGame::getPositionKing(bool color) {

    for (int i = 0; i < std::ssize(board_); i++) {
        for (int j = 0; j < std::ssize(board_); j++) {
            if (auto king = dynamic_cast<King*>(board_[i][j].get())) {
                if (king->getColor() == color) {
                    return findPosition(i, j);
                }
            }
        }
    }
    return -1;
}

void ChessGame::BoardGame::movePiece(int initialPosition, int finalPosition) {
    using namespace ChessGame;
    int positionKing;
    std::unique_ptr<Piece> piece = firstClic(initialPosition);

    if (piece && piece->accesFinalCase(initialPosition, finalPosition) && pathIsFree(piece->pathTaken(initialPosition, finalPosition))) {
        if (piece->getName() == "King")
            positionKing = finalPosition;
        else
            positionKing = getPositionKing(piece->getColor());

        std::unique_ptr<Piece> obstacle = secondClic(finalPosition);
        if (obstacle == nullptr) {
            insertion(finalPosition, std::move(piece));
            validMoveForKing(initialPosition, finalPosition, positionKing, nullptr);
        }
        else {
            if (piece->getColor() != obstacle->getColor()) {
                insertion(finalPosition, std::move(piece));
                validMoveForKing(initialPosition, finalPosition, positionKing, std::move(obstacle));
            }
            else {
                insertion(initialPosition, std::move(piece));
                insertion(finalPosition, std::move(obstacle));
                successfulMove_ = false;
            }
        }
    }
    else {
        insertion(initialPosition, std::move(piece));
        successfulMove_ = false;
    }
}

bool ChessGame::BoardGame::chessOnActualCase(int actualCase) {
    std::pair posRowColumn = findRowAndColumn(actualCase);
    color_ = board_[posRowColumn.first][posRowColumn.second]->getColor();
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (isKingInDanger(findPosition(i, j), actualCase))
                return true;
        }
    }
    return false;
}

bool ChessGame::BoardGame::chessOnPossibleCases(int actualCase) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (isKingInDanger(findPosition(i, j), actualCase))
                return true;
        }
    }
    return false;
}

bool ChessGame::BoardGame::findEscape(int escapeCase, int kingPosition) {
    return (escapeCase != kingPosition && !chessOnPossibleCases(escapeCase)) ? true : false;
}

bool ChessGame::BoardGame::color_ = true;

bool ChessGame::BoardGame::isChessMate(int actualCase) {
    using namespace ChessGame;
    if (chessOnActualCase(actualCase)) {
        std::unique_ptr<Piece> king = firstClic(actualCase);
        for (auto i : king->changePosition(actualCase)) {
            if (findEscape(i, actualCase)) {
                insertion(actualCase, std::move(king));
                return false;
            }
        }
        insertion(actualCase, std::move(king));
        return true;
    }
    return false;
}

void ChessGame::BoardGame::addKing(showPiecesInfos& piecesInfos, int position, bool isWhite) {
    try {
        auto king = King(isWhite);
        insertNewPiece(position, std::make_unique<King>(king));
        pieceForShow(piecesInfos, "King", isWhite, position);
    }
    catch (King::InvalidPieceError) {
        std::cout << "Game simulation error : creation of King failed" << std::endl;
    }
}

void ChessGame::BoardGame::addBishop(showPiecesInfos& piecesInfos, int position, bool isWhite) {
    auto bishop = Bishop(isWhite);
    insertNewPiece(position, std::make_unique<Bishop>(bishop));
    pieceForShow(piecesInfos, "Bishop", isWhite, position);
}

void ChessGame::BoardGame::addKnight(showPiecesInfos& piecesInfos, int position, bool isWhite) {
    auto knight = Knight(isWhite);
    insertNewPiece(position, std::make_unique<Knight>(knight));
    pieceForShow(piecesInfos, "Knight", isWhite, position);
}

void ChessGame::BoardGame::pieceForShow(showPiecesInfos& piecesInfos, std::string pieceClass, bool isWhite, int position) {
    piecesInfos.push_back(make_tuple(pieceClass, isWhite, position));
}

void ChessGame::BoardGame::addPiece(showPiecesInfos& piecesInfos, int position, std::string pieceClass, bool isWhite) {
    if (isInside(position)) {
        if (pieceClass == "King")
            addKing(piecesInfos, position, isWhite);
        else if (pieceClass == "Bishop")
            addBishop(piecesInfos, position, isWhite);
        else if (pieceClass == "Knight")
            addKnight(piecesInfos, position, isWhite);
    }
    else std::cout << "Piece's name or piece's position is incorrect: fillBoard() failed to add this piece to the board." << std::endl;
}

std::pair<int, int> ChessGame::BoardGame::findRowAndColumn(int position) {
    return std::make_pair<int, int>(position / 8, position % 8);
}

int ChessGame::BoardGame::findPosition(int row, int column) {
    return row * 8 + column;
}

bool ChessGame::BoardGame::notEndOfFile(std::istream& file) {
    return !(file.eof() || ws(file).eof());
}

showPiecesInfos ChessGame::BoardGame::fillBoard(std::string fileName)
{
    using namespace std;
    int position;
    string pieceClass, color;
    showPiecesInfos piecesInfos;
    ifstream file;
    file.open(fileName);
    if (file.is_open()) {
        while (notEndOfFile(file)) {
            file >> position >> quoted(pieceClass) >> quoted(color);
            if (color == "White" || color == "Black")
                addPiece(piecesInfos, position, pieceClass, color == "White");
            else cout << "Color is incorrect: fillBoard() failed to add this piece to the board." << endl;
        }
        return piecesInfos;
    }
    else cout << "The file " << fileName << " cannot be opened." << endl;
    return piecesInfos;
}

bool ChessGame::BoardGame::isKingInDanger(int piecePosition, int kingPosition) {
    std::unique_ptr<Piece> piece = firstClic(piecePosition);
    if (piece != nullptr && piecePosition != kingPosition && piece->accesFinalCase(piecePosition, kingPosition) && piece->getColor() != color_) {
        if (piece->getName() == "Bishop") {
            if (pathIsFree(piece->pathTaken(piecePosition, kingPosition))) {
                insertion(piecePosition, move(piece));
                return true;
            }
            else {
                insertion(piecePosition, move(piece));
                return false;
            }
        }
        else {
            insertion(piecePosition, move(piece));
            return true;
        }
    }
    else {
        insertion(piecePosition, move(piece));
        return false;
    }
}