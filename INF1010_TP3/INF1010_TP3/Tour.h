
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
	Tour(string id, string couleur, int positionX, int positionY);

	// destructeur
	~Tour();

	bool estMouvementValide2(int toX, int toY);

	void deplacer(int toX, int toY);

private:

	

};
#endif