
#include "Facturableparunite.h"
#include <stdexcept>



Facturableparunite::Facturableparunite(std::string le_nom, double le_prix, int quantite) :ElementFacturable(le_nom, le_prix) {

	this->quantite = quantite;

}


Facturableparunite::~Facturableparunite() {}


double Facturableparunite::getmontantTotalavantTaxes() const {

	return prix * quantite;

}


double Facturableparunite::getmontantTotalapresTaxes() const {

	return getmontantTotalavantTaxes() * (taxe_de_base + taxe_hebergement - 1);


}


void Facturableparunite::afficher()const {


	std::printf(" % -13s qty:%-4d %7.2f", nom.c_str(), quantite, (prix * quantite));


}


