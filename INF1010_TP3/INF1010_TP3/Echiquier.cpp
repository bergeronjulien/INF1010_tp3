/**************************************************
* Titre: Travail pratique #3 - Echiquier.cpp
* Date: 21 février 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

#include "Echiquier.h"
#include "Tour.h"
#include "Pion.h"
#include "Roi.h"

#include <string>
#include <iostream>

///Constructeur par paramètre
Echiquier::Echiquier() {
	capaciteTableauPion_ = 16;
	capaciteTableauTour_ = 16;
	tableauPions_ = new Pion[capaciteTableauPion_];
	tableauTours_ = new Tour[capaciteTableauTour_];
	//rois_[2] = {};

	compteurPion_ = 0;
	compteurTour_ = 0;

	
}

/// Destructeur
Echiquier::~Echiquier() {
	delete tableauPions_;
	delete tableauTours_;
}

///	Ajouter un roi sur l'échiquier
/// param [in] unRoi		Roi à ajouter
/// param [in] position		Position initiale du roi
void Echiquier::ajouterRoi(const Roi* unRoi, int position) { 
	rois_[position] = *unRoi;
}

/// Ajouter une tour.
/// param [in] uneTour		Tour à ajouter
void Echiquier::ajouterTour(const Tour& uneTour) {
	tableauTours_[compteurTour_] = uneTour;
	compteurTour_++;
}

///Ajouter pion
/// param [in] unPion		Pion à ajouter
void Echiquier::ajouterPion(const Pion& unPion) {
	tableauPions_[compteurPion_] = unPion;
	compteurPion_++;
}

/// Deplacer la piece.
/// param [in] id		L'identifiant
/// param [in] toX/		À X
/// param [in] toY		À Y
void Echiquier::deplacerPiece(string id, int toX, int toY) {
	for (size_t i = 0; i < compteurPion_; i++)
	{
		if (tableauPions_[i].obtenirId() == id)
			tableauPions_[i].deplacer(toX, toY);
	}
	for (size_t i = 0; i < compteurTour_; i++)
	{
		if (tableauTours_[i].obtenirId() == id)
			tableauTours_[i].deplacer(toX, toY);
	}

	for (size_t i = 0; i < 2; i++)
	{
		if (rois_[i].obtenirId() == id)
			rois_[i].deplacer(toX, toY);
	}

}

/// Enlever la tour.
/// param [in] id		id de la tour à enlever
void Echiquier::enleverTour(const string id) {
	bool trouve = false;

	for (size_t i = 0; i < (compteurTour_ - 1); i++)
	{
		if (!trouve && tableauTours_[i].obtenirId() == id) {
			trouve = true;
			compteurTour_--;
		} 
		else if(trouve) {
			tableauTours_[i - 1] = tableauTours_[i];
		}
	}
}

/// Enlever le pion.
/// param [in] id		L'identifiant du pion à enlever
void Echiquier::enleverPion(const string id) {
	bool trouve = false;

	for (size_t i = 0; i < (compteurPion_ - 1); i++)
	{
		if (!trouve && tableauPions_[i].obtenirId() == id) {
			trouve = true;
			compteurPion_--;
		} else if (trouve) {
			tableauPions_[i - 1] = tableauPions_[i];
		}
	}
}

