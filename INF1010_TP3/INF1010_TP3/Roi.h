/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date:
* Auteur:
*******************************************/

#pragma once

#ifndef ROI_H
#define ROI_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Roi {


public:
	// constructeurs
	Roi();
	Roi(Piece* roi);

	// destructeur
	~Roi();

	Piece obtenirPiece() const;
	void modifierPiece(Piece* roi);

	bool estMouvementValide(int toX, int toY);

	void deplacer(int toX, int toY);

private:

	Piece* roi_;

};
#endif