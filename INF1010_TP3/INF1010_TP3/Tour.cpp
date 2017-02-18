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
	tour_ = nullptr;
}

Tour::Tour(Piece* tour) {
	tour_ = tour;
}

Piece Tour::obtenirPiece() const {
	return *tour_;
}

void Tour::modifierPiece(Piece* tour) {
	tour_ = tour;
}

bool Tour::estMouvementValide(int toX, int toY) {
	Piece piece;
	if (!piece.estMouvementValide(toX, toY))
		return false;
	else if (toX == piece.obtenirPositionX() && toY != piece.obtenirPositionY())
		return true;
	else if (toY == piece.obtenirPositionY() && toX != piece.obtenirPositionX())
		return true;

	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Tour::deplacer(int toX, int toY) {
	Piece piece;
	if (estMouvementValide(toX, toY)) {
		piece.modifierPositionX(toX);
		piece.modifierPositionY(toY);
		std::cout << "Deplacement de la tour de la position " << piece.obtenirPositionX()
			<< ", " << piece.obtenirPositionY() << " a la position " << toX << ", " <<
			toY << endl;
	}
	else
		std::cout << "Deplacement non autorise" << endl;
}