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
}

Echiquier::~Echiquier() {
}

void Echiquier::ajouterRoi(const Roi& unRoi, int position) {
	rois_[position] = unRoi;
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
	
}

