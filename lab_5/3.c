/*Zadanie 3.Otworz program zmienne.c. Brakuje w nim definicji typow Cena i
Pytanie. Nie zmieniaj nic, tylko dodaj same definicje tych typow tak,
aby program kompilowal sie poprawnie.*/
#include <stdio.h>

int main()
{
	float komputer = 2100.50;
	float samochod = 999.99;

  enum Pytanie {TAK, NIE};
	 enum Pytanie p1;

	if (komputer > samochod)
	{
		p1 = TAK;
	}
	else
	{
		p1 = NIE;
	}

	if (p1 == TAK)
	{
		printf("Twoj komputer jest drozszy niz moj samochod!\n");
	}

	return 0;
}
