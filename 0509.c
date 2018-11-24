#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i,j,maksimum, wierszMaksimum;
  const int wiersze = 20, columny = 10;
  int tablica[wiersze][columny];
  int suma[20]={0};

  for(i=0;i<wiersze;i++)
  {
    for(j=0;j<columny;j++)
    {
      scanf("%d", &tablica[i][j]);
      suma[i] += tablica[i][j];
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
  
  for(i=0;i<wiersze;i++)
  {
    printf("\nSuma wiersza %d wynosi %d",i+1,suma[i]);
  }


  system("PAUSE");
  return 0;
}
