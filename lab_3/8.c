#include<stdio.h>

int main()
{ printf("Podaj liczbe, a podam Ci dzień tygodnia \n");
int d;
scanf("%i", &d);
    switch(d)
    {	case 1: printf("Poniedziałek\n"); break;
	case 2: printf("Wtorek\n"); break;
	case 3: printf("Środa\n"); break;
	case 4: printf("Czwartek\n"); break;
	case 5: printf("Piątek\n"); break;
	case 6: printf("Sobota\n"); break;
	case 7: printf("Niedziela\n"); break;
	default: printf("Zła liczba\n");break;
    }






return 0;
}