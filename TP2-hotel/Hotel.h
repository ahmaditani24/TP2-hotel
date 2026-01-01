#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include <algorithm>
#include "Chambre.h" 
#include <iostream>

class Hotel {
public:
   
    Hotel(const std::string& id, const std::string& nom, const std::string& ville);

    std::string getId() const;
    std::string getNom() const;
    std::string getVille() const;
    std::vector<Chambre> getChambres() const;

    void ajouterChambre(const Chambre& chambre);
    void supprimerChambre(int numeroChambre);
    Chambre* trouverChambreDisponible(const std::string& type);

private:
    std::string id_;
    std::string nom_;
    std::string ville_; 
    std::vector<Chambre> chambres_;
};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);

#endif