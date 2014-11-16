#include <stdio.h>
//zmienne wyliczeniowe
enum TYDZIEN { PON, WT, SRO, CZW, PT, SB, ND};
//stała w funkcji
int silnia(const int n)
{

return 1;
}
//zmienne statyczne
void fun()
{   static int i=0;
    printf("wykonuje fun() po raz %d! \n", i);
    i=i+1;
}
int main(int liczba, char * tablica[])
{
enum TYDZIEN tydz;
    tydz=WT;

    int a;
    short b;
    long c;
    //sprawdzanie ile bajtów potrzebne jest na przechowanie danego typu danych
    printf("Typ int potrzebuje %d bajtow\n", sizeof(int));
    printf("Typ int potrzebuje %d bajtow\n", sizeof(short));
    printf("Typ int potrzebuje %d bajtow\n", sizeof(long));

// stałe
    const float pi=3.14;
    const int tab[]={1,2,3,4,5,6,7};
fun ();
fun ();
fun ();
    return 0;
}
