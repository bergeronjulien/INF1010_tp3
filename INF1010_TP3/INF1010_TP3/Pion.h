/**************************************************
* Titre: Travail pratique #3 - Pion.h
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

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
