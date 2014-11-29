/*Zadanie 1.Napisz program, ktory deklaruje:
a) stala zmiennoprzecinkowa PI = 3.1415926535
b) staly lancuch znakow Przedmiot, ktory zawiera napis "programowanie"
c) zmienna Rok, ktora jest liczba calkowita dodatnia, sprobuj ustawic
ja na -1, a nastepnie wyswietl jej zawartosc
d) wyswietl ilosc bajtow, ktora jest potrzebna do zadeklarowania
zmiennej typu char, short, int oraz long.*/

#include <stdio.h>

int main()
{
  //a) stala zmiennoprzecinkowa PI = 3.1415926535
  long double PI = 3.1415926535;
  printf("PI= %.10Lf\n", PI);

  //b) staly lancuch znakow Przedmiot, ktory zawiera napis "programowanie"
  char Przedmiot[]="programowanie";
  printf("%s\n", Przedmiot);

  //c) zmienna Rok, ktora jest liczba calkowita dodatnia, sprobuj ustawic
  //ja na -1, a nastepnie wyswietl jej zawartosc
  unsigned Rok=-1;
  printf("%d\n", Rok);

  //d) wyswietl ilosc bajtow, ktora jest potrzebna do zadeklarowania
  //zmiennej typu char, short, int oraz long.*/
  char a;
  short b;
  int c;
  long d;

  printf("Typ char potrzebuje %d bajtów\n", sizeof(char));
  printf("Typ short potrzebuje %d bajtów\n", sizeof(short));
  printf("Typ int potrzebuje %d bajtów\n", sizeof(int));
  printf("Typ long potrzebuje %d bajtów\n", sizeof(long));
  printf("Typ long double potrzebuje %d bajtów\n", sizeof(long double));


  return 0;
}
