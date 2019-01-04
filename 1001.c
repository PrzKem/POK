#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int konwersje(char liczba[], int podstawa)
{
  int wynik, i, N, waga;
  N=strlen(liczba);
  waga=1;
  wynik=0;
  for(i=1;i<=N;i++)
  {
    wynik = wynik +waga*(liczba[N-i]-'0');
    waga*=podstawa;
  }
  return(wynik);
}

int main()
{
  int wynik;
  char liczba[255];
  gets(liczba);
  wynik=konwersje(liczba, 10);
  printf("%d",wynik);
  system("PAUSE");
  return(0);
}
