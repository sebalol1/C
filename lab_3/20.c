#include<stdio.h>
void max(int a, int b)
{
if (a>b)
{printf("Liczba wiksza to %d \n", a);}
else
{printf("Liczba wieksza to %d \n", b);}
}
int main()
{
int a;
int b;
printf("Podaj liczbe a \n");
scanf("%d",&a);
printf("Podaj liczbe b \n");
scanf("%d",&b);
max(a, b);
return 0;
}