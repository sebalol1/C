#include<stdio.h>
int main()
{int n;
int i;
printf("Podaj z ilu liczb wyliczyc sume");
scanf("%i", &n);
int suma=0;
for(i=0;i<=n;i++)
{suma=suma+i;


}
printf("Suma wynosi: %i \n", suma);






return 0;
}