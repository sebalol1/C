#include<stdio.h>
int main(int argn, char **argv)
{	int a=1;
	int b=3;
	int suma=0;
	float pi=3.141592653589;     //DOUBLE
	suma=a+b;
	    printf("Cześć!\n");
	    printf("Suma= %i \n", suma);
	    printf("Pi = %.4f \n", pi);
// rzutowanie zmiennych
int zaokr_pi = pi;
printf("Zaokrąglone pi =  %d \n" , zaokr_pi);

// Deklaracja zmiennej znakowej
char znak = 'x' ; // ! UWAGA NA POJEDYNCZY CUDZYSŁOW !!!@!
printf("Znak = %c \n " , znak);

// DEKLARACJA ZMIENNEJ LONG 
long long liczba = 1234567898765433;
printf("Liczba = %lld \n", liczba);

//wprowadzanie liczb itd...
printf("Podaj liczbe calkowita: ");
int dzien;
scanf("%d", &dzien);
printf("Podany dzień to %d \n", dzien);

printf("Podaj liczbe zmiennoprzecinkowa: ");
float cena;
scanf ("%f", &cena);

// ify
if ( dzien > 10 )  // !!!!uwaga!!!! dwa znaki równosci
{
	printf("Oby nie poniedziałek\n"); 
}
else
{
	printf("Masz szczęście \n ");
}
// instrukcja warunkowa wielokrotnego wyboru
switch (dzien)
{ 	case 1 : printf("Jest poniedzialek\n"); break;
	case 2 : printf("Jest wtorek\n "); break;
	default : printf("Podałes zly dzien"); break;
}

	return 0;
}