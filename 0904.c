#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef double MACIERZ[20][20];

double maksimum(MACIERZ m1, int N, int type, int pos, int *iPoz, int *jPoz)
{
  int i=0,j=0;
  double wynik,pomoc;
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(i==0 && j==0)
        wynik = m1[i][j];
      if(pos == 1)
      {
        if(((type == 1) && (m1[i][j]<=wynik)) || ((type == 0) && (m1[i][j]>=wynik)))
        {
          wynik = m1[i][j];
          *jPoz = j;
          *iPoz = i;
        }
      }
      else if(pos == 0)
      {
        if(((type == 1) && (m1[i][j]<wynik)) || ((type == 0) && (m1[i][j]>wynik)))
        {
          wynik = m1[i][j];
          *jPoz = j;
          *iPoz = i;
        }
      }
    }
  }
  return(wynik);
}

int main()
{
  MACIERZ A;
  int N,wartosc, iPoz, jPoz,i,j;
  double wynik;
  int pos = 1;
  int type = 1;
  char pomoc1,pomoc2;

  printf("\nPodaj p/o:\n");
  scanf("%c",&pomoc1);
  if(pomoc1 == 'o')
    pos = 1;
  else
    pos = 0;

  printf("Podaj m/M:");
  scanf("\n%c",&pomoc2);
  if(pomoc2 == 'm')
    type = 1;
  else
    type = 0;

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
  wynik = maksimum(A, N, type, pos, &iPoz, &jPoz);

  printf("\nZnaleziono ");
  if(pomoc2 == 'm')
    printf("minimum");
  else
    printf("maksimum");

  printf(" o wartosci %lf na pozycji [%d,%d]\n",wynik,iPoz+1,jPoz+1);
  system("PAUSE");
  return(0);
}
