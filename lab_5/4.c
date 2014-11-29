#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum DZIEN { PRACUJACY, WOLNY };



int Pracownik(enum DZIEN d)
{
  static int z=0;
	
	if (d == PRACUJACY )
	{
    z=z+1;
      if(z<=7)
        {
		      printf("Dzis pracuje!\n");
        }

      if(z>7)
        {
          z=0;
          printf("Dość! Biorę dzień wolny\n");
        }
  }
	
	if(d == WOLNY)
	{
    z=0;
		printf("Dzis odpoczywam!\n");
	}
return 0;
}

int main(void)
{

	
	int kalendarz[365];


	srand(time(NULL));
	int i;
	for(i=0; i<365; i++) {
		if (rand()%2)
			kalendarz[i] = PRACUJACY;
		else
			kalendarz[i] = WOLNY;
	}



	for (i=0; i<365; i++)
	{
		Pracownik(kalendarz[i]);
	}

    return 0;
}
