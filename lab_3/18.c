#include<stdio.h>
void Star()
{int n;
printf("Podaj ile gwiazdek chcesz wyświetlić \n");
scanf("%i",&n);
int i;
for(i=1;i<=n;i++)
{
printf("* ");
}
printf("\n");


}
int main()
{
Star();
return 0;
}
