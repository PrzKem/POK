#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int islow(char a)
{
  if(a>=97 && a<=122)
    return(1);
  else
    return(0);
}

void zmiana(char tab[], int ilosc)
{
  int i=0;
  ilosc-=1;
  char pomoc;
  for(i=0;i<(ilosc/2)+1;i++)
  {
    if(islow(tab[i]))
      tab[i] -= 32;
    pomoc = tab[i];
    tab[i] = tab[ilosc-i];
    tab[ilosc-i] = pomoc;
    if(islow(tab[i]))
      tab[i] -= 32;
  }
  puts(tab);
}

int main()
{
  char lancuch[255];
  int ilosc = 0;
  FILE *daneWe;
  daneWe = fopen("dane.txt", "r");
  while(fscanf(daneWe,"%s",lancuch)==1)
  {
    ilosc = strlen(lancuch);
    zmiana(lancuch, ilosc);
  }
  fclose(daneWe);

  system("PAUSE");
  return(0);
}
