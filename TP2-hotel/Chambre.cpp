#include "Chambre.h"

Chambre::Chambre(int numero, const std::string& type ,double prixParNuit)
	: numero_(numero), type_(type), prixParNuit_(prixParNuit) {
}

int Chambre::getNumero() const {
	return numero_;
}

std::string Chambre::getType() const {
	return type_;
}	

double Chambre::getPrixParNuit() const {
	return prixParNuit_;
}

void Chambre::changerPrix(double nouveauPrix) {
	prixParNuit_ = nouveauPrix;
}

std::ostream& operator<<(std::ostream& os, const Chambre& chambre) {
	os << "Chambre n°" << chambre.getNumero() << " (" << chambre.getType()
		<< ") - Prix: " << chambre.getPrixParNuit() << "€";
	return os;
}