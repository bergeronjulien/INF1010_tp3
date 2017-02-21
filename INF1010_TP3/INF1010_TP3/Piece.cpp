/**************************************************
* Titre: Travail pratique #3 - Piece.cpp
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/
#include "Piece.h"
#include <string>
#include <iostream>

///Constructeur par paramètres
Piece::Piece() {
	std::string id_ = "inconnu";
	std::string couleur_ = "inconnu";
	int positionX_ = 0;
	int positionY_ = 0;
}

///	Initialise une nouvelle instance de la classe Piece
/// param [in] id			identifiant
/// param [in] couleur		La couleur
/// param [in] positionX	La position des abcisses
///	param [in] positionY	La position des ordonnées
Piece::Piece(std::string id, std::string couleur, int positionX, int positionY) {
	id_ = id;
	couleur_ = couleur;
	positionX_ = positionX;
	positionY_ = positionY;
}

///Destructeur
Piece::~Piece() {


}


/// Obtenir l'identifiant.
/// return id_
std::string Piece::obtenirId() const {
	return id_;
}

/// Obtenir la couleur.
/// return couleur_
std::string Piece::obtenirCouleur() const {
	return couleur_;
}

/// Obtenir position en X
/// Return positionX_
int Piece::obtenirPositionX() const {
	return positionX_;
}

/// Obtenir position en Y
/// Return positionY_
int Piece::obtenirPositionY() const {
	return positionY_;
}

/// Modifier l'identifiant
/// param [in] id		L'identifiant
void Piece::modifierId(std::string id) {
	id_ = id;
}

/// Modifier la couleur.
/// param [in] couleur	La couleur
void Piece::modifierCouleur(std::string couleur) {
	couleur_ = couleur;
}


///	Modifier la position sur les abscisses
/// param [in] positionX		Position sur l'axe des abcisses
void Piece::modifierPositionX(int positionX) {
	positionX_ = positionX;
}

///	Modifier la position sur les abscisses
/// param [in] positionY		Position sur l'axe des ordonnées
void Piece::modifierPositionY(int positionY) {
	positionY_ = positionY;
}


/// Vérifier si le mouvement est valide
/// param [in] toX		Position de destination sur l'axe des abcisses
/// param [in] toY		Position de destination sur l'axe des ordonnées
bool Piece::estMouvementValide(int toX, int toY) const {
	if (((positionX_ != toX) || (positionY_ != toY)) && ((toX >= 0) && (toX <= 7)) && ((toY >= 0) && (toY <= 7)))
		return true;
	else
		std::cout << "Deplacement de la piece non autorise" << endl;

	return false;
}