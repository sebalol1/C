/*Zadanie 5.Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie wyswietla ten tekst w odwrotnej kolejnosci.
Na przykład: napis "sysTemowy" powinien byc wyswietlony jako
"ywomeTsys". Skorzystaj z wczesniej napisanej funkcji dlugosc. */
#include <stdio.h>
int dlugosc(char napis[])
{
  int i=0;
  while (napis[i] != 0)    {
        i++;
  }
  int z;
  for(z=i;z>=0; z--){
        printf("%c", napis[z]);
  }
  printf("\n");
  return i;
  return z;
}

int main()
{
  char zadanie[20];
  printf("Podaj napis: ");
  scanf("%s", zadanie);
  dlugosc(zadanie);

  return 0;
}
