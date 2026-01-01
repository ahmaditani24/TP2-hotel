#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>	

class Client
{
	public:
		Client(const std::string& identifiant, const std::string& prenom,
			const std::string& nom);
		std::string getIdentifiant() const;
		std::string getPrenom() const;
		std::string getNom() const;

private:
		std::string identifiant_;
		std::string prenom_;
		std::string nom_;
};

std::ostream& operator<<(std::ostream& os, const Client& client);

#endif