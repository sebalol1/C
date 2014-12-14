#include<stdio.h>

int main()
{   FILE *f=fopen("losowe.txt","w");
    int liczba;
    int tablica[10];
    int i;
    srand(time(0));
    for (i=0;i<10;i++)
    {	
	tablica[i]=rand()%100+1;
	printf("Liczba pseudoloswoa to : %d \n", tablica[i]);
	fprintf(f,"%d \n",tablica[i]);
        printf("Tablica[%d]=%d \n", i, tablica[i]);
    }
    

    fclose(f);
    

    return 0;
}