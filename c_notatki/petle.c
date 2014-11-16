#include<stdio.h>
#include<stdlib.h>
int main()
{ 
int i;
int suma=0;
for ( i=50; i>=0; i--)
{
suma=suma+i;
}
printf("Suma = % d" , suma);



printf("i po wyjsciu z petli = %d \n" , suma);
return 0;
}