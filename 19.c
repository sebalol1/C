#include<stdio.h>
void Star()
{int i,j,x,y=10,z;
printf("Podaj ilość linijek");
scanf("%d",&y);
for(i=0;i<y;i++)
{
x=2*i+1;
z=(2*y+1-x)/2;

for(j=0;j<x;j++)
printf("*");
printf("\n");
}
}
int main()
{Star();
return 0;
}
