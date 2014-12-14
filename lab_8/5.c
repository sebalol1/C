#include<stdio.h>




int main()
{ FILE *f=fopen("Nazwiska.txt","r");
    if (f)
	{
	    char bufor[100];
	    long suma;	
	    int liczba;
	    suma=0;
	    do
	    {	fscanf(f,"%d %[^\n]s", &liczba,bufor);
suma=suma+liczba;

} while 




    flose(f)



    return 0;

}