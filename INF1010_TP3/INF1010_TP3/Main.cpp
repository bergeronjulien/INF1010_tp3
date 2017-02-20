
/**************************************************
* Titre: Travail pratique #3 - Main.cpp
* Date:
* Auteur:
**************************************************/

#include "Pion.h"
#include "Roi.h"
#include "Tour.h"
#include "Echiquier.h"
#include <string>
#include <iostream>

int main()
{
	//1-  Creez un objet de type Roi à l'aide du constructeur par défaut.
	Roi* roi1 = new Roi();

	//2- Donnez l'id D1 au roi défini dans l'étape 1
	roi1->modifierId("D1");

	//3-  Définissez la position (3,0) pour le roi défini dans l'étape 1
	roi1->modifierPositionX(3);
	roi1->modifierPositionY(0);

	roi1->modifierCouleur("Blanc");

	//4-  Creez un objet de type Roi Noir à la position (3,7) ayant comme id D8.
	Roi* roi2 = new Roi("D8", "Noir", 3, 7);

	//5-  Creez les huit pions blancs avec les coordonnées (i,1) i : 0-->7 et les id A2-->H2
	Pion pions1[8];
	for (size_t i = 0; i < 8; i++)
	{
		string s1; s1 = (char)(65 + i);
		pions1[i] = Pion(s1 + "2", "Blanc", i, 1);
	}

	//6-  Creez les huit pions noirs avec les coordonnées (i,6) i : 0-->7 et les id A7-->H7
	Pion pions2[8];
	for (size_t i = 0; i < 8; i++)
	{
		string s1; s1 = (char)(65 + i);
		pions2[i] = Pion(s1 + "7", "Noir", i, 6);
	}

	//7-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour tourBlanche1 = Tour("A1", "Blanc", 0, 0);
	Tour tourBlanche2 = Tour("H1", "Blanc", 7, 0);

	//8-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	Tour tourNoire1 = Tour("A8", "Noir", 0, 7);
	Tour tourNoire2 = Tour("H8", "Noir", 7, 7);

	//9-  Creez un Echiquier
	Echiquier* echiquier = new Echiquier();

	//10- Ajoutez toutes les pièces précidament définies à l'echiquier
	for (size_t i = 0; i < 8; i++)
	{
		echiquier->ajouterPion(pions1[i]);
		echiquier->ajouterPion(pions2[i]);
	}
	echiquier->ajouterTour(tourBlanche1);
	echiquier->ajouterTour(tourBlanche2);
	echiquier->ajouterTour(tourNoire1);
	echiquier->ajouterTour(tourNoire2);
	echiquier->ajouterRoi(roi1, 0);
	echiquier->ajouterRoi(roi2, 1);

	//11-  Deplacer la piece d'id A2 à la position (0,2)  --Deplacement de Pion
	echiquier->deplacerPiece("A2", 0, 2);

	//12-  Deplacer le piece d'id H7 à la position (7,4)  --Deplacement du Pion
	echiquier->deplacerPiece("H7", 7, 4);

	//13-  Deplacer la piece d'id A2 à la position (0,4)  --Deplacement du Pion
	echiquier->deplacerPiece("A2", 0, 4);

	//14-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	echiquier->deplacerPiece("H8", 7, 6);

	//15-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	echiquier->deplacerPiece("H8", 7, 6);

	//16-  Enlever la piece d'id A2
	echiquier->enleverPion("A2");
	echiquier->enleverTour("A2");

	// Désalocation de la mémoire
	// Les tableaus sont désalloués dans le destructeur de l'échiquier.
	delete roi1;
	delete roi2;
	

	
	return 0;
}

