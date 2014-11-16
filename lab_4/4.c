#include<stdio.h>

int dlugosc(char napis[])
{
int i=1;
    while (napis[i] != 0)
    {
	i++;
    }
return i;

}
int main()
{
    char zdanie[20];
    printf("Podaj napis : \n");
    scanf("%s", zdanie);
    printf("Napis  ma %d znaków \n", dlugosc(zdanie));

    
return 0;
}