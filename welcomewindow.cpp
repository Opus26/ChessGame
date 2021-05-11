/**
* Implementation du Qt welcomewindow
* \file   welcomewindow.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/

#include "welcomewindow.hpp"

int WelcomeWindow::incrementeur_ = 0;

WelcomeWindow::WelcomeWindow(QWidget* parent) :
    QDialog(parent),
    ui_(new Ui::WelcomeWindow)
{
    ui_->setupUi(this);
    ui_->comboBox->addItem("Simulation 1");
    ui_->comboBox->addItem("Simulation 2");
    ui_->comboBox->addItem("Simulation 3");
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui_;
}


void WelcomeWindow::on_pushButton_clicked() {
    QString player1 = ui_->player1_lineEdit->text();
    QString player2 = ui_->player2_lineEdit->text();
    int nSimulation = ui_->comboBox->currentIndex();
    if (incrementeur_ == 0) {
        boardWindow_ = new BoardWindow(nSimulation, this);
        incrementeur_++;
        boardWindow_->show();
        boardWindow_->setPlayer1(player1);
        boardWindow_->setPlayer2(player2);
    }
}