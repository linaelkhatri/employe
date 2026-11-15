#include "Employes.h"
#include<iostream>
using namespace std;
int Employes::compteur = 0;
float Employes::valeurArg = 0;

Employes::Employes(string nom, double indice):matricule(++compteur)
{
	this->nom = nom;
	this->indiceSal = indice;
	
}

void Employes::afficher() const
{
	cout<<"Nom: "<<nom<<endl;
	cout<<"Matricule: "<<matricule<<endl;
	cout << "salaire:" << calculerSal() << endl; 
}

double Employes::calculerSal() const
{ 
	cout << "donner la valeur de l augmentation" << endl;
	cin >> Employes::valeurArg;
	return this->indiceSal+((this->indiceSal*Employes::valeurArg)/100);
}

