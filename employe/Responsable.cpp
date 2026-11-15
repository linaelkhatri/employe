#include "Responsable.h"
#include<iostream>
using namespace std;

Responsable::Responsable(string n, double s, int nbrsmax):Employes(n,s)
{
	this->nbrSubmax = nbrsmax ;
	this->sub = new Employes * [this->nbrSubmax];
	for (int i = 0; i < this->nbrSubmax; i++)
	{
		this->sub[i] = nullptr;
	}
}

void Responsable::afficher() const
{
	this->Employes::afficher();
	for (int i = 0; i < this->nbr; i++) {
		this->sub[i]->afficher();
	}
}

void Responsable::ajouterEmployes(Employes* E)
{
	if (this->nbrSubmax > this->nbr && E != nullptr) {
		this->sub[this->nbr ]=E;
		this->nbr++;

	}
	else {
		cout << "impossible d ajouter l employe" << endl;
	}
}

Responsable::~Responsable()
{

}

