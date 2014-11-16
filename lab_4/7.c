#include<stdio.h>

int main ()
{char napis[20];
char tekst_zakodowany[20];
printf("Podaj napis \n");
scanf("%s", napis);
printf("%s \n", napis);
int i;
for (i=0;i<20;i++)
{
    if (napis[i]=='g')
	 tekst_zakodowany[i]='a';
    else
    if (napis[i]=='d')
	 tekst_zakodowany[i]='d';
    else
    if (napis[i]=='r')
	 tekst_zakodowany[i]='y';
    else
    if (napis[i]=='p')
	 tekst_zakodowany[i]='o';
    else
    if (napis[i]=='l')
	 tekst_zakodowany[i]='u';
    else
    if (napis[i]=='k')
	 tekst_zakodowany[i]='i';
    else
    tekst_zakodowany[i]=napis[i];

}
printf("%s", tekst_zakodowany);
printf("\n");
return 0;
}

