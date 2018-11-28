#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  FILE *wWejscia;
  FILE *wWyjscia;
  int x, wynik,pomoc,i=0;
  
  wWejscia = fopen("dane.txt", "r");
  wWyjscia = fopen("wyjscie.txt", "w");
  
  while(fscanf(wWejscia,"%d",&x) == 1)
  {
    wynik =0;
    i=0;
    while (x!=0)
    {
      pomoc = x%10;
      x /= 10;
      wynik += pomoc*pow(2,i);
      ++i;
    }
    fprintf(wWyjscia, "%d\n", wynik);
  }
  
  fclose(wWejscia);
  fclose(wWyjscia);
  system("PAUSE");
  return 0;
}
