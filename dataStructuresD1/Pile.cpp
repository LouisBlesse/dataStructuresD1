#include "Pile.h"
#include <windows.h>
#include <iostream>
#pragma hdrstop

template <typename T>
Pile<T> ::Pile(int max) {
	tab = new T[max];
	sommetPile = -1;
	MAX_PILE = max;
}

template <typename T>
Pile<T> ::Pile(const Pile<T>& p){
	tab = new T[p.MAX_PILE];
	MAX_PILE = p.MAX_PILE;
	for (int i = 0; i < MAX_PILE; i += 1)
		tab[i] = p.tab[i];
	sommetPile = p.sommetPile;
}

template <class T>
Pile<T> :: ~Pile(){
	delete[] tab;
}

template <typename T>
void Pile<T> ::empiler(const T& e){
	if (sommetPile + 1 < MAX_PILE)
	{
		sommetPile += 1; // a += b  a = a+ b
		tab[sommetPile] = e;
	}
	else
		std::cout<< "Empiler:la pile est pleine\n";
}

template <typename T>
T Pile<T> ::depiler(){
	if (!estVide()) return tab[sommetPile--];
	else
		std::cout << "Depiler: la pile est vide!";
}

template <typename T>
bool Pile<T> ::estVide() const
{
	return (sommetPile == -1);
}

template <typename T>
int Pile<T> ::taille() const
{
	return (MAX_PILE);
}

template <typename T>
const T& Pile<T> ::sommet() const
{
	return (sommetPile);
}

template <typename T>
const Pile<T>& Pile<T> :: operator = (const Pile<T>& p){
	if (tab != 0) delete[] tab; //on nettoie l’objet qu’on veux écraser
	tab = new T[p.MAX_PILE];
	MAX_PILE = p.MAX_PILE;
	for (int i = 0; i < MAX_PILE; i += 1)
		tab[i] = p.tab[i];
	sommetPile = p.sommetPile;
	return (*this);
	//retourner : une référence sur l ’objet courant
}