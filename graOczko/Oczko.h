#pragma once
#include "Gracz.h"
#include "Krupier.h"
#include "Talia.h"
class Oczko
{
public:
	Oczko();
	~Oczko();
	Krupier* krupier;
	Gracz* gracz;
	Talia* talia;
	void Run();
};

