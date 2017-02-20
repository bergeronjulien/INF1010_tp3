
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

class Tour: public Piece { // NOTE: Tu dois définir que Tour est une extension de pièce. 


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