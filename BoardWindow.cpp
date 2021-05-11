/**
* Implémentation des  de BoardWindow
* \file   ChessGameWindow.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/
#include "BoardWindow.hpp"
#include "welcomewindow.hpp"

//    Références des images
//
//    Wikipedia. (2006) Light Knight on transparent square, default size 45x45.[En ligne].Disponible : https://commons.wikimedia.org/wiki/File:Chess_nlt45.svg
//
//    Wikipedia. (2006) Dark knight on transparent square, default size 45x45.[En ligne].Disponible : https ://commons.wikimedia.org/wiki/File:Chess_ndt45.svg 
//
//    Wikipedia. (2006) Dark bishop on transparent square, default size 45x45.[En ligne].Disponible : https ://commons.wikimedia.org/wiki/File:Chess_bdt45.svg
//
//    Wikipedia. (2006) Light bishop on transparent square, default size 45x45.[En ligne].Disponible : https ://commons.wikimedia.org/wiki/File:Chess_blt45.svg
//
//    Wikipedia. (2006) Light King on transparent square, default size 45x45.[En ligne].Disponible : https ://commons.wikimedia.org/wiki/File:Chess_klt45.svg
//
//    Wikipedia. (2006) Dark king on transparent square, default size 45x45.[En ligne].Disponible : https ://fr.m.wikipedia.org/wiki/Fichier:Chess_kdt45.svg
//
//    Canva. (2020) Image adaptée par Jean Christophe Veilleux. [En Ligne]. Créée avec : https://www.canva.com/photos/


BoardWindow::BoardWindow(int nSimulation, QWidget* parent) :
    QMainWindow(parent),
    ui_(new Ui::BoardWindow)
{
    getSimulation(nSimulation);
    board_.setSimulation(fileSimulation);
    ui_->setupUi(this);
    ui_->graphicsView->viewport()->installEventFilter(this);

    this->setWindowState(Qt::WindowFullScreen);
    this->setPlayerTurn(true);
    QObject::connect(&board_, &Board::changedBoard, this, &BoardWindow::setPlayerTurn);
    QObject::connect(&board_, &Board::chess, this, &BoardWindow::warning);
    QObject::connect(&board_, &Board::chessMate, this, &BoardWindow::setWinner);
    QObject::connect(&board_, &Board::changedBoard, this, &BoardWindow::drawBoard);
    QObject::connect(&board_, &Board::newGameSuggestion, this, &BoardWindow::newWindow);

    drawBoard();
}

BoardWindow::~BoardWindow()
{
    delete ui_;
}

void BoardWindow::drawBoard() {
    QGraphicsScene* scene;
    scene = new QGraphicsScene(this);
    ui_->graphicsView->setScene(scene);
    ui_->graphicsView->setFrameStyle(0);

    QBrush darkWoodBrush(darkWood_);
    QBrush lightWoodBrush(lightWood_);
    QPen darkWoodBorderPen(darkWood_);
    QPen lightWoodPen(lightWood_);

    darkWoodBorderPen.setWidth(4);

    scene->addRect(0, 0, 760, 760, lightWoodPen, lightWoodBrush);
    scene->addRect(18, 18, 724, 724, darkWoodBorderPen, darkWoodBrush);
    drawCases(scene);
    addPieces(scene);
}

void BoardWindow::drawCases(QGraphicsScene* scene) {
    QBrush caseColor(Qt::black);
    QColor darkWood_ = QColor(60, 32, 20);
    QColor lightWood_ = QColor(186, 153, 81);
    QPen darkWoodPen(darkWood_);


    int x = ROW_BORDER, y = COLUMN_BORDER;
    bool lightCase = true;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (lightCase) {
                caseColor.setColor(lightWood_);
                lightCase = false;
            }
            else {
                caseColor.setColor(darkWood_);
                lightCase = true;
            }
            scene->addRect(x, y, CASE_SIZE, CASE_SIZE, darkWoodPen, caseColor);
            x += CASE_SIZE;
        }
        x = ROW_BORDER;
        y += CASE_SIZE;
        if (lightCase)
            lightCase = false;
        else
            lightCase = true;
    }
}

void BoardWindow::setPlayer1(QString player1) {
    ui_->player1_label->setText(player1);
}

void BoardWindow::setPlayer2(QString player2) {
    ui_->player2_label->setText(player2);
}

void BoardWindow::getSimulation(int nSimulation) {
    using namespace std;
    vector<string> filesSimulation{ "gameSimulation1.txt", "gameSimulation2.txt", "gameSimulation3.txt" };
    fileSimulation = filesSimulation[nSimulation];
}

void BoardWindow::setMiddleLabel(QString messageWhite, QString messageBlack) {
    if (board_.getCount() % 2 == PLAYER1)
        ui_->playerTurnLabel->setText(messageWhite);
    else if (board_.getCount() % 2 == PLAYER2)
        ui_->playerTurnLabel->setText(messageBlack);
}


void BoardWindow::setPlayerTurn(bool isNextTurn) {
    if (isNextTurn) {
        setMiddleLabel("White's turn!", "Black's turn!");
    }
    else if (!board_.getIsGameWon()) ui_->playerTurnLabel->setText("Try Again!");
}

void BoardWindow::warning() {
    setMiddleLabel("Chess on white king!", "Chess on black king!");
}

void BoardWindow::setWinner() {
    setMiddleLabel("Black wins!", "White wins!");
}

void BoardWindow::newWindow() {
    ui_->playerTurnLabel->setText("The game is done. Please return to the home dialog.");
}

std::pair<int, int> BoardWindow::findCoordinateToDraw(int position)
{
    int row = position / 8, column = position % 8;

    int coord_x = COLUMN_BORDER + column * CASE_SIZE + PIECE_CENTER;
    int coord_y = ROW_BORDER + row * CASE_SIZE + PIECE_CENTER;
    return std::make_pair(coord_x, coord_y);
}

void BoardWindow::drawKing(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord) {
    if (isWhite) {
        QGraphicsPixmapItem* whiteKing = scene->addPixmap(QPixmap("ChessImages/white_king.png"));
        whiteKing->setPos(coord.first, coord.second);
    }
    else {
        QGraphicsPixmapItem* blacKing = scene->addPixmap(QPixmap("ChessImages/black_king.png"));
        blacKing->setPos(coord.first, coord.second);
    }
}

void BoardWindow::drawBishop(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord) {
    if (isWhite) {
        QGraphicsPixmapItem* whiteBishop = scene->addPixmap(QPixmap("ChessImages/white_bishop.png"));
        whiteBishop->setPos(coord.first, coord.second);
    }
    else {
        QGraphicsPixmapItem* blackBishop = scene->addPixmap(QPixmap("ChessImages/black_bishop.png"));
        blackBishop->setPos(coord.first, coord.second);
    }
}


void BoardWindow::drawKnight(QGraphicsScene* scene, bool isWhite, std::pair<int, int> coord) {
    if (isWhite) {
        QGraphicsPixmapItem* whiteKnight = scene->addPixmap(QPixmap("ChessImages/white_knight.png"));
        whiteKnight->setPos(coord.first, coord.second);
    }
    else {
        QGraphicsPixmapItem* blackKnight = scene->addPixmap(QPixmap("ChessImages/black_knight.png"));
        blackKnight->setPos(coord.first, coord.second);
    }
}

void BoardWindow::drawPiece(QGraphicsScene* scene, std::string pieceName, bool isWhite, int position) {
    using namespace std;
    QBrush pieceColorBrush(Qt::black);
    QPen pieceColorPen(Qt::black);
    if (isWhite) {
        pieceColorBrush.setColor(Qt::white);
        pieceColorPen.setColor(Qt::white);
    }

    pair coord = findCoordinateToDraw(position);

    if (pieceName == "King")
        drawKing(scene, isWhite, coord);
    else if (pieceName == "Bishop")
        drawBishop(scene, isWhite, coord);
    else if (pieceName == "Knight")
        drawKnight(scene, isWhite, coord);
}

void BoardWindow::addPieces(QGraphicsScene* scene)
{
    for (int i = 0; i < ssize(board_.getPiecesInBoard()); i++) {
        drawPiece(scene, get<0>(board_.getPiecesInBoard()[i]), get<1>(board_.getPiecesInBoard()[i]), get<2>(board_.getPiecesInBoard()[i]));
    }
}

void BoardWindow::resetActualAndFinalPositions() {
    actualPosition = std::make_pair(0, 0);
    newPosition = std::make_pair(0, 0);
    setQPointNull(point1_);
    setQPointNull(point2_);
}

void BoardWindow::movePieceOnBoard() {
    if (!abortMove(board_.getCase(actualPosition), board_.getCase(newPosition)))
        board_.play(board_.getCase(actualPosition), board_.getCase(newPosition));
    else if (!board_.getIsGameWon()) ui_->playerTurnLabel->setText("Try Again!");
    resetActualAndFinalPositions();
}

std::pair<int, int> BoardWindow::convertPixelsToCase(int x, int y)
{
    int column = (x - L_R_BORDER) / CASE_SIZE;
    int row = (y - L_R_BORDER) / CASE_SIZE;
    return std::make_pair(row, column);
}


bool BoardWindow::playableClick(int x, int y) {
    return (x > L_R_BORDER) && (x < T_D_BORDER) && (y > L_R_BORDER) && (y < T_D_BORDER) ? true : false;
}


void BoardWindow::setQPointNull(QPoint& point) {
    point.setX(0);
    point.setY(0);
}

bool BoardWindow::isFirstClic() {
    return point1_.isNull() ? true : false;
}

bool BoardWindow::compareColorTurn(std::pair<int, int> pos) {
    return (board_.getPlayerColor() == board_.pieceOnCaseIsWhite(board_.getCase(pos))) ? true : false;
}

bool BoardWindow::confirmPieceColorForMouvement(std::pair<int, int> pos) {
    return (!board_.caseIsEmpty(board_.getCase(pos)) && compareColorTurn(pos)) ? true : false;
}

void BoardWindow::startMove(QPoint& point, std::pair<int, int>& pos) {
    pos = convertPixelsToCase(point.x(), point.y());
    if (confirmPieceColorForMouvement(pos) && playableClick(point.x(), point.y()) && !board_.getIsGameWon())
        ui_->playerTurnLabel->setText("Choose destination!");
    else if (!board_.getIsGameWon()) {
        ui_->playerTurnLabel->setText("Wrong Piece!");
        setQPointNull(point);
    }
}

void BoardWindow::finishMove(QPoint& point, std::pair<int, int>& pos) {
    pos = convertPixelsToCase(point.x(), point.y());
    if (playableClick(point.x(), point.y()))
        movePieceOnBoard();
    else
        setQPointNull(point);
}

bool BoardWindow::eventFilter(QObject* obj, QEvent* event) {
    if (obj == ui_->graphicsView->viewport() && event->type() == QEvent::MouseButtonPress) {
        QMouseEvent* mEvent = (QMouseEvent*)event;
        if (isFirstClic()) {
            point1_ = mEvent->pos();
            startMove(point1_, actualPosition);
        }
        else {
            point2_ = mEvent->pos();
            finishMove(point2_, newPosition);
        }
    }
    return false;
}

void BoardWindow::on_pushButton_clicked() {
    hide();
    board_.newGame();
    WelcomeWindow::incrementeur_--;
}
