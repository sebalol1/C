#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int k;
int u;

    srand(time(0));
    k=rand()%5+1;
printf("Podaj liczbę , może zgadniesz \n");
scanf("%i", &u);
    

    if(k==u)
	{printf("Brawo \n");}
    if(k==u+1 || k==u-1)
	{printf("Blisko \n ");}
    else
	{printf("Próbuj jeszcze raz \n");}





return 0;
}