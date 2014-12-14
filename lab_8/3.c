#include<stdio.h>
int Czytaj(char nazwa_pliku[], char bufor[])
{	FILE *f=fopen(nazwa_pliku,"w");
	if (f==NULL)
	    {
		printf("Otworsenie pliku nie powiodło sie! \n " );
		return 0;
	    }
	    if (f)
	    {
		int i=0;
		while((bufor[i]=fgetc(f)) != EOF)
		{
		    i++;
		}
	return 1;

    fclose(f);




}
}


int main()
{	char bufor[1000];
	Czytaj("tekst.txt", bufor);

    return 0;
}