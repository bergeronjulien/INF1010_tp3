/**************************************************
* Titre: Travail pratique #3 - Roi.h
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#pragma once

#ifndef ROI_H
#define ROI_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Roi : public Piece {


public:
	// constructeurs
	Roi();
	Roi(string newId, string newCouleur, int newPositionX, int newPositionY);

	// destructeur
	~Roi();

	bool estMouvementValide2(int toX, int toY) const;
	void deplacer(int toX, int toY);


};
#endif