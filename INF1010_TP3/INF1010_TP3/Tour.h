/**************************************************
* Titre: Travail pratique #3 - Tour.h
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#pragma once

#ifndef TOUR_H
#define TOUR_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Tour: public Piece { 


public:
	// constructeurs
	Tour();
	Tour(const string id, const string couleur, const int positionX, const int positionY);

	// destructeur
	~Tour();

	bool estMouvementValide2(const int toX, const int toY);

	void deplacer(const int toX, const int toY);

private:

	

};
#endif