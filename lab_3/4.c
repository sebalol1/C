#include<stdio.h>
int liczby()
{ printf("Podaj liczbę całkowitą ");
  int l;
  scanf("%i",&l);
if (l>0)
{
printf("Liczba >0 \n");
}
else
{printf("Liczba <0 \n");
}
}
int main()
{ liczby();
return 0;
}