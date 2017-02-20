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

class Pion: public Piece {


public:
	// constructeurs
	Pion();
	Pion(string newId, string newCouleur, int newPositionX, int newPositionY);

	// destructeur
	~Pion();

	bool estMouvementValide2(int toX, int toY) const;

	void deplacer(int toX, int toY);

private:
	bool estPositionInitiale_;

};
#endif
