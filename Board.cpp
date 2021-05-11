/**
* Implémentation de Board
* \file   Board.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/

#include "Board.hpp"

void Board::setSimulation(std::string simulation) {
	piecesInBoard_ = board_.fillBoard(simulation);
}

bool Board::caseIsEmpty(int position) {
	for (int i = 0; i < std::ssize(piecesInBoard_); i++) {
		if (std::get<2>(piecesInBoard_[i]) == position)
			return false;
	}
	return true;
}

bool Board::pieceOnCaseIsWhite(int position) {
	for (int i = 0; i < std::ssize(piecesInBoard_); i++) {
		if (std::get<2>(piecesInBoard_[i]) == position)
			return std::get<1>(piecesInBoard_[i]);
	}
	return false;
}

void Board::kingIsChess(int position) {
	if (board_.chessOnActualCase(position) && !kingIsChessMate(position))
		emit chess();
}

bool Board::kingIsChessMate(int position) {
	if (board_.isChessMate(position)) {
		emit chessMate();
		gameIsWon_ = true;
		return true;
	}
	else return false;
}

void Board::isKingInDanger() {
	for (int i = 0; i < std::ssize(piecesInBoard_); i++) {
		if (get<0>(piecesInBoard_[i]) == "King")
			kingIsChess(get<2>(piecesInBoard_[i]));
	}
}

int Board::getCase(std::pair<int, int> pairPosition) {
	return pairPosition.first * 8 + pairPosition.second;
}

void Board::play(int actualPosition, int finalPosition) {
	using namespace ChessGame;
	using namespace std;

	if (!gameIsWon_) {
		board_.movePiece(actualPosition, finalPosition);
		if (board_.getSuccessfulMove()) {
			for (int i = 0; i < ssize(piecesInBoard_); i++) {
				if (get<2>(piecesInBoard_[i]) == finalPosition && actualPosition != finalPosition)
					piecesInBoard_.erase(piecesInBoard_.begin() + i);
			}

			for (int i = 0; i < ssize(piecesInBoard_); i++) {
				if (std::get<2>(piecesInBoard_[i]) == actualPosition)
					get<2>(piecesInBoard_[i]) = finalPosition;
			}
			count_++;
			emit changedBoard(true);
		}
		else
			emit changedBoard(false);
		isKingInDanger();
	}
	else emit newGameSuggestion();
}