#include "CBalle.h"
CBalle::CBalle() : m_fVitesse(0), m_bEnJeu(false)
{}

float CBalle::GetVitesse() const
{
	return m_fVitesse;
}

bool CBalle::GetEnJeu() const
{
	return m_bEnJeu;
}

void CBalle::SetVitesse(short vitesse)
{
	m_fVitesse = vitesse;
}

void CBalle::SetEnJeu(bool enJeu)
{
	m_bEnJeu = enJeu;
}
