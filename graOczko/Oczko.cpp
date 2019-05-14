#include "Oczko.h"



Oczko::Oczko()
{
	krupier = new Krupier(17);
	gracz = new Gracz;
	talia = new Talia;
	krupier->talia = talia;
	gracz->talia = talia;
	
}


Oczko::~Oczko()
{
}


void Oczko::Run()
{
	int nrKarty = 0;
	char wybor;
	krupier->Graj();
	for (;;)
	{
		system("cls");
		gracz->Graj();
		if (gracz->mojeOczka > 21)
		{
			break;
		}
		cout << "Czy chchesz pobrac kolejna karte? Wcisnij t/n" << endl;
		cin >> wybor;
		if (wybor == 'n')
		{
			break;
		}
		if (talia->nrKarty >= 52)
		{
			cout << "Brak kart w talii!" << endl;
			break;
		}
	}
	cout << endl;
	cout << "Liczba oczek krupiera: " << krupier->mojeOczka << endl;
	cout << "Twoja liczba oczek: " << gracz->mojeOczka << endl;

	if ((gracz->mojeOczka > krupier->mojeOczka) && (gracz->mojeOczka <= 21)
		|| (krupier->mojeOczka > 21) && (gracz->mojeOczka <= 21))
	{
		cout << "Gratulacje! Wygrales :)" << endl;
	}
	else
	{
		if ((gracz->mojeOczka == krupier->mojeOczka)
			|| (gracz->mojeOczka > 21 && krupier->mojeOczka > 21))
		{
			cout << "Remis!" << endl;
		}
		else
		{
			cout << "Wygrywa krupier!" << endl;
		}
	}
	
}
