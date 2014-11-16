/* Szablon programu do "szyfrowania" tekstu za pomoca kodu 
GA-DE-RY-PO-LU-KI */

#include <stdio.h>


//----------------------------------------------------------------------
// funkcja, ktora pobiera tekst z klawiatury i umieszcza
// w tablicy napis[]
void pobierz_tekst(char napis[])
{
	
}

//----------------------------------------------------------------------
// funkcja zamienia litera na znak zgodnie z kodem GA-DE-RY-PO-LU-KI
// a nastepnie zwraca go
char zamien_litere(char litera)
{
	
	return litera;
}

//----------------------------------------------------------------------
// funkcja szyfrujaca napis zrodlo, ktory umieszcza w tablicy cel
void szyfruj(char zrodlo[], char cel[])
{

	// tu powinna znalezc sie petla
	// ktora zamienia litery zrodla zgodnie z funkcja 
	// zamien_litere(); i umieszcza w tablicy cel
	
}

//----------------------------------------------------------------------
void wyswietl_zakodowany_tekst(char napis[])
{
	
}

int main()
{
	char napis_do_zakodowania[255];
	char zakodowany_napis[255];
	

	pobierz_tekst(napis_do_zakodowania);
	
	szyfruj(napis_do_zakodowania, zakodowany_napis);
	
	wyswietl_zakodowany_tekst(zakodowany_napis);
	
}
