#include<stdio.h>
struct kolo
{
    int x;
    int y;
    float r;
};


void wypisz(struct kolo k)
{
    printf("Okrąg k1 = (%d, %d, %f) \n", k.x, k.y, k.r);
    
}

int main()
{ struct kolo t[10];
    t[0].x=1;
    t[0].y=5;
    t[0].r=2;

    t[1].x=4;
    t[1].y=3;
    t[1].r=1;
wypisz(kolo[0]);
wypisz(kolo[1]);
return 0;

}