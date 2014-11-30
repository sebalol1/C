#include<stdio.h>
//wiele okręgóœ
//definicja okrag: srodek x,y oraz promien r
//bedziemy potrzebowac 10 okregow
void wypisz(int x, int y, float r)
{
    printf("Okrąg= (%d, %d, %f) \n", x, y, r);
}

float pole(int x, int y, float r)
{
    return 3.14*r*r;
}

int main()
{
    int x[10];
    int y[10];
    int r[10];
//uzupelniamy
    x[0]=1;
    y[0]=2;
    r[0]=5.0;

wypisz(x[0], y[0], r[0]);
printf("Pole okręgu to %f\n", pole(x[0],y[0],r[0]));


    x[1]=2;
    y[1]=6;
    r[1]=2.5;

wypisz(x[1], y[1], r[1]);
printf("Pole okręgu to %f\n", pole(x[1],y[1],r[1]));

return 0;
}