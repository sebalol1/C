#include<stdio.h>
#include<math.h>

int main()
{
float a=1.62;
float b=3.14;
float c=2.72;
double d=0;
d=c*(a+b)*(a+b)-a*a*a+b-c;
printf("Wynik= %.7lf \n", d);
return 0;
}