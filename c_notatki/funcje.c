#include<stdio.h>
/*TYP_KTÓRY ZWRACA FUNKCJA	NAZWA_FUNKCJI (ARGUMENTY) */
void Wyswietl_Menu()
{


printf("-----------------------------------\n");
printf("Menu: x-wyjscie,  a-costa, b-costam\n");
printf("-----------------------------------\n");

}



void KolejneLiczby(int pierwsza, int ostatnia)
{
    int i;
    for(i=pierwsza;i<=ostatnia ;i++)
    {printf("%d. \n",i);
    }
}
int main()

{
Wyswietl_Menu();
KolejneLiczby(5,20);


	return 0;

}