#include<string.h>
#include<string.h>
int main()
{ char a[100];
  char b[100];
  char c[100];
printf("Podaj 1-zsy napis \n");
scanf("%[^\n]s", a);
printf("Podaj 2-gi napis \n");
scanf("\n%[^\n]s", b);
printf("Długość napisu a to %d , a napisu b to %d \n", strlen(a), strlen(b));

//kopiowanie
strcat(a,b);
strcpy(c,a);
printf("Połączony napis to %s \n", c);

//czy takie same
if(strcmp(a,b) == 0)
{printf("Napisy sa takie same \n");}

// czy napis a w b
if (strstr(a,b))
{
 printf("Napis A znajduje sie w b \n");

}

// wypisywanie na wielkie
int i=0;
while(i<100)
{
a[i]=(islower(a[i]))?toupper(a[i]):tolower(a[i]);
i++;
}
printf("%s \n", a);



return 0;


}