#pragma once
#include "PlayerProg1.h"
class Programme1
{
public:
	PlayerProg1 p1;
	PlayerProg1 p2;
	
	void Play();
	Pile<Carte> Create(int nbrCartes);
};

