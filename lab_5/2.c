
#include <stdio.h>

enum pora_roku {wiosna, lato, jesien, zima};

int main()
{
  enum pora_roku PORA_ROKU;
  printf("Podaj numer miesiąca: ");
  int numer;
  scanf("%d", &numer);

  switch (numer){
    case 12:
    case 1:
    case 2:
    PORA_ROKU=zima;
    printf("Zima zima zima\n");
    break;

    case 3:
    case 4:
    case 5:
    PORA_ROKU=wiosna;

    case 6:
    case 7:
    case 8:
    PORA_ROKU=lato;

    case 9:
    case 10:
    case 11:
    PORA_ROKU=jesien;
  }

  return 0;
}
