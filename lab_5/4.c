/*Zadanie 4.Otworz program praca.c. Symuluje on prace w pewnej firmie, ktora z gory
i w sposob losowy ustala pracownikowi dni pracujace i wolne. Jesli
w kalendarzu mamy dzien pracujacy, to funkcja Pracownik wykonuje pewna
prace, a jesli jest to dzien wolny to odpoczywa.

W chwili obecnej, pracownik sumienne wykonuje swoja prace, gdy jest to
dzien pracujacy. Ale wiadomo, ze pracownik bez urlopu/przerwy coraz
bardziej sie meczy a jego efektywnosc spada. Dlatego, jesli pracownik
bedzie pracowal bez przerwy ponad 7 dni pod rzad to powinien
zasygnalizowac to na ekranie komunikatem "Dosc! Biore dzien wolny na
zadanie!".

Zmodyfikuj jedynie (!) kod funkcji Pracownik tak, aby

a) gdy funkcja wykryje, ze pracuje 7 lub wiecej dni pod rzad wyswietlil
komunikat "Dosc! Biore dzien wolny!" Po kazdym dniu wolnym, funkcja
powinna od nowa liczyc poziom "przepracowania".


*) (dla chetnych)
Zmodyfikuj funkcje Pracownik tak, aby brala pod uwage, ze mozna wziac
jedynie 4 dni wolnego na zadanie. Gdyby sie zdarzylo, ze Pracownik
chce wziac 5 dzien wolny na zadanie, program powinien zasygnalizowac
"Pracownik zostal wyrzucony z pracy", a nastepnie zakonczyc dzialanie
programu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum DZIEN { PRACUJACY, WOLNY };


// Funkcja pracujaca,
int Pracownik(enum DZIEN d)
{
  static int z=0;
	// jesli dzien jest pracujacy
	if (d == PRACUJACY )
	{
    z=z+1;
      if(z<=7)
        {
		      printf("Dzis pracuje!\n");
        }

      if(z>7)
        {
          z=0;
          printf("Dość! Biorę dzień wolny\n");
        }
  }
	// jesli dzien jest wolny
	if(d == WOLNY)
	{
    z=0;
		printf("Dzis odpoczywam!\n");
	}
return 0;
}

int main(void)
{

	// Tablica reprezentuje grafik pracy w ciagu roku,
	// bedzie zawierala wartosci PRACUJACY lub WOLNY
	int kalendarz[365];

	// Uzupelniamy kalendarz w sposob pseudolosowy
	srand(time(NULL));
	int i;
	for(i=0; i<365; i++) {
		if (rand()%2)
			kalendarz[i] = PRACUJACY;
		else
			kalendarz[i] = WOLNY;
	}


	// Wykonujemy metode dla kazdego dnia roku
	for (i=0; i<365; i++)
	{
		Pracownik(kalendarz[i]);
	}

    return 0;
}
