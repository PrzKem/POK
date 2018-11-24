#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i,j,maksimum, wierszMaksimum;
  int wiersze = 20, columny = 20;
  int tablica[wiersze][columny];

  for(i=0;i<wiersze;i++)
  {
    for(j=0;j<columny;j++)
    {
      scanf("%d", &tablica[i][j]);
      if(i == 0 && j == 0)
      {
        maksimum = tablica[0][0];
        wierszMaksimum = 0;
      }
      if(tablica[i][j]>=maksimum)
      {
        maksimum = tablica[i][j];
        wierszMaksimum  = j;
      }
    }
  }

  for(i=0;i<wiersze;i++)
  {
    for(j=0;j<columny;j++)
    {
      printf("%d\t",tablica[i][j]);
    }
    printf("\n");
  }

  printf("\nMaksimum: %d wiersz: %d\n",maksimum,wierszMaksimum);

  system("PAUSE");
  return 0;
}
