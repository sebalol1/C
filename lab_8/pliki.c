#include<stdio.h>



int main()
{	
    FILE *f=NULL;
    //OTWIERANIE PLIKU
    //opcje do otwierania pliku
    //r-czytanie
    //w-pisanie
    // a-dodawanie do końca pliku
    f=fopen("plik.txt","w");
    //otworzenie pliku nie powiodo sie
    if (f==NULL)
    {
	printf("Otworzenie pliku nie powiodło sie");
	return 1;

    }
    //funkcje zwiazane z zapisem do pliku
    fprintf(f, "Mój %d erwszy plik tekstowy \n");
     

    //zamykanie pliku
    fclose(f);






    //czytanie z pliku
    FILE *f2=fopen("plik.txt","r");
    if (f2)
    {	char bufor[100];
	//czytanie
        fscanf(f2,"%s",bufor);
	printf("Pierwszy wyraz pliku to : %s\n,bufor");
	char znak;
	znak=fgetc(f2);
	printf("Kolejny znak to %c \n ", znak); 
	fclose(f2);
    }
    else
    {
	printf("Otwarcie pliku nie powiodlo sie! \n");
    }

    return 0;
}