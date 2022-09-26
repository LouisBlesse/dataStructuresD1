#pragma once
template <typename T>
class Pile
{
public:
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
	constT& sommet() const; // consulte l��l�ment au sommet
	//surcharge d'op�rateurs
	const Pile<T>& operator = (const Pile < T);
	template <typename U> friend std::ostream& operator<<
		(std::ostream&, const Pile<U>&);
private: � //Mod�le d�implantation
};
