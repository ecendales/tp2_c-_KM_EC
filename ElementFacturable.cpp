
#include "ElementFacturable.h"
# include <stdexcept>


ElementFacturable::ElementFacturable(std::string le_nom, double le_prix) {


	nom = le_nom;
	prix = le_prix;

}



ElementFacturable::~ElementFacturable() {}




double ElementFacturable::getmontantTotalavantTaxes() const {

	return this->prix;

}



double ElementFacturable::getmontantTotalapresTaxes()const {


	return (getmontantTotalavantTaxes() * taxe_de_base);

}

void ElementFacturable::afficher()const {

	std::printf(" %-21s %8.2f", nom.c_str(), prix);
}

