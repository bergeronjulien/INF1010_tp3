/**************************************************
* Titre: Travail pratique #3 - Echiquier.h
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#pragma once
#ifndef ECHIQUIER_H
#define ECHIQUIER_H

//#include "Piece.h"
#include "Pion.h"
#include "Roi.h"
#include "Tour.h"

#include <string>


class Echiquier{

public:
	// Constructeur par defaut
	Echiquier();

	// Destructeur
	~Echiquier();

	// Methodes publiques
	void ajouterRoi(const Roi* unRoi, int position);
	void ajouterTour(const Tour& uneTour);
	void ajouterPion(const Pion& unPion);

	void enleverTour(const string id);
	void enleverPion(const string id);

	void deplacerPiece(string id, int toX, int toY);

	//Méthodes privées
private :
	Pion*   tableauPions_;
	Tour*   tableauTours_;
	Roi     rois_[2];	

	unsigned int compteurPion_;
	unsigned int compteurTour_;

	unsigned int capaciteTableauPion_;
	unsigned int capaciteTableauTour_;

};
#endif