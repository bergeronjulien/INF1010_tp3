/**************************************************
* Titre: Travail pratique #3 - Piece.h
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#pragma once

#ifndef PIECE_H
#define PIECE_H


#include <iostream>
#include <string>

using namespace std;

class Piece {


public :
	// constructeurs
	Piece();
	Piece(string id, string couleur, int positionX, int positionY); 

	// destructeur
	~Piece();

	string obtenirId() const;
	void modifierId(string id);

	string obtenirCouleur() const;
	void modifierCouleur(string id);

	int obtenirPositionX() const;	
	void modifierPositionX(int x);

	int obtenirPositionY() const;
	void modifierPositionY(int y);

	bool estMouvementValide(int toX, int toY) const;


private:

	string id_;
	string couleur_;
	int positionX_;
	int positionY_;

};
#endif