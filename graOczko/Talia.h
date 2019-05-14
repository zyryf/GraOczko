#pragma once
#include "Karta.h"
#include <stack>
class Talia
{
public:
	Talia();
	~Talia();
	Karta* karta;
	stack <Karta> talia;
	int nrKarty;
	void Tasuj();
	void DrukujTalie();
	Karta* DajKarte();
};

