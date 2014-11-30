#include<stdio.h>
//definicja struktury
struct okrag
{
    int x;
    int y;
    float r;
};


//wiele okręgóœ
//definicja okrag: srodek x,y oraz promien r
//bedziemy potrzebowac 10 okregow
void wypisz(struct okrag o)
{
    printf("Okrąg= (%d, %d, %f) \n", o.x, o.y, o.r);
}

float pole(struct okrag o)
{
    return 3.14*o.r*o.r;
}

int main()
{

struct okrag Tablica[10];


Tablica[0].x=1;
Tablica[0].y=2;
Tablica[0].r=5.5;


wypisz(Tablica[0]);
printf("Pole okręgu to %f\n", pole(Tablica[0]));


return 0;
}