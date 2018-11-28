#include <stdlib.h>
#include <stdio.h>

int main()
{
  double poczatek,koniec,dx,i;
  double kwadrat = 0;
  double szescian = 0;
  FILE *wskaznikPliku;
  wskaznikPliku= fopen("wynik.txt","w");

  printf("Podaj poczatek\n");
  scanf("%lf", &poczatek);
  printf("\nPodaj koniec\n");
  scanf("%lf", &koniec);
  printf("\nPodaj krok\n");
  scanf("%lf", &dx);

  for(i=poczatek;i<=koniec;i+=dx)
  {
    kwadrat = i*i;
    szescian = i*i*i;
    printf("%lf\t%lf\t%lf\n",i,kwadrat,szescian);
    fprintf(wskaznikPliku, "%lf\t%lf\t%lf\n",i,kwadrat,szescian);
  }

  fclose(wskaznikPliku);
  system("PAUSE");
  return 0;
}
