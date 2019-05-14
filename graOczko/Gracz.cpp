#include "Gracz.h"



Gracz::Gracz()
{
	nrKarty = 0;
}


Gracz::~Gracz()
{
}


void Gracz::Graj()
{

	zgromadzoneKarty[nrKarty] = talia->DajKarte();
	mojeOczka += zgromadzoneKarty[nrKarty]->wartosc;
	cout << "Liczba moich oczek wynosi: " << mojeOczka << endl;
	cout << "Moje karty to: " << endl;
	nrKarty++;
	
	for (int licznik = 0; licznik < nrKarty; licznik++)
	{
		cout << zgromadzoneKarty[licznik]->kolor << " "
			<< zgromadzoneKarty[licznik]->wartosc << endl;
	}
	

	
}
