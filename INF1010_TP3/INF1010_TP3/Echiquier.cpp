/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Echiquier.h"
#include "Tour.h"
#include "Pion.h"
#include "Roi.h"

#include <string>
#include <iostream>

//Constructeur par paramètre
Echiquier::Echiquier() {
	capaciteTableauPion_ = 16;
	capaciteTableauTour_ = 16;
	tableauPions_ = new Pion[capaciteTableauPion_];
	tableauTours_ = new Tour[capaciteTableauTour_];
	//rois_[2] = {};

	compteurPion_ = 0;
	compteurTour_ = 0;

	
}

Echiquier::~Echiquier() {
	delete tableauPions_;
	delete tableauTours_;
}

void Echiquier::ajouterRoi(const Roi* unRoi, int position) { // NOTE: Il faut utiliser * pas & puisqu'on passe un pointeur.
	rois_[position] = *unRoi;
}

void Echiquier::ajouterTour(const Tour& uneTour) {
	tableauTours_[compteurTour_] = uneTour;
	compteurTour_++;
}

void Echiquier::ajouterPion(const Pion& unPion) {
	tableauPions_[compteurPion_] = unPion;
	compteurPion_++;
}

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

