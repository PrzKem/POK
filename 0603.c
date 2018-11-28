#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  double A, wynik,a,b;
  int N, i=0;
  FILE *wskaznikPliku;

  wskaznikPliku = fopen("dane.txt","w");

  srand(time(NULL));

  printf("Podaj A\n");
  scanf("%lf", &A);
  printf("Podaj N\n");
  scanf("%d", &N);

  a=A;
  b=(-1)*A;

  for(i=0;i<=N;i++)
  {
    wynik = (rand() / (float)RAND_MAX) * (b - a) + a;
    printf("%lf\n", wynik);
    fprintf(wskaznikPliku, "%lf\n", wynik);
  }
  
  fclose(wskaznikPliku);
  system("PAUSE");
  return 0;
}
