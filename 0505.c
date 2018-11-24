#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char napis[255];
  int ilosc[26]={0};
  int i=0, dlugosc, nieznanyZnak=0;
  gets(napis);
  dlugosc = strlen(napis);
  for(i;i<(dlugosc-1);i++)
  {
    if(napis[i]<=122 && napis[i]>96)
    {
      ilosc[napis[i]-97] += 1;
    }
    else
    {
      nieznanyZnak += 1;
    }
  }

  for(i=0;i<=25;i++)
  {
    printf("Znak %c wystepuje %d razy\n",97+i,ilosc[i]);
  }
  printf("Nieznany znak wystepuje %d razy\n", nieznanyZnak);
  system("PAUSE");
  return 0;
}
