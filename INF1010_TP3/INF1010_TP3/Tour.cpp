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

Tour::Tour(const string id, const string couleur, const int positionX, const int positionY): Piece(id, couleur, positionX, positionY) {
	
}

Tour::~Tour() {

}


bool Tour::estMouvementValide2(const int toX, const int toY) {
	
	if (!estMouvementValide(toX, toY))
		return false;
	else if (toX == obtenirPositionX() && toY != obtenirPositionY())
		return true;
	else if (toY == obtenirPositionY() && toX != obtenirPositionX())
		return true;

	return false;
}

void Tour::deplacer(const int toX, const int toY) {

	if (estMouvementValide2(toX, toY)) {
		std::cout << "Deplacement de la Tour " << obtenirId() << " de la position (" << obtenirPositionX()
			<< ", " << obtenirPositionY() << ")";

		modifierPositionY(toY); // NOTE: Tu remplaçais les valeurs trop tôt
		modifierPositionX(toX); // NOTE: Tu avais oublié ton x :'(
		std::cout << "a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement de la tour non autorise" << endl;
}