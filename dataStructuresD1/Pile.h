#pragma once
#include <iostream>
template <typename T>
class Pile
{

public:
	int sommetPile;
	static const int MAX_PILE = 100;
	T* tab;

	// constructeurs et destructeurs
	Pile(int max = MAX_PILE); //constructeur
	Pile(const Pile&); //constructeur copie
	~Pile(); //destructeur
	// Modificateurs
	void empiler(const T&);
	T depiler();
	//S�lecteurs
	bool estVide()const;
	int taille() const;
	const T& sommet() const; // consulte l��l�ment au sommet
	const Pile<T>& operator=(const Pile<T>& p);
	//surcharge d'op�rateurs
	const Pile<T>& operator = (const Pile <T>);
	template <typename U> friend std::ostream& operator<<
		(std::ostream&, const Pile<U>&);
private: //Mod�le d�implantation
};
