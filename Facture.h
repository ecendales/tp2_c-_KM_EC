
#pragma once
#ifndef __FACTURE_H
#define __FACTURE_H

#include <map>

#include "ElementFacturable.h"
#include "Facturablefraisfixe.h"
#include "Facturableparunite.h"



class Facture
{

private:

	std::map<int, ElementFacturable*> mp;


public:

	Facture();
	~Facture();
	void ajouterNuitees(double prix, int quantite);
	void ajouterRepas(double prix, int quantite);
	void ajouter_Spa(double prix);
	void ajouter_Gym(double prix);
	void afficherFacture();

};

#endif // !__FACTURE_H



