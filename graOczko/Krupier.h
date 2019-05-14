#pragma once
#include "Karta.h"
#include "Talia.h"
class Krupier
{
public:
	Krupier();
	Krupier(int wartoscGranicy);
	~Krupier();
	Karta* zgromadzoneKarty[10];
	Talia* talia;
	int granica;
	int mojeOczka;
	virtual void Graj();
};

