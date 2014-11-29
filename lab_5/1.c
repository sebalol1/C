
#include <stdio.h>

int main()
{
  
  long double PI = 3.1415926535;
  printf("PI= %.10Lf\n", PI);

  
  char Przedmiot[]="programowanie";
  printf("%s\n", Przedmiot);

 
  unsigned Rok=-1;
  printf("%d\n", Rok);

  
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
