/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Piece.h"
#include <string>
#include <iostream>

//Constructeur par paramètre
Piece::Piece() {
	std::string id_ = "inconnu";
	std::string couleur_ = "inconnu";
	int positionX_ = 0;
	int positionY_ = 0;
}

Piece::Piece(std::string id, std::string couleur, int positionX, int positionY) {
	id_ = id;
	couleur_ = couleur;
	positionX_ = positionX;
	positionY_ = positionY;
}

Piece::~Piece() {


}

std::string Piece::obtenirId() const {
	return id_;
}

std::string Piece::obtenirCouleur() const {
	return couleur_;
}

int Piece::obtenirPositionX() const {
	return positionX_;
}

int Piece::obtenirPositionY() const {
	return positionY_;
}

void Piece::modifierId(std::string id) {
	id_ = id;
}

void Piece::modifierCouleur(std::string couleur) {
	couleur_ = couleur;
}

void Piece::modifierPositionX(int positionX) {
	positionX_ = positionX;
}

void Piece::modifierPositionY(int positionY) {
	positionY_ = positionY;
}

bool Piece::estMouvementValide(int toX, int toY) const {
	if (((positionX_ != toX) || (positionY_ != toY)) && ((toX >= 0) && (toX <= 7)) && ((toY >= 0) && (toY <= 7)))
		return true;
	else
		std::cout << "Deplacement de la piece non autorise" << endl;

	return false;
}