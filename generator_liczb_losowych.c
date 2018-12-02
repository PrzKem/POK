#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
  float x,y,z1,z2,a=0,b=1;
  int ilosc_losowan;
  FILE *wp;
  char nazwaWyjsciowa[255];

  printf("Podaj nazwe pliku wyjsciowego\n");
  scanf("%s",nazwaWyjsciowa);

  wp = fopen(nazwaWyjsciowa,"w");
  srand(time(NULL));
  ilosc_losowan = rand()%100;
  for(int i=0;i<=ilosc_losowan;i++)
  {
    x = (rand() / (float)RAND_MAX) * (b - a) + a;
    y = (rand() / (float)RAND_MAX) * (b - a) + a;
    z1 = cos(2*M_PI*y)*sqrt((-2)*log(x));
    z2 = sin(2*M_PI*y)*sqrt((-2)*log(x));
    fprintf(wp, "%f\n", z1);
    fprintf(wp, "%f\n", z2);
  }

  return 0;
}
