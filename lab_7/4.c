#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{  
    char bufor[1000];
    printf("Podaj napis");
    scanf("%s",bufor);
    

// policzyć długość napisu
    int dl;
    dl=strlen(bufor);

//zadeklarowac wskznik do char
    char *napis;
    

// przydzielić mu dop ilosc pamieci potrzebna na zapisanie tam napisu z bufora
    napis=malloc(dl*sizeof(char));
// wyswietlic napis ze zmiennej napis
    strcpy(napis,bufor);
    printf("%s \n", napis);

//zwolnic pamiec
    free(napis);

}