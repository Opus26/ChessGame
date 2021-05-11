/**
* Déclaration de la classe WelcomeWindow
* \file   welcomewindow.hpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cree le 12 avril 2021
*/

#ifndef WELCOMEWINDOW_HPP
#define WELCOMEWINDOW_HPP

#pragma once
#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#include <QDialog>
#include "ui_welcomewindow.h"
#include "BoardWindow.hpp"
#pragma pop()


namespace Ui {
    class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget* parent = nullptr);
    ~WelcomeWindow();
    static int incrementeur_;

private slots:
    void on_pushButton_clicked();

private:
    Ui::WelcomeWindow* ui_;
    BoardWindow* boardWindow_;
};

#endif // WELCOMEWINDOW_HPP
