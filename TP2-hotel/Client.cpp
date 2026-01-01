#include "Client.h"

Client::Client(const std::string& identifiant, const std::string& prenom,
	const std::string& nom)
	: identifiant_(identifiant), prenom_(prenom), nom_(nom) {
}

std::string Client::getIdentifiant() const {
	return identifiant_;
}
std::string Client::getPrenom() const {
	return prenom_;
}
std::string Client::getNom() const {
	return nom_;
}

std::ostream& operator<<(std::ostream& os, const Client& client) {
	os << "Client [" << client.getIdentifiant() << "] : "
		<< client.getPrenom() << " " << client.getNom();
	return os;
}
