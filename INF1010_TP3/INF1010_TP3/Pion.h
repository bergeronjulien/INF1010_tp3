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
	Pion(string newId, string newCouleur, int newPositionX, int newPositionY) : Piece(newId, newCouleur, newPositionX, newPositionY) { };

	// destructeur
	~Pion();

	bool estMouvementValide2(int toX, int toY, bool estBlanc);

	void deplacer(int toX, int toY, bool estBlanc);

private:
	bool estPositionInitiale_;
	Piece* pion_;

};
#endif
