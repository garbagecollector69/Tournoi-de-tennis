#ifndef CBALLE_H
#define CBALLE_H

class CBalle{
public:
	CBalle();
	float GetVitesse() const;
	bool GetEnJeu() const;
	void SetVitesse(short vitesse);
	void SetEnJeu(bool enJeu);

private:
	float m_fVitesse;
	bool m_bEnJeu;
};

#endif
