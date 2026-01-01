#include "Reservation.h"

Reservation::Reservation(Date date, int nbNuit, int idHotel, int idClient, int idChambre,
	int montantTotale)
	: date_(date), nbNuit_(nbNuit), idHotel_(idHotel), idClient_(idClient),
	idChambre_(idChambre), montantTotale_(montantTotale) {
}

Date Reservation::getDate() const {
	return date_;
}

int Reservation::getNbNuit() const {
	return nbNuit_;
}

int Reservation::getIdHotel() const {
	return idHotel_;
}

int Reservation::getIdClient() const {
	return idClient_;
}

int Reservation::getIdChambre() const {
	return idChambre_;
}

int Reservation::getMontantTotale() const {
	return montantTotale_;
}

