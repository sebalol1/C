#include<stdio.h>
// &zmienna  -  zwraca adres komorki pod ktora znajduje sie zmienna
// *WSK  -  zwraca nam zawartosc komorki n aktora wskazuje WSK

void DodajJeden(int n)
{
    n=n+1;
}
void DodajJedenWsk(int *wsk_na_liczbe)
{
    int liczba = *wsk_na_liczbe; //przypisujem do liczby zawartosc komorki pod adresem wsk na liczbe
    liczba++;

    //UMIESZCZAMY ZMODYF. LICZBE PO TEN ADRES
    *wsk_na_liczbe=liczba;
}
void Kwadrat(int b)
{
b=b*b;
}

int main()
{


    int a=5;  //deklaracja zmiennej a
    printf("a=%d\n",a); //wyswietlamy a
    DodajJeden(a); //wywolujemy funkcje ktorej przekazujemy a



    printf("a=%d\n",a);
    DodajJedenWsk(&a);
    printf("a=%d\n",a);
    Kwadrat(a);
    printf("a=%d\n",a);
  //wyswietlamy a
/*    int a = 8 , b=5;
    float liczba=5.0;
    //deklaracja zmiennej ktora wkazuje na adres pamiec pod ktorym jest typ INT
    int *c;
    float *wsk_d = &liczba;
    //ZMEINNA PRZECHOWUJE ADRES KOMOWKI A

    c=&a;
    printf("Pod adresem %p  mamy liczbe %d \n", c, *c);
    printf("Pod adresem %p  mamy liczbe %f \n", wsk_d, *wsk_d);
*/
    return 0; 

}