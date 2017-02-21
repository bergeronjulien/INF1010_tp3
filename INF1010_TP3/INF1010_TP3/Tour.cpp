/**************************************************
* Titre: Travail pratique #3 - Tour.cpp
* Date: 21 f�vrier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#include "Piece.h"
#include "Tour.h"
#include <string>
#include <iostream>

///Constructeur par d�faut
Tour::Tour() {
	
}


/// Initializes une nouvelle instance de la classe Tour
/// param [in] id			identifiant
/// param [in] couleur		La couleur
/// param [in] positionX	La position des abcisses
///	param [in] positionY	La position des ordonn�es
Tour::Tour(const string id, const string couleur, const int positionX, const int positionY) : Piece(id, couleur, positionX, positionY) {
	
}

/// Destructeur
Tour::~Tour() {

}

/// V�rifie si le mouvement est valide
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonn�es
bool Tour::estMouvementValide2(const int toX, const int toY) {
	
	if (!estMouvementValide(toX, toY))
		return false;
	else if (toX == obtenirPositionX() && toY != obtenirPositionY())
		return true;
	else if (toY == obtenirPositionY() && toX != obtenirPositionX())
		return true;

	return false;
}


/// Deplacer � la coordonn�e X sp�cifi�
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonn�es
void Tour::deplacer(const int toX, const int toY) {

	if (estMouvementValide2(toX, toY)) {
		std::cout << "Deplacement de la Tour " << obtenirId() << " de la position (" << obtenirPositionX()
			<< ", " << obtenirPositionY() << ")";

		modifierPositionY(toY); 
		modifierPositionX(toX); 
		std::cout << "a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement de la tour non autorise" << endl;
}