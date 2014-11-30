#include <stdio.h>
void zamien(int *x, int *y)
{
int tmp = *x;
*x=*y;
*y=tmp;
}

int main()
{
    int a=5,b=1;
    zamien(&a,&b);
    
    printf("a=%d a b = %d \n", a,b);


return 0;
}