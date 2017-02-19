/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date:
* Auteur:
*******************************************/

#pragma once

#ifndef PION_H
#define PION_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Pion {


public:
	// constructeurs
	Pion();
	Pion(Piece* pion);

	// destructeur
	~Pion();

	Piece obtenirPiece() const;
	void modifierPiece(Piece* pion);

	bool estMouvementValide(int toX, int toY, bool estBlanc);

	void deplacer(int toX, int toY, bool estBlanc);

private:
	bool estPositionInitiale_;
	Piece* pion_;

};
#endif
