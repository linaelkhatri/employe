#pragma once
#include "Employes.h"
class Responsable : public Employes
{
private:
	Employes ** sub;
	int nbrSubmax;
	int nbr;
public:
	Responsable(string, double, int);
	void afficher()const override;
	void ajouterEmployes(Employes*E);
	~Responsable();



};

