// CarteIdentite.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

const int SizeA=25;

int askID();

void main()
{
	carte IDs[SizeA];
	int action;
	int i, j, k, l;
	string str;

	while (action!=0) {
		cout << "Que voulez-vous faire?" << endl << "0 = Quitter" << endl << "1 = Nouvelle carte" << endl << "2 = Afficher carte" << endl << "3 = Modifier carte" << endl << "4 = Supprimer carte" << endl;
		cin >> action;
		switch (action) {
		case 1: 
			i = 0;
			j = 0;
			do{
				if (IDs[j].getid() == 0) {
					IDs[j].creer();
					i = 1;
				}
				else {
					j++;
				}
			} while (i==0);
			break;
		case 2: 
			i = askID();
			for (j = 0; j < SizeA; j++) {
				if (IDs[j].getid() == i) {
					IDs[j].afficher();
				}
			}
			break;
		case 3:
			cout << "1 = Carte entiere" << endl << "2 = Nom & Prenom" << endl << "3 = Adresse" << endl << "4 = Code Postal" << endl << "5 = Ville" << endl;
			cin >> k;
			switch (k) {
				case 1: 
					i=askID();
					for (j = 0; j < SizeA; j++) {
						if (IDs[j].getid() == i) {
							IDs[j].modifier();
						}
					}
					break;
				case 2: 
					i = askID();
					for (j = 0; j < SizeA; j++) {
						if (IDs[j].getid() == i) {
							cout << "Entrez Nom" << endl;
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							getline(cin, str);
							IDs[j].setnom(str);
							cout << "Entrez Prenom" << endl;
							getline(cin, str);
							IDs[j].setprenom(str);
						}
					}
					break;
				case 3: 
					i = askID();
					for (j = 0; j < SizeA; j++) {
						if (IDs[j].getid() == i) {
							cout << "Entrez Adresse" << endl;
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							getline(cin, str);
							IDs[j].setadresse(str);
						}
					}
					break;
				case 4: 
					i = askID();
					for (j = 0; j < SizeA; j++) {
						if (IDs[j].getid() == i) {
							cout << "Entrez Code Postal" << endl;
							cin >> l;
							IDs[j].setcp(&l);
						}
					}
					break;
				case 5: 
					i = askID();
					for (j = 0; j < SizeA; j++) {
						if (IDs[j].getid() == i) {
							cout << "Entrez Ville" << endl;
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							getline(cin, str);
							IDs[j].setville(str);
						}
					}
					break;
				}
			break;
		case 4:
			i = askID();
			for (j = 0; j < SizeA; j++) {
				if (IDs[j].getid() == i) {
					IDs[j].supprimer();
				}
			}
			break;
		}
	}

	system("pause");
    
}


int askID() {
	int a;
	cout << "entrez l'ID de la carte" << endl;
	cin >> a;

	return a;
}