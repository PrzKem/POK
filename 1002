#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int zamiana(int liczba, char lancuch[])
{
  int i=16, parzystosc;
  if(liczba>pow(2,16))
    printf("Za duza liczba");
  else
  {
    parzystosc = liczba%2;
    for(i=15;i>0;i--)
    {
      if(liczba>pow(2,i))
      {
        *(lancuch+16-i)=1;
        printf("1");
        liczba-=pow(2,i);
      }
      else
      {
        *(lancuch+16-i)=0;
        printf("0");
      }
    }
    *(lancuch+16)=parzystosc;
    printf("%d\n", parzystosc);
  }
}

int main()
{
  char lD[16];
  int liczba,i=0;
  scanf("%d", &liczba);
  zamiana(liczba, lD);
  puts(lD);
  printf("\n");
  
  system("PAUSE");
  return(0);
}
