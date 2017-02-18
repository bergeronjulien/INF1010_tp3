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
	roi_ = nullptr;
}

Roi::Roi(Piece* tour) {
	roi_ = tour;
}

Piece Roi::obtenirPiece() const {
	return *roi_;
}

void Roi::modifierPiece(Piece* roi) {
	roi_ = roi;
}

bool Roi::estMouvementValide(int toX, int toY) {
	Piece piece;
	if (!piece.estMouvementValide(toX, toY))
		return false;
	else if (toX == piece.obtenirPositionX() && (toY - 1 == piece.obtenirPositionY() || toY + 1 == piece.obtenirPositionY()))
		return true;
	else if (toX == piece.obtenirPositionY() && (toX - 1 == piece.obtenirPositionX() || toX + 1 == piece.obtenirPositionX()))
		return true;

	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Roi::deplacer(int toX, int toY) {
	Piece piece;
	if (estMouvementValide(toX, toY)) {
		piece.modifierPositionX(toX);
		piece.modifierPositionY(toY);
		std::cout << "Deplacement du roi de la position " << piece.obtenirPositionX()
			<< ", " << piece.obtenirPositionY() << " a la position " << toX << ", " <<
			toY << endl;
	}
	else
		std::cout << "Deplacement non autorise" << endl;
}