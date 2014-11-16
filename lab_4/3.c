#include<stdio.h>
int main()
{
    char napis[20];
    printf("Podaj napis : \n");
    scanf("%s", napis);

    int i=1;
    while (napis[i] != 0)
    {
	i++;
    }
    printf("Liczba znaków w napisie = %d \n", i);
return 0;
}