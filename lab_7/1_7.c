#include<stdio.h>
struct kolo
{
    int x;
    int y;
    float r;
};

void Zwieksz(struct kolo *zw)
{
zw->x=zw->x+1;
zw->y=zw->y+1;
zw->r=zw->r+1;
}

int main()
{
struct kolo kol={1,2,3.0};
struct kolo *zw;
zw=&kol;
Zwieksz(zw);
printf("Składowe po zwiekszenie: %d %d %f \n", kol.x, kol.y, kol.r);


return 0; 
}