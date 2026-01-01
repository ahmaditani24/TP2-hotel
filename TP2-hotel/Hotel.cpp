#include "Hotel.h"

Hotel::Hotel(const std::string& id, const std::string& nom, const std::string& ville)
    : id_(id), nom_(nom), ville_(ville) {

}

std::string Hotel::getId() const { return id_; }
std::string Hotel::getNom() const { return nom_; }
std::string Hotel::getVille() const { return ville_; }
std::vector<Chambre> Hotel::getChambres() const { return chambres_; }

void Hotel::ajouterChambre(const Chambre& chambre) {
    chambres_.push_back(chambre);
}

void Hotel::supprimerChambre(int numeroChambre) {
    for (auto it = chambres_.begin(); it != chambres_.end(); ++it) {
        if (it->getNumero() == numeroChambre) {
            chambres_.erase(it);
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Hotel& hotel) {
    os << "Hotel ID: " << hotel.getId() << " | Nom: " << hotel.getNom()
        << " | Ville: " << hotel.getVille() << "\n";
    os << "Liste des chambres :\n";

    for (const auto& ch : hotel.getChambres()) {
        os << "   " << ch << "\n";
    }
    return os;
}

Chambre* Hotel::trouverChambreDisponible(const std::string& type) {
    for (auto& ch : chambres_) {
        if (ch.getType() == type) {
            return &ch;
        }
    }
    return nullptr; 
}