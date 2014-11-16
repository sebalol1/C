#include<stdio.h>
int main()
{int i=0;
  char napis[20];
  printf("Podaj dowolny napis");
  scanf("%s", napis);
 i=0;
while(napis[i] != 0  )
{
  printf("%c*", napis[i]);
i++;
}

printf("\b \n");
return 0;
}