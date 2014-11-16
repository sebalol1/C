#include<stdio.h>
#include<math.h>

int main()
{
float a;
float b;
float c;
printf("Podaj liczbe a= \n");
scanf("%f",&a);
printf("Podaj liczbe b= \n");
scanf("%f",&b);
printf("Podaj liczbe c= \n");
scanf("%f",&c);
double d=0;
d=c*(a+b)*(a+b)-a*a*a+b-c;
printf("Wynik= %f \n", d);
return 0;
}