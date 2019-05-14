#include "Talia.h"
#include "Karta.h"
#include <cstdlib>
#include <ctime>
#include <stack>
using namespace std;



Talia::Talia()
{
	int licznik = 0;
	int wartosc = 2;
	nrKarty = 0;
	
	// tworze tablice kart i nadaje kartom kolory
	for (licznik = 0; licznik < 52; licznik++)
	{
		//tabKart[licznik] = new Karta;
		karta = new Karta;
		
		// nadaje kolor karcie - 4 rozne kolory
		if (licznik % 4 == 0)
		{
			karta->kolor = "kier";
		}
		if (licznik % 4 == 1)
		{
			karta->kolor = "karo";
		}
		if (licznik % 4 == 2)
		{
			karta->kolor = "trefl";
		}
		if (licznik % 4 == 3)
		{
			karta->kolor = "pik";
		}

		talia.push(*karta);
		delete karta;
		karta = NULL;
	}

	// nadaje wartosc kartom od 2 do 10 - kart takich mamy 36
	for (licznik = 0; licznik < 36; licznik++)
	{				
		// nadaje wartosc karcie
		karta = new Karta;
		karta->wartosc = wartosc;
		talia.push(*karta);
		delete karta;
		karta = NULL;
		//co 4 karty wartosc karty wzrasta o 1
		if (licznik % 4 == 3)
		{
			wartosc++;
		}		
	}

	wartosc = 2;
	
	//nadaje wartosc  pozostalym kartom - wszystkim oprocz asow
	for (licznik; licznik < 48; licznik++)
	{
		karta = new Karta;
		karta->wartosc = wartosc;
		talia.push(*karta);
		delete karta;
		karta = NULL;
		if (licznik % 4 == 3)
		{
			wartosc++;
		}
	
	}

	//nadaje wartosc asom
	for (licznik; licznik < 52; licznik++)
	{
		karta = new Karta;
		karta->wartosc = 11;
		talia.push(*karta);
		delete karta;
		karta = NULL;
	}
}


Talia::~Talia()
{
}


void Talia::Tasuj()
{
	int random;
	srand(time(NULL));
	for (int licznik = 0; licznik < 52; licznik++)
	{
		// losuje randomowa liczbe z zakresu od 0 do 51
		random = rand() % 52;

		// przypisuje wskaznik wylosowanej karty do karty pomocniczej
		Karta* pomocnicza[52];

		for (int i = 0; i < random; i++)
		{
			karta
		}

		//zamieniam wskazniki
		tabKart[random] = tabKart[licznik];
		tabKart[licznik] = pomocnicza;
	}

}


void Talia::DrukujTalie()
{
	for (int licznik = 0; licznik < 52; licznik++)
	{
		cout << talia.->wartosc << "  " << tabKart[licznik]->kolor << endl;
	}
}


Karta* Talia::DajKarte()
{		
	// tworze karte pomocniacz i przpisuje jej wskaznik pierkwszej karty tabKart[0] - 
	// potem inkrementuje nrKarty
	Karta* temporary = tabKart[nrKarty];
	tabKart[nrKarty] = NULL;
	delete tabKart[nrKarty];

	nrKarty++;
	return temporary;		
}
