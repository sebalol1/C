#include<stdio.h>
void szescian()
{int liczba;
int i=0;
while(i<=10)
{liczba=i*i*i;
printf("Kolejny sześcian to: %i \n", liczba);
i++;
}



}
int main()
{

szescian();




return 0;
}