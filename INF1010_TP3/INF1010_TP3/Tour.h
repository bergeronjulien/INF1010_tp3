
/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date:
* Auteur:
*******************************************/

#pragma once

#ifndef TOUR_H
#define TOUR_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Tour {


public:
	// constructeurs
	Tour();
	Tour(Piece* tour);

	// destructeur
	~Tour();

	Piece obtenirPiece() const;
	void modifierPiece(Piece* tour);

	bool estMouvementValide(int toX, int toY);

	void deplacer(int toX, int toY);

private:

	Piece* tour_;

};
#endif