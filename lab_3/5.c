#include<stdio.h>
int main()
{printf("Podaj liczbę a\n ");
  int a;
  scanf("%i",&a);
 printf("Podaj liczbę b\n ");
  int b;
  scanf("%i",&b);
if (a>0 && b>0)
{printf("Liczba a i b jest >0\n ");
}
if (a>0 && b<0)
{printf("Liczba a jest >0, a b <0\n ");

}
if (a<0 && b<0)
{printf("Liczba a i b jest <0 \n");
}
if (a<0 && b>0)
{
printf("liczba a<0 i b>0");
}


return 0;
}