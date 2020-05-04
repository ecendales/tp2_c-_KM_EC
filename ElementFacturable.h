
#pragma once
#ifndef __ELEMENTFACTURABLE_H
#define __ELEMENTFACTURABLE_H
#include <iostream>
#include <string>



class ElementFacturable
{
protected:


	std::string nom;
	double prix;
	double taxe_de_base = 1.08;


public:
	ElementFacturable(std::string le_nom, double le_prix);
	virtual~ElementFacturable();
	virtual double getmontantTotalavantTaxes() const;
	virtual double  getmontantTotalapresTaxes() const;
	virtual void afficher() const;



};

#endif // !__ELEMENTFACTURABLE_H
