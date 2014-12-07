#include<stdio.h>
struct pracownik
{
    char nazwisko[30];
    float pensja;
    struct data dataurodzenia;
};
struct data
{
    short dzien;
    short miesiac;
    short rok;
};
struct nowadata(short dzien, short miesiac, short rok)
{
    struct datonowa=(dzien,miesiac, rok);
}

void wypisz(struct pracownik n)
{printf("Nazwisko: %s, Pensja: %f, data urodzenia: %d\n", n.nazwisko, n.pensja, n.data_urodzenia);
 }
void pensja(struct pracownik k)
{
printf("Kasa o 100 =%f \n", k.pensja+0.100);
}

int main()
{
struct pracownik Tablica[4]={{"Capek", 1234.56,1890},{"Lem", 6543.12, 1921},{"Hlasko", 2222.22, 1921},{"Stasiuk", 9876.54, 1960}};
wypisz(Tablica[0]);
wypisz(Tablica[1]);
wypisz(Tablica[2]);
wypisz(Tablica[3]);


struct pracownik Tab[4]={{"Capek", 1234.56,1890},{"Lem", 6543.12, 1921},{"Hlasko", 2222.22, 1921},{"Stasiuk", 9876.54, 1960}};
pensja(Tab[0]);
pensja(Tab[1]);
pensja(Tab[2]);
pensja(Tab[3]);
return 0;
}