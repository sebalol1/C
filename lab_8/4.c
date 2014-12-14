#include<stdio.h>
int kopiuj(char zpliku[], char dopliku[])
{
    FILE *fczyt=fopen(zpliku,"r");
    FILE *fzapis=fopen(dopliku,"w");
    if (fczyt&&fzapis)
    {
	//czytamy znak po znaku az do konca pliku
	char znak;
	while ((znak==fgetc(fczyt)) != EOF)
	{
	    fprintf(fzapis,"%c",znak);
	}



int main()






return 0;
}