#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *wp;
  int N,pierwsza=0,poz,i=0;
  int ilosc[10]={0};
  double liczba,maksimum, minimum, przedzialCalkowity, krokPrzedzialu,poczatek,koniec;
  wp = fopen("dane.txt","r");
  scanf("%d",&N);
  while(fscanf(wp,"%lf\n",&liczba) == 1)
  {
    if(pierwsza == 0)
    {
      pierwsza = 1;
      maksimum = liczba;
      minimum = liczba;
    }
    if(liczba>maksimum)
      maksimum =liczba;
    if(liczba<minimum)
      minimum =liczba;
  }
  przedzialCalkowity = maksimum-minimum;
  krokPrzedzialu = przedzialCalkowity/N;

  printf("\nmaksimum: %lf",maksimum);
  printf("\nminimum: %lf", minimum);
  printf("\nprzedzialkrokPrzedzialuCalkowity: %lf", przedzialCalkowity);
  printf("\nkrokPrzedzialu: %lf\n",krokPrzedzialu);
  rewind(wp);
  while(fscanf(wp,"%lf\n",&liczba) == 1)
  {
    poz = 0;
    poczatek = minimum;
    koniec = minimum + krokPrzedzialu;
    for(i=1;i<=N;i++)
    {
        if(poczatek<=liczba && liczba<koniec)
        {
          ilosc[poz]++;
          break;
        }
        else
        {
          poz++;
          poczatek = koniec;
          koniec += krokPrzedzialu;
        }
        if(liczba == koniec)
          ilosc[poz-1]++;
    }
  }

  for(i=0;i<N;i++)
  {
    printf("Przedzial %d: %d\n",i+1,ilosc[i]);
  }
  fclose(wp);
  system("PAUSE");
  return 0;
}
