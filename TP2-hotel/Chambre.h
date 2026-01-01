#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <iostream>
#include <string>

class Chambre
{
	public:
		Chambre(int numero, const std::string& type ,double prixParNuit);
		int getNumero() const;
		std::string getType() const;
		double getPrixParNuit() const;

		void changerPrix(double nouveauPrix);

	private:
		int numero_;
		std::string type_;
		double prixParNuit_;
};
std::ostream& operator<<(std::ostream& os, const Chambre& chambre);

#endif