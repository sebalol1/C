#include<stdio.h>
int main()
{int n;
int i;
printf("Podaj z ilu liczb wyliczyc sume");
scanf("%i", &n);
int suma=0;
while(i<=n)
{suma=suma+i;
i++;

}
printf("Suma wynosi: %i \n", suma);






return 0;
}