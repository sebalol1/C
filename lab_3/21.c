
#include<stdio.h>
void praw()
{double a;
double b;
printf("Podaj a \n");
scanf("%lf", &a);

printf("Podaj b \n");
scanf("%lf", &b);
double w;
double m;
double dz;
if (a>b)
{
a=w;
b=m;
}
else
{
a=m;
b=w;
}
dz=(w-m)/(w+m);
printf("Wuynik= %lf \n", dz);
}

int main()
{

praw();}