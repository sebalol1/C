#include<stdio.h>
int main()
{
    //wsk do poszczegolnycg el tabl
    int tablica[100];
    int i;
    for (i=0;i<100;i++) tablica[i]=2*i;
    // wsk typu int
    int *wsk;
    for (i=0; i<1000;i++)
    {
	wsk = &tablica[i];

	*wsk=*wsk+1; //zw ity el tab
	printf("Element %d to %d \n", i , *wsk);
	wsk=wsk+1; // wsk przeskoczy na kolejny el tab
    }
    return 0;
}