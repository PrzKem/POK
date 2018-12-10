#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int setMax(int *pozycja, int dlugosc)
{
  int i=0;
  int max = *pozycja;
  for(i;i<dlugosc;i++)
  {
    if(max<*(pozycja+i))
      max = *(pozycja+i);
  }
  return(max);
}

int main()
{
  int ilosc,i;
  int tab[100]={0};
  int maks,x,y,a=0,b=35;
  srand(time(NULL));
  printf("Podaj ilosc (<100) liczb do wczytania: ");
  scanf("%d",&ilosc);
  srand(time(NULL));
  for(int i=0;i<ilosc);i++)
  {
    x = rand()%b+a;
    tab[i] = x;
  }
  maks = setMax(tab,ilosc);
  printf("\nMaks: %d\n",maks);
  system("PAUSE");
  return(0);
}
