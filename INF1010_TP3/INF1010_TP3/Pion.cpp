/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Piece.h"
#include "Pion.h"
#include <string>
#include <iostream>

Pion::Pion() {
	pion_ = nullptr;
}

Pion::Pion(string newId, string newCouleur, int newPositionX, int newPositionY) : Piece(newId, newCouleur, newPositionX, newPositionY) {
	estPositionInitiale_ = true;
}

Pion::~Pion() {

}

bool Pion::estMouvementValide2(int toX, int toY, bool estBlanc) {

	if (!estMouvementValide(toX, toY) || toX != obtenirPositionX())
		return false;
	else if (estBlanc) {
		if (estPositionInitiale_ && (toY - obtenirPositionY()) <= 2)
			return true;
		if (!estPositionInitiale_ && (toY - obtenirPositionY()) <= 1)
			return true;
	}
	else if (estPositionInitiale_ && (obtenirPositionY() - toY) <= 2)
		return true;
	else if (!estPositionInitiale_ && (obtenirPositionY() - toY) <= 1)
		return true;
	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Pion::deplacer(int toX, int toY, bool estBlanc) {

	if (estMouvementValide2(toX, toY, estBlanc)) {
		modifierPositionY(toY);
		std::cout << "Deplacement du pion de la position (" << obtenirPositionX()
			<< ", " << obtenirPositionY() << ") a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement du Pion non autorise" << endl;
}