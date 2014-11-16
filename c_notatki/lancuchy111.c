#include<stdio.h>
int main()
{
char napis[100];
napis[0]='k';
napis[1]='o';
napis[2]='t';
napis[4]='\n';
napis[5]=0;

printf("%s",napis);

//deklaracja napisu
char imie[]={'s','e','b','a',0};
printf("%s\n", imie);

//deklaracja napisu za pomocą "
char miesiac[100]="Listopad";
printf("%s\n", miesiac);

int i;
i=0;
while (miesiac[i] !=0)
{
    printf("%c\n", miesiac[i]);
    i++;
}
printf("dlugosc napisu to %d" ,i);

//zapytamy o koloe
char kolor[100];
printf("Podaj kolor:");
scanf("%s", kolor);
printf("Kolor %s\n", kolor);




return 0;
}