#include <stdio.h>

int main()
{
    FILE *fa;
    char bufor[1000];
    
    if(!(fa=fopen("napis.txt", "a")))    {
         printf("blad otwarcia pliku\n");
         return -1;
        }
    
    printf("Tekst: ");

    if(scanf("%s", &bufor)!=1)    {
         printf("blad danych\n");
         return -1;
        }

    fprintf(fa, "tekst: %s \n", bufor);

    fclose(fa);
    return 0;
}
