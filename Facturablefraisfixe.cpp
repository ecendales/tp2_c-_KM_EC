#include "Facturablefraisfixe.h"



Facturablefraisfixe::Facturablefraisfixe(std::string le_nom, double le_prix) :ElementFacturable(le_nom, le_prix) {


	this->prix = le_prix;

}



Facturablefraisfixe::~Facturablefraisfixe() {}



double Facturablefraisfixe::getmontantTotalapresTaxes() const {

	return getmontantTotalavantTaxes() * (taxe_de_base + taxe_additionelle - 1);

}