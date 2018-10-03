#include "CPartie.h"

CPartie::CPartie(CJoueur & leJoueur1, CJoueur & leJoueur2) : m_plesJoueurs(2), m_iLesPointsJ1(0), m_iLesPointsJ2(0)
{
	m_plesJoueurs[0] = &leJoueur1;
	m_plesJoueurs[1] = &leJoueur2;
	
	if (leJoueur1.GetSexe == Femme && leJoueur2.GetSexe == Femme)
	{
		m_iNbManches = 3;
	}
	else
	{
		m_iNbManches = 5;
	}
}
