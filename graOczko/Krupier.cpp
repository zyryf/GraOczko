#include "Krupier.h"



Krupier::Krupier()
{
}

Krupier::Krupier(int wartoscGranicy)
{
	granica = wartoscGranicy;
	mojeOczka = 0;
}



Krupier::~Krupier()
{
}


void Krupier::Graj()
{
	int licznik = 0;
	// dopoki liczba oczek jest mniejsza rowna ustalonej granicy
	while (mojeOczka <= granica)
	{
		// do tablicy kart przpisuje karte 
		zgromadzoneKarty[licznik] = talia->DajKarte();
		// zwiekszam odpowiednio wartosc atrybutu mojeOczka oraz wartosc licznik - indeks tablicy
		mojeOczka += zgromadzoneKarty[licznik]->wartosc;
		licznik++;
	}
}
