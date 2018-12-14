#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef double MACIERZ[20][20];

double transpozycja(MACIERZ m1, MACIERZ m2, int N)
{
  int i=0,j=0;
  for(i=0;i<N;i++)
  {
    for(j=i;j<N;j++)
    {
      m2[i][j] = m1[j][i];
      m2[j][i] = m1[i][j];
    }
  }
}

int main()
{
  MACIERZ A,B;
  int N,wartosc,i,j;

  printf("\nPodaj rozmiar tablicy:\n");
  scanf("%d",&N);
  srand(time(NULL));
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      A[i][j] = rand()/(float)RAND_MAX*10;
      printf("%lf\t", A[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  transpozycja(A, B, N);

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      printf("%lf\t", B[i][j]);
    }
    printf("\n");
  }

  system("PAUSE");
  return(0);
}
