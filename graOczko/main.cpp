#include <iostream>
#include "Talia.h"
#include "Krupier.h"
#include "Oczko.h"
using namespace std;

int main()
{	
	Oczko gra;
	gra.talia->Tasuj();
	gra.Run();	

	system("PAUSE");
	return 0;
}