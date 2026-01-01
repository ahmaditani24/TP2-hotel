#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"

class Reservation
{

public:

	Reservation(Date date, int nbNuit, int idHotel, int idClient, int idChambre,
		int montantTotale);

	Date getDate() const;
	int getNbNuit() const;
	int getIdHotel() const;
	int getIdClient() const;
	int getIdChambre() const;
	int getMontantTotale() const;

private:
	Date date_;
	int nbNuit_;
	int idHotel_;
	int idClient_;
	int idChambre_;
	int montantTotale_;
};

#endif