#pragma once
#include "Karta.h"
#include "Krupier.h"
class Gracz :
public Krupier
{
public:
	Gracz();
	~Gracz();
	void Graj();
	int nrKarty;
};

