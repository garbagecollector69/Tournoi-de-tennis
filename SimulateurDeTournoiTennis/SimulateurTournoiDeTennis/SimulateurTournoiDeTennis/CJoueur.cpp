#include "CJoueur.h"
#include "aleatoire.h"
#include <iostream>
#include <string>
using namespace std;

CJoueur::CJoueur(string nom, string prenom, Esexe sexe) : m_strNom(nom), m_strPrenom(prenom), m_eSexe(sexe)
{
	if (sexe == Homme)
	{
		m_iForce = GenererNbAleatoire(2, 5);
	}
	else
	{
		m_iForce = GenererNbAleatoire(1, 4);
	}
	m_iPrecision = GenererNbAleatoire(1, 5);
}
