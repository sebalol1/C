#include<stdio.h>
struct Kolo
{
    int x,y;
    float r;
};
void wypisz(struct Kolo kolo)  //metoda przekazywanie argumentu przez wartość, przekazywanie całej str lpkalne
{	

    printf("Kolo = %d, %d , %f \n", kolo.x, kolo.y, kolo.r);
}
void wypisz_wsk(struct Kolo *kolo) //przekazywanie samego adresu pamieci gdzie sie znajduje struktura, metoda przekazywania arg przez wsk
{
    if (kolo==NULL) {printf("Bledny adres! \n"); return;}
    printf("Kolo = %d, %d , %f \n", kolo->x, kolo->y, kolo->r);//strzałka bo argument prez wsk
}
struct Kolo Zeruj(struct Kolo jakieskolo)
{
    jakieskolo.x=jakieskolo.y=jakieskolo.r=0;
    return jakieskolo;
}
void Zeruj_wsk(struct Kolo *wskKolo)
{
wskKolo->x=0;
wskKolo->y=0;
wskKolo->r=0;

}
int main()
{
    //Tworzenie nowego obiektu
    struct Kolo kolo1 ={1, 5 ,6.0};

    wypisz(kolo1);
    
    //wskazniki
    float f=10.0;
    float *wsk=&f;
    // zmiana skladowych 
    kolo1.r=7.0 // przez obiekt
    (*wsk_do_kola).r=7.0; // przez obiekt na ktory wskazuje wsk
    wsk_do_kola->r=7.0;

    //wsk do struktur
    struct Kolo * wsk_do_kola;
    wsk_do_kola=&kolo1;//przypisujemy pod adres pod ktorym znajduje si estruktura Kolo
    wypisz(*wsk_do_kola);
    wypisz_wsk(wsk_do_kola);

    // odwolanie soe do skl struktury
    printf("Promien %f \n", kolo1.r);
    printf("promien %f \n", wsk_do_kola->R); //przez wsk



    //FUNKCJA KTÓRA ZMIENIA SKLADOWE STRULTURY, KTORA PRZEKAZEMY WRZEZ WSK
    //kolo1=Zeruj(kolo1);
    Zeruj_wsk(wsk_do_kola);
    wypisz(kolo1);

    
}