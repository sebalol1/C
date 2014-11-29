/*Zadanie 2.Napisz program, ktory pyta uzytkownika o numer miesiaca, a nastepnie
deklaruje zmienna PORA_ROKU, ktora ustawia na:
a) WIOSNA, jesli numer miesiaca to 3,4 lub 5
b) LATO, jesli numer miesiaca to 6,7 lub 8
c) JESIEN, jesli numer miesiaca to 9,10 lub 11
d) ZIMA, jesli numer miesiaca to 12,1 lub 2
W tym celu zadeklaruj zmienna wyliczeniowa PORA_ROKU, ktora zawiera
pola WIOSNA, LATO, JESIEN i ZIMA.
Nastepnie sprawdz, czy PORA_ROKU to ZIMA, a jesli tak, to niech
program wypisze komunikat "Zima zima zima".*/

#include <stdio.h>

enum pora_roku {wiosna, lato, jesien, zima};

int main()
{
  enum pora_roku PORA_ROKU;
  printf("Podaj numer miesiąca: ");
  int numer;
  scanf("%d", &numer);

  switch (numer){
    case 12:
    case 1:
    case 2:
    PORA_ROKU=zima;
    printf("Zima zima zima\n");
    break;

    case 3:
    case 4:
    case 5:
    PORA_ROKU=wiosna;

    case 6:
    case 7:
    case 8:
    PORA_ROKU=lato;

    case 9:
    case 10:
    case 11:
    PORA_ROKU=jesien;
  }

  return 0;
}
