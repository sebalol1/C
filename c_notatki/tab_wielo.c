#include <stdio.h>
int main()
{
 int macierz[10][10];
macierz [0][0]=1;
macierz [0][1]=2;
macierz [0][2]=3;

int i,j;
//petla po wierszach
for (i=0;i<10;i++)
{
    for (j=0; j<10;j++)
    {
	printf("%d,", macierz[i][j]);
    }
    printf("\b  \n");
}

return 0 ;
}