#include<stdio.h>
int main()
{	FILE *f=fopen("pliki.txt","r");
    if (f)
    {
	//czytanie znak po znaku
	char znak;
/*	do
	{znak=fgetc(f);
	printf("%c",znak);
	}while(znak!=EOF);*/
    while((znak=fgetc(f)) != EOF)
    {printf("%c",znak);
 }	fclose(f);
    }
    else
    {
	printf("blad \n");
    }

    return 0;
}