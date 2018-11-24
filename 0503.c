#include <stdlib.h>
#include <stdio.h>

int main()
{
  int liczby[20];
  int i,min,pozycjaMin;

  for(i=0;i<20;i++)
  {
    scanf("%d",&liczby[i]);
  }

  min = liczby[0];
  pozycjaMin = 0;

  for(i=0;i<20;i++)
  {
    if(liczby[i]<min)
    {
      min = liczby[i];
      pozycjaMin = i;
    }
  }

  printf("Minimum: %d, index pozycji: %d\n",min,pozycjaMin);

  system("PAUSE");
  return 0;
}
