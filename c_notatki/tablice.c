#include <stdio.h>
int main()
{// Deklaracja tablicy
int tablica[50]; //tablica dla 50 zmiennych typu int
int tab2[10]={1,2,3,4,5,6,7};
int tab3[]={123,1234,142};

tablica[0]=1;
tablica[1]=2;
 int i;
for (i=0;i<50;i++)
{
tablica[i]= i+1;
}

for (i=0;i<50;i++)
{
printf("%d,", tablica[i]);
}
//uzupełnienie tablica






	return 0;
}