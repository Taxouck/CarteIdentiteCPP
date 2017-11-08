#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

class carte
{
private:
	int id;
	std::string nom;
	std::string prenom;
	std::string adresse;
	int cp;
	std::string ville;
public: //TODO: get set creer modifier afficher supprimer
	carte();
	carte(int*, char*, char*, char*, int*, char*);
	int getid();
	void setid(int*);
	std::string getnom();
	void setnom(std::string);
	std::string getprenom();
	void setprenom(std::string);
	std::string getadresse();
	void setadresse(std::string);
	int getcp();
	void setcp(int*);
	std::string getville();
	void setville(std::string);
	void creer();
	void modifier();
	void afficher();
	void supprimer();	
};

