
#ifndef CJOUEUR_H
#define CJOUEUR_H

#include <iostream>
#include <string>
#include "CBalle.h"

using namespace std;

enum Esexe
{
	Homme,
	Femme
};

class CJoueur
{
public:
	CJoueur(string nom, string prenom, Esexe sexe);
	string GetNom() const;
	string GetPrenom() const;
	Esexe GetSexe() const;
	void Servir(CBalle & laBalle, bool bPremier);
	void Retourner(CBalle & laBalle);

private:
	string m_strNom;
	string m_strPrenom;
	Esexe m_eSexe;
	int m_iForce;
	int m_iPrecision;
};


#endif