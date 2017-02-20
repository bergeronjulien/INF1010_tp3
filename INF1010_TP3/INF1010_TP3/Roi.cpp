/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Piece.h"
#include "Roi.h"
#include <string>
#include <iostream>

Roi::Roi() {

}

Roi::Roi(string newId, string newCouleur, int newPositionX, int newPositionY) : Piece(newId, newCouleur, newPositionX, newPositionY) {

}

Roi::~Roi() {

}


bool Roi::estMouvementValide2(int toX, int toY) const {

	if (!estMouvementValide(toX, toY))
		return false;
	else if (toX == obtenirPositionX() && (toY - 1 == obtenirPositionY() || toY + 1 == obtenirPositionY()))
		return true;
	else if (toX == obtenirPositionY() && (toX - 1 == obtenirPositionX() || toX + 1 == obtenirPositionX()))
		return true;

	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Roi::deplacer(int toX, int toY) {

	if (estMouvementValide2(toX, toY)) {
		std::cout << "Deplacement du Roi " << obtenirId() << " de la position (" << obtenirPositionX()
			<< ", " << obtenirPositionY() << ")";

		modifierPositionY(toY); // NOTE: Tu remplaçais les valeurs trop tôt
		modifierPositionX(toX); // NOTE: Tu avais oublié ton x :'(
		std::cout << "a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement non autorise" << endl;
}