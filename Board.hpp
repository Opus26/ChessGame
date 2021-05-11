/**
* Déclaration de la classe Board
* \file   Board.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/
#pragma once
#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#include <QObject>
#include <QComboBox>
#include "BoardGame.hpp"
#include <vector>
#pragma pop()
#include <functional>

namespace Ui {
	class Board;
}

class Board : public QObject {
	Q_OBJECT
public:
	Board() {}

	void setSimulation(std::string simulation);
	std::vector<std::tuple<std::string, bool, int>> getPiecesInBoard() { return piecesInBoard_; };
	bool caseIsEmpty(int position);
	bool pieceOnCaseIsWhite(int position);
	void kingIsChess(int position);
	bool kingIsChessMate(int position);
	void isKingInDanger();
	int getCase(std::pair<int, int> pairPosition);
	void play(int actualPosition, int finalPosition);

	int getCount() { return count_; };
	int getPlayerColor() { return count_ % 2; };
	bool getIsGameWon() { return gameIsWon_; };
	void newGame() { board_.resetBoard(); };

signals:
	void changedBoard(bool isChanged);
	void chessMate();
	void chess();
	void newGameSuggestion();

private:
	ChessGame::BoardGame board_;
	std::vector<std::tuple<std::string, bool, int>> piecesInBoard_;
	int count_ = 1;
	bool gameIsWon_ = false;
};