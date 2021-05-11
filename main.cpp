/**
* Programme qui teste les m�thodes de BoardGame: simule un jeu d'�chec
* \file   main.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cr�� le 2 avril 2021
*/

#include "BoardGame.hpp"
#include "BoardWindow.hpp"
#include "welcomewindow.hpp"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

#include <QApplication>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>
#include <sstream>
#include "cppitertools/range.hpp"
#include "cppitertools/enumerate.hpp"
#include "gsl/span"
#include <forward_list>
#include <numeric>
#include <iterator>
#include <vector>
#include <set>
#include <map>
#include <functional>
#include <unordered_map>
#include <algorithm>
#include <memory>

#if __has_include("bibliotheque_cours.hpp")
#include "bibliotheque_cours.hpp"
#define BIBLIOTHEQUE_COURS_INCLUS
using bibliotheque_cours::cdbg;
#else
auto& cdbg = clog;
#endif

#if __has_include("verification_allocation.hpp")
#include "verification_allocation.hpp"
#include "debogage_memoire.hpp"
#endif

void initialiserBibliothequeCours([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
	#ifdef BIBLIOTHEQUE_COURS_INCLUS
	bibliotheque_cours::activerCouleursAnsi(); 
	
	bibliotheque_cours::executerGoogleTest(argc, argv);
	#endif
}

int main(int argc, char* argv[]) {
	bibliotheque_cours::VerifierFuitesAllocations verifierFuitesAllocations;
	QApplication app(argc, argv);
	initialiserBibliothequeCours(argc, argv);

	QSplashScreen splash(QPixmap("ChessImages/INF1015.png"));
	splash.show();
	QTimer::singleShot(2500, &splash, SLOT(close()));

	WelcomeWindow w;
	w.show();
	return app.exec();

}