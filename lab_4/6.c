/*Zadanie 6.Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie sprawdza, czy wprowadzony tekst jest palindromem.
Wypisz odpowiedni komunikat.
Na przykład: dla tekstu kajak powinien wypisac, ze jest to palindrom.
*) (dla chetnych) Zmodyfikuj program tak, aby przy sprawdzaniu czy
wprowadzony tekst jest palindromem pomijal spacje.
Na przykład: jesli wprowadzony zostanie tekst
"Zakopane na pokaz" program powinien potwierdzic ze jest to palindrom.*/
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

}

int main()
{
  char zadanie[20];
  printf("Podaj napis: ");
  scanf("%s", zadanie);
  int dl=dlugosc(zadanie);
  int i;
  int czy=1;
  for(i=0; i<dl/2; i++) {
      if (zadanie[i] != zadanie[dl-i-1]){
        czy=0;
        break;
      }
}
      if (czy==0)
        printf("Wyraz nie jest palindomrem\n");
      else
        printf("Wyraz jest palindomrem\n");

  return 0;
}
