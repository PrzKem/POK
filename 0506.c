#include <stdlib.h>
#include <stdio.h>

int main()
{
  int tablica[10][10];
  int i=0,j=0;
  int flagaSymetryczna = 1, flagaDiagonalna = 1, flagaTrojkatna = 1;

  for(i;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      scanf("%d", &tablica[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      if(tablica[i][j] != tablica[j][i])
      {
        flagaSymetryczna = 0;
        break;
      }
    }
    if(flagaSymetryczna == 0)
      break;
  }

  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      if(i != j)
      {
        if(tablica[i][j] != 0)
        {
          flagaDiagonalna = 0;
          break;
        }
      }
    }
    if(flagaDiagonalna == 0)
      break;
  }

  for(i=0;i<10;i++)
  {
    for(j=0;j<i;j++)
    {
      if(tablica[j][i] != 0)
      {
        flagaTrojkatna = 0;
        break;
      }
    }
    if(flagaTrojkatna == 0)
      break;
  }

  if(flagaTrojkatna == 1)
  {
    printf("Tablica jest gorno trojkatna.\n");
  }
  if(flagaDiagonalna == 1)
  {
    printf("Tablica jest diagonalna.\n");
  }
  if(flagaSymetryczna == 1)
  {
    printf("Tablica jest symetryczna.\n");
  }
  system("PAUSE");
  return 0;
}
