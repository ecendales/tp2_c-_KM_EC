



#include <iostream>
#include <stdexcept>
#include<string>
#include "ElementFacturable.h"
#include "Facturablefraisfixe.h"
#include "Facturableparunite.h"
#include "Facture.h"

using namespace std;

void ajouterNuitees(Facture& facture);
void ajouterRepas(Facture& facture);
void ajouterSpa(Facture& facture);
void ajouterGym(Facture& facture);



int main()
{

    Facture factures;


    int choix = 0;
    bool fin = true;

    do {
        std::cout << "====BIENVENUE SUR LE MENU PRINCIPAL====" << std::endl;
        std::cout << "  1. Ajouter des nuitees" << std::endl;
        std::cout << "  2. Ajouter des repas" << std::endl;
        std::cout << "  3. Ajouter un acces au spa" << std::endl;
        std::cout << "  4. Ajouter un acces au gym" << std::endl;
        std::cout << "  5. Afficher et Quitter" << std::endl;
        std::cin >> choix;

        switch (choix) {

        case 1: //  Méthode pour ajouter des nuitees

            ajouterNuitees(factures);
            break;

        case 2:// Méthode pour ajouter des repas

            ajouterRepas(factures);
            break;

        case 3://  Méthode pour ajouter un accès au spa

            ajouterSpa(factures);
            break;

        case 4: //  Méthode pour ajouter un accès au gym

            ajouterGym(factures);
            break;

        case 5: // Affichage de la facture

            factures.afficherFacture();
            fin = true;
            break;

        default:
            cout << "L'option selectionnee est invalide" << endl;
            break;
        }
    } while (choix != 6);

}



void ajouterNuitees(Facture& facture) {

    int quantite, result;
    double prix = 100.00;


    cout << "Combien de nuitees ? ";
    cin >> quantite;


    facture.ajouterNuitees(prix, quantite);

    try
    {
        if (quantite <= 0) {

            throw ("La quantite ne peut pas etre inferieure ou egale a zero");

            result = quantite;

            cout << result << endl;
        }

    }
    catch (const char* e) {

        cout << "\nUne erreur s'est produite." << e;

    }
    catch (...) {

        throw std::invalid_argument("L'element a deja ete ajoute dans la facture");

    }

    main();



}

void ajouterRepas(Facture& facture) {

    int quantite, result;
    double prix = 20.00;


    cout << "Combien de repas ?  ";
    cin >> quantite;

    facture.ajouterRepas(prix, quantite);

    try
    {
        if (quantite <= 0) {

            throw ("La quantite ne peut pas etre inferieure ou egale a zero");

            result = quantite;

            cout << result << endl;
        }

    }
    catch (const char* e) {

        cout << "\nUne erreur s'est produite." << e;

    }
    catch (...) {

        throw std::invalid_argument("L'element a deja ete ajoute dans la facture");

    }

    main();



}



void ajouterSpa(Facture& facture) {

    double prix = 75.00;

    facture.ajouter_Spa(prix);

    cout << "\n L'element a ete ajoute avec succes\n";

    main();

}


void ajouterGym(Facture& facture) {


    double prix = 50.00;


    facture.ajouter_Gym(prix);

    cout << "\n L'element a ete ajoute avec succes\n";

    main();


}








