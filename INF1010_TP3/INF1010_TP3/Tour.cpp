/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Piece.h"
#include "Tour.h"
#include <string>
#include <iostream>

Tour::Tour() {
	
}

Tour::Tour(string id, string couleur, int positionX, int positionY): Piece(id, couleur, positionX, positionY) {
	
}

Tour::~Tour() {

}


bool Tour::estMouvementValide2(int toX, int toY) {
	
	if (!estMouvementValide(toX, toY))
		return false;
	else if (toX == obtenirPositionX() && toY != obtenirPositionY())
		return true;
	else if (toY == obtenirPositionY() && toX != obtenirPositionX())
		return true;

	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Tour::deplacer(int toX, int toY) {

	if (estMouvementValide2(toX, toY)) {
		modifierPositionX(toX);
		modifierPositionY(toY);
		std::cout << "Deplacement de la tour de la position " << obtenirPositionX()
			<< ", " << obtenirPositionY() << " a la position " << toX << ", " <<
			toY << endl;
	}
	else
		std::cout << "Deplacement non autorise" << endl;
}