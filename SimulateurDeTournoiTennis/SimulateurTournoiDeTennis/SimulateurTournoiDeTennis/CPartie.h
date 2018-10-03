#ifndef CPARTIE_H
#define CPARTIE_H

#include <vector>
#include "CJoueur.h"

class CPartie
{
public:
	CPartie(CJoueur & leJoueur1, CJoueur & leJoueur2);
	CJoueur* GetGagnant();
	CJoueur* GetPerdant();
	const string & GetResults() const;
	void Jouer();

private:
	vector<CJoueur*> m_plesJoueurs;
	int m_iLesPointsJ1;
	int m_iLesPointsJ2;
	int m_iNbManches;
};

#endif