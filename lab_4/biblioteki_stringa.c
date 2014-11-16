#include<string.h>
#include<stdio.h>

int main()
{ 
    const char napis[]="To jest przykladowy napis";
    printf("Długość %d \n", strlen(napis)); //długośc łancucha

    
//kopiowanie znaków


char napis2[100]="Ktory ma dalszcza czesc";
strcpy(napis2,napis);
printf("Napis %s \n", napis2);
printf("Napis 1: %s \n", napis);
printf("napis 2: %s \n", napis2);
//łączemoe

strcat(napis2, napis);
printf("Napis: %s\n", napis2);
//porownywanie
if(strcmp(napis,napis2) == 0)
 {printf("Napisy są takie same");}

return 0;
}