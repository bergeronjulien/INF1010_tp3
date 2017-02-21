/**************************************************
* Titre: Travail pratique #3 - Roi.cpp
* Date: 21 f�vrier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#include "Piece.h"
#include "Roi.h"
#include <string>
#include <iostream>

///Constructeur par d�faut
Roi::Roi() {

}

/// Initialise une nouvelle instance de la classe Roi
/// param [in] id			identifiant
/// param [in] couleur		La couleur
/// param [in] positionX	La position des abcisses
///	param [in] positionY	La position des ordonn�es
Roi::Roi(string newId, string newCouleur, int newPositionX, int newPositionY) : Piece(newId, newCouleur, newPositionX, newPositionY) {

}

/// Destructeur
Roi::~Roi() {

}

/// V�rifier si le mouvement est valide
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonn�es
bool Roi::estMouvementValide2(int toX, int toY) const {

	if (!estMouvementValide(toX, toY))
		return false;
	else if (toX == obtenirPositionX() && (toY - 1 == obtenirPositionY() || toY + 1 == obtenirPositionY()))
		return true;
	else if (toX == obtenirPositionY() && (toX - 1 == obtenirPositionX() || toX + 1 == obtenirPositionX()))
		return true;

	std::cout << "Deplacement non autorise" << endl;
	return false;
}

/// D�placer le pion � la position X sp�cifi�e
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonn�es
void Roi::deplacer(int toX, int toY) {

	if (estMouvementValide2(toX, toY)) {
		std::cout << "Deplacement du Roi " << obtenirId() << " de la position (" << obtenirPositionX()
			<< ", " << obtenirPositionY() << ")";

		modifierPositionY(toY); 
		modifierPositionX(toX); 
		std::cout << "a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement non autorise" << endl;
}