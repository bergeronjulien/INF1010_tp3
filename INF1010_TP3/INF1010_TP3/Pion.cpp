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

Pion::Pion(Piece* pion) {
	pion_ = pion;
	estPositionInitiale_ = true;
}

Piece Pion::obtenirPiece() const {
	return *pion_;
}

void Pion::modifierPiece(Piece* pion) {
	pion_ = pion;
}

bool Pion::estMouvementValide(int toX, int toY, bool estBlanc) {
	Piece piece;
	if (!piece.estMouvementValide(toX, toY) || toX != piece.obtenirPositionX())
		return false;
	else if (estBlanc) {
		if (estPositionInitiale_ && (toY - piece.obtenirPositionY()) <= 2)
			return true;
		if (!estPositionInitiale_ && (toY - piece.obtenirPositionY()) <= 1)
			return true;
	}
	else if (estPositionInitiale_ && (piece.obtenirPositionY() - toY) <= 2)
		return true;
	else if (!estPositionInitiale_ && (piece.obtenirPositionY() - toY) <= 1)
		return true;
	std::cout << "Deplacement non autorise" << endl;
	return false;
}

void Pion::deplacer(int toX, int toY, bool estBlanc) {
	Piece piece;
	if (estMouvementValide(toX, toY, estBlanc)) {
		piece.modifierPositionY(toY);
		std::cout << "Deplacement du pion de la position (" << piece.obtenirPositionX()
			<< ", " << piece.obtenirPositionY() << ") a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement du Pion non autorise" << endl;
}