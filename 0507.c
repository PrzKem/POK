#include <stdlib.h>
#include <stdio.h>

int main()
{
  int tablica[10][10]={0};
  int i=0,j=0,pomoc=0;

  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      scanf("%d", &tablica[j][i]); // wczytywanie kolumnami
    }
  }

  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      printf("%d\t",tablica[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<10;i++)
  {
    for(j=i;j<10;j++)
    {
      pomoc = tablica[i][j];
      tablica[i][j] = tablica[j][i];
      tablica[j][i]= pomoc;
    }
  }

  printf("\n\n");

  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      printf("%d\t",tablica[i][j]);
    }
    printf("\n");
  }

  system("PAUSE");
  return 0;
}
