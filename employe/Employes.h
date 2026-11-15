#pragma once
#include<string>
#include<iostream>
using namespace std;
class Employes
{
private:
	string nom;
	const int matricule;
	double indiceSal;
	static float valeurArg;
	static int compteur;


public:
	Employes(string, double);
	virtual void afficher()const;
    double calculerSal()const;
    





};

