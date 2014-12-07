#include<stdio.h>
#include<string.h>
//alokacja pamięci !

int main()
{
    //dekl tab 100
    int tab[100];
    //alokacja pamieci
    int *nowy_obszar_pamieci;
    nowy_obszar_pamieci=malloc(100*sizeof(int)); //malloc przyjmuje ilosc bajtow
    if (nowy_obszar_pamieci)
    {
	//wyzerowanie pamieci
	memset(nowy_obszar_pamieci, 13, 100*sizeof(int));


	// w tym miejsscu z,oemma nowy_obszar_pamiec tp tab 100 int
	int i=0;
	for(i=0;i<100;++i)
	    printf("%d, \n", nowy_obszar_pamieci[i]);
    
	free(nowy_obszar_pamieci);

    }
    else 
    {
	printf("Inichalizacja pamieci nie powiadla sie! \n");
    }
    return 0;
}