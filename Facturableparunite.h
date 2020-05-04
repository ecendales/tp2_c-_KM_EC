
#pragma once
#ifndef __FACTURABLEPARUNITE_H
#define __FACTURABLEPARUNITE_H
#include "ElementFacturable.h"
#include <iostream>
#include<string>


class Facturableparunite : public ElementFacturable
{
private:
	int quantite;
	double taxe_hebergement = 1.05;

public:
	Facturableparunite(std::string le_nom, double le_prix, int quantite);
	~Facturableparunite();
	double getmontantTotalavantTaxes() const;
	double  getmontantTotalapresTaxes() const;
	void afficher()const;

};

#endif // !__FACTURABLEPARUNITE_H