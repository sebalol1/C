#include <stdio.h>


//----------------------------------------------------------------------
// zapis macierzy o wymiarach wysokosc x szerokosc do monochromatycznego
// pliku .pgm (skala szarosci 0-255)
//----------------------------------------------------------------------
void zapisz_macierz_do_obrazka(int macierz[], int wysokosc, int szerokosc)
{
	FILE *f = fopen("obrazek.pgm", "w");
	if (!f) { 
		printf("Problem z zapisem do pliku\n");
		return;
	}
	
	// zapisywanie naglowka
	fprintf(f, "P2\n");
	fprintf(f, "%d %d\n", szerokosc, wysokosc);
	fprintf(f, "255\n");
	
	int i, j;
	for (i=0; i<wysokosc; ++i)
	{
		for (j=0; j<szerokosc; ++j)
		{
			fprintf(f, "%d ", (macierz[i*szerokosc+j])%255);	
		}
	}
	
	fclose(f);
}

//----------------------------------------------------------------------
int main()
{
	// przykladowa macierz
	int rozmiar = 100;
	int macierz[rozmiar][rozmiar];
	
	// uzupelnianie macierzy 
	int i, j;
	for (i=1; i<rozmiar; i++)
	{
		for (j=1; j<rozmiar; j++)
		{
			macierz[i][j] = (j*i)/10 + macierz[i-1][j-1];
		}
	}
	
	// zapisanie obrazka
	zapisz_macierz_do_obrazka(macierz, rozmiar, rozmiar);
	
	return 0;
}
