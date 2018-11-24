#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int wiersze = 20, kolumny = 20;
  float tablica[20][20] = {0};
  int i=0, j=0, a=0, b=10;

  srand(time(NULL));

  for(i;i<wiersze;i++)
  {
    tablica[0][i] = a + rand() % (b - a + 1);
    tablica[i][0] = a + rand() % (b - a + 1);
  }

  for(i=0;i<wiersze;i++)
  {
    for(j=0;j<kolumny;j++)
    {
      printf("%f\t",tablica[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  for(i=1;i<wiersze;i++)
  {
    for(j=1;j<kolumny;j++)
    {
      tablica[i][j] = (tablica[i-1][j]+tablica[i][j-1])/2.0;
    }
  }

  for(i=0;i<wiersze;i++)
  {
    for(j=0;j<kolumny;j++)
    {
      printf("%f\t",tablica[i][j]);
    }
    printf("\n");
  }

  system("PAUSE");
  return 0;
}
