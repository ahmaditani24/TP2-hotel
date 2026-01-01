#include <iostream>
#include <vector>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"
#include "Reservation.h"

int main() {

    Date d2(4, 4, 2024);
    Client c1("AhIt10", "Ahmad", "Itani");

    Hotel h1("OCEAN11", "Le Bellagio", "Las Vegas");

    for (int i = 1; i <= 3; ++i) {
        h1.ajouterChambre(Chambre(100 + i, "Single", 100.0));
    }

    for (int i = 1; i <= 5; ++i) {
        h1.ajouterChambre(Chambre(200 + i, "Double", 125.0));
    }

    for (int i = 1; i <= 2; ++i) {
        h1.ajouterChambre(Chambre(300 + i, "Suite", 210.0));
    }

    std::cout << "Informations de l'Hotel: " << std::endl;
    std::cout << h1 << std::endl;

    std::vector<Client> clients;
    clients.push_back(c1);
    clients.push_back(Client("jdoe1", "John", "Doe"));
    clients.push_back(Client("asmit2", "Alice", "Smith"));

    std::cout << "Liste des Clients: " << std::endl;
    for (const auto& client : clients) {
        std::cout << client << std::endl;
    }

    std::vector<Reservation> reservations;

    std::string nomSaisi;
    std::cout << "\n Nouvelle Reservation: " << std::endl;
    std::cout << "Entrez le nom du client : ";
    std::cin >> nomSaisi;

    Client* clientConcerne = nullptr;

    for (auto& cl : clients) {
        if (cl.getNom() == nomSaisi) {
            clientConcerne = &cl;
            break;
        }
    }

    if (clientConcerne == nullptr) {
        std::cout << "Client inconnu. Création du dossier." << std::endl;
        std::string prenom, id;
        std::cout << "Entrez le prenom : ";
        std::cin >> prenom;
        std::cout << "Entrez un identifiant : ";
        std::cin >> id;

        clients.push_back(Client(id, prenom, nomSaisi));
 
        clientConcerne = &clients.back();
    }

    std::cout << "Client sélectionné : " << clientConcerne->getPrenom()
        << " " << clientConcerne->getNom() << std::endl;

    int jour, mois, annee, nbNuits;
    bool dateValide = false;
 
    Date dateDebut(1, 1, 2000);

    while (!dateValide) {
        try {
            std::cout << "Entrez la date de début (Jour Mois Année) : ";
            std::cin >> jour >> mois >> annee;

            dateDebut = Date(jour, mois, annee);

            std::cout << "Entrez le nombre de nuits : ";
            std::cin >> nbNuits;

            if (nbNuits <= 0) {
                throw std::invalid_argument("Le nombre de nuits doit être positif");
            }

            dateValide = true;

        }
        catch (const std::exception& e) { 
            std::cout << "Erreur de saisie : Date ou durée invalide. Recommencez." << std::endl;
        }
    }

    std::string typeChambre;
    std::cout << "Entrez le type de chambre souhaité (Single/Double/Suite) : ";
    std::cin >> typeChambre;

    bool chambreTrouvee = false;
    int numeroChambreSelectionnee = -1;
    double prixSelectionne = 0.0;

    std::vector<Chambre> listeChambres = h1.getChambres();

    for (const auto& ch : listeChambres) {
        if (ch.getType() == typeChambre) {
            numeroChambreSelectionnee = ch.getNumero();
            prixSelectionne = ch.getPrixParNuit();
            chambreTrouvee = true;
            break; 
        }
    }

    if (chambreTrouvee) {
        std::cout << "Chambre disponible trouvée : N°" << numeroChambreSelectionnee
            << " au prix de " << prixSelectionne << " euros/nuit." << std::endl;
    }
    else {
        std::cout << "Aucune chambre de ce type n'est disponible." << std::endl;
    }

    return 0;
}