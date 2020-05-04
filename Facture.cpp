
#include<iostream>
#include <exception>
#include "Facture.h"
#include<stdexcept>




Facture::Facture() {}

Facture::~Facture() {

	
	std::map<int, ElementFacturable*>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++) {
		delete it->second;
		it->second = NULL;
	}



	mp.clear();

}

void Facture::ajouterNuitees(double prix, int quantite) {

	const int ordre_priorite = 1;
	std::string nom = "Nuitee";

	Facturableparunite* nuitee = NULL;

	nuitee = new Facturableparunite(nom, prix, quantite);

	mp.insert(std::pair<int, ElementFacturable*>(ordre_priorite, nuitee));

}

void Facture::ajouterRepas(double prix, int quantite) {

	const int ordre_priorite = 2;
	std::string nom = "Repas";

	Facturableparunite* repas = NULL;

	repas = new Facturableparunite(nom, prix, quantite);

	mp.insert(std::pair<int, ElementFacturable*>(ordre_priorite, repas));


}



void Facture::ajouter_Spa(double prix) {

	const int ordre_priorite = 3;
	std::string nom = "Spa";

	Facturablefraisfixe* spa = NULL;

	spa = new Facturablefraisfixe(nom, prix);

	mp.insert(std::pair<int, ElementFacturable*>(ordre_priorite, spa));


}

void Facture::ajouter_Gym(double prix) {

	const int ordre_priorite = 4;
	std::string nom = "Gym";

	Facturablefraisfixe* gym = NULL;

	gym = new Facturablefraisfixe(nom, prix);

	mp.insert(std::pair<int, ElementFacturable*>(ordre_priorite, gym));

}



void Facture::afficherFacture() {


	double montantTotal = 0;
	double montantTotalapresTaxes = 0;




	for (std::map<int, ElementFacturable*>::iterator iter = mp.begin();
		iter != mp.end(); iter++) {
		iter->second->afficher();

		montantTotal += iter->second->getmontantTotalavantTaxes();
		montantTotalapresTaxes += iter->second->getmontantTotalapresTaxes();




		std::printf("   taxe:%12.2f", montantTotal);
		std::cout << ("===========");
		std::printf("   taxe:%12.2f", (montantTotalapresTaxes - montantTotal));
		std::cout << ("===========");
		std::printf(" Montantavectaxes: %12.2f", montantTotalapresTaxes);



	}




}
