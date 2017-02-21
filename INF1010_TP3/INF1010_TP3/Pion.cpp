/**************************************************
* Titre: Travail pratique #3 - Pion.cpp
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#include "Piece.h"
#include "Pion.h"
#include <string>
#include <iostream>

///Constructeur par défaut
Pion::Pion() {
	
}

/// Initialise une nouvelle instance de la classe Pion
/// param [in] id			identifiant
/// param [in] couleur		La couleur
/// param [in] positionX	La position des abcisses
///	param [in] positionY	La position des ordonnées
Pion::Pion(string newId, string newCouleur, int newPositionX, int newPositionY) : Piece(newId, newCouleur, newPositionX, newPositionY) {
	estPositionInitiale_ = true;
}

/// Destructeur
Pion::~Pion() {

}

/// Vérifier si le mouvement est valide
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonnées
bool Pion::estMouvementValide2(int toX, int toY) const {

	if (!estMouvementValide(toX, toY) || toX != obtenirPositionX())
		return false;
	else if (obtenirCouleur() == "Blanc") {
		if (estPositionInitiale_ && (toY - obtenirPositionY()) <= 2)
			return true;
		if (!estPositionInitiale_ && (toY - obtenirPositionY()) <= 1)
			return true;
	}
	else if (estPositionInitiale_ && (obtenirPositionY() - toY) <= 2)
		return true;
	else if (!estPositionInitiale_ && (obtenirPositionY() - toY) <= 1)
		return true;

	return false;
}


/// Déplacer le pion à la position X spécifiée
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonnées
void Pion::deplacer(int toX, int toY) {

	if (estMouvementValide2(toX, toY)) {
		estPositionInitiale_ = false;
		
		std::cout << "Deplacement du Pion " << obtenirId() << " de la position (" 
			<< obtenirPositionX() << ", " << obtenirPositionY() << ")";
		
		modifierPositionY(toY); 
		modifierPositionX(toX); 
		std::cout << "a la position (" << toX << ", " <<
			toY << ")" << endl;
	}
	else
		std::cout << "Deplacement du Pion non autorise" << endl;
}