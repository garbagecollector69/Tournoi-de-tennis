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

string CJoueur::GetNom() const
{
	return m_strNom;
}

string CJoueur::GetPrenom() const
{
	return m_strPrenom;
}

Esexe CJoueur::GetSexe() const
{
	return m_eSexe;
}

void CJoueur::Servir(CBalle & laBalle, bool bPremier)
{
	short chance;
	if (!bPremier)
	{
		if(m_iForce>1)
		{
			int nbPointsForceSoustrait;
			nbPointsForceSoustrait = GenererNbAleatoire(1, 2);
			if (m_iForce - nbPointsForceSoustrait > 1)
			{
				m_iForce -= nbPointsForceSoustrait;
			}
			else
			{
				m_iForce = 1;
			}
		}
	}
		
		switch (m_iPrecision)
		{
		case 1:
			chance = 70;
			break;
		case 2:
			chance = 75;
			break;
		case 3:
			chance = 80;
			break;
		case 4:
			chance = 85;
			break;
		default:
			chance = 90;

		}
	
		if (GenererNbAleatoire(1, 100) < chance)
		{
			laBalle.SetEnJeu(false);
		}
		else
		{
			laBalle.SetEnJeu(true);
			switch (m_iForce)
			{
			case 1:
				laBalle.SetVitesse(80);
				break;
			case 2:
				laBalle.SetVitesse(90);
				break;
			case 3:
				laBalle.SetVitesse(100);
				break;
			case 4:
				laBalle.SetVitesse(110);
				break;
			default:
				laBalle.SetVitesse(120);
			}
		}
}

void CJoueur::Retourner(CBalle & laBalle)
{
	short chance;
	short baisseChanceFrapperBalle;
	short vitesseBalle = laBalle.GetVitesse();

		switch (vitesseBalle)
		{
		case 80:
			baisseChanceFrapperBalle=1;
			break;
		case 90:
			baisseChanceFrapperBalle = 2;
			break;
		case 100:
			baisseChanceFrapperBalle = 4;
			break;
		case 110:
			baisseChanceFrapperBalle = 8;
			break;
		default:
			baisseChanceFrapperBalle = 16;
		}

	switch (m_iPrecision)
	{
	case 1:
		chance = 70;
		break;
	case 2:
		chance = 75;
		break;
	case 3:
		chance = 80;
		break;
	case 4:
		chance = 85;
		break;
	default:
		chance = 90;
	}

	chance -= baisseChanceFrapperBalle;

	if (GenererNbAleatoire(1, 100) < chance)
	{
		laBalle.SetEnJeu(false);
	}
	else
	{
		laBalle.SetEnJeu(true);
	}

}
