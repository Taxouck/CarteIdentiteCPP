#include "stdafx.h"
#include "carte.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <sstream>


using namespace std;

carte::carte()
{
	this->id = 0;
	this->nom = "";
	this->prenom = "";
	this->adresse = "";
	this->cp = 0;
	this->ville = "";
}

carte::carte(int *mid, char *mnom, char *mprenom, char *madresse, int *mcp, char *mville)
{
	this->id = *mid;
	this->nom = *mnom;
	this->prenom = *mprenom;
	this->adresse = *madresse;
	this->cp = *mcp;
	this->ville = *mville;
}

int carte::getid()
{
	return this->id;
}

void carte::setid(int *mid)
{
	this->id = *mid;
}

string carte::getnom()
{
	return string(nom);
}

void carte::setnom(std::string mnom)
{
	this->nom = mnom;
}

std::string carte::getprenom()
{
	return std::string(prenom);
}

void carte::setprenom(std::string mprenom)
{
	this->prenom = mprenom;
}

std::string carte::getadresse()
{
	return std::string(adresse);
}

void carte::setadresse(std::string madresse)
{
	this->adresse = madresse;
}

int carte::getcp()
{
	return cp;
}

void carte::setcp(int *mcp)
{
	this->cp = *mcp;
}

std::string carte::getville()
{
	return std::string(ville);
}

void carte::setville(std::string mville)
{
	this->ville = mville;
}

void carte::creer()
{
	int a;
	string b;
	cout << "Entrez ID" << endl;
	cin >> a;
	this->id = a;
	cout << "Entrez nom" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, b);
	this->nom = b;
	cout << "Entrez prenom" << endl;
	getline(cin, b);
	this->prenom = b;
	cout << "Entrez adresse" << endl;
	getline(cin, b);
	this->adresse = b;
	cout << "Entrez code postal" << endl;
	cin >> a;
	this->cp = a;
	cout << "Entrez ville" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, b);
	this->ville = b;

}

void carte::modifier()
{
	int a;
	string b;
	cout << "Entrez nom" << endl;
	getline(cin, b);
	this->nom = b;
	cout << "Entrez prenom" << endl;
	getline(cin, b);
	this->prenom = b;
	cout << "Entrez adresse" << endl;
	getline(cin, b);
	this->adresse = b;
	cout << "Entrez code postal" << endl;
	cin >> a;
	this->cp = a;
	cout << "Entrez ville" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, b);
	this->ville = b;
}

void carte::afficher()
{
	if (id == 0) {
		cout << "carte vide" << endl;
	}
	else {
		cout << id << endl;
		cout << nom << endl;
		cout << prenom << endl;
		cout << adresse << endl;
		cout << cp << endl;
		cout << ville << endl;
	}
}

void carte::supprimer()
{
	this->id = 0;
	this->nom = "";
	this->prenom = "";
	this->adresse = "";
	this->cp = 0;
	this->ville = "";
}
