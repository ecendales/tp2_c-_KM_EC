
#pragma once
#ifndef __FACTURABLEFRAISFIXE_H
#define __FACTURABLEFRAISFIXE_H
#include <iostream>
#include<string>
#include "ElementFacturable.h"

class Facturablefraisfixe : public ElementFacturable
{
private:

	double taxe_additionelle = 1.07;

public:
	Facturablefraisfixe(std::string le_nom, double le_prix);
	~Facturablefraisfixe();
	double getmontantTotalapresTaxes() const;


};

#endif // !__FACTURABLEFRAISFIXE_H