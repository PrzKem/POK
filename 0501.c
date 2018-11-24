//zapis: wynik+=zmienna oznacza to samo co wynik=wynik+zmienna

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int iloscLiczb[11]={0};
  int a=10, b=20, sumaKontrolna=0;
  int i, wynikLosowania;

  srand(time(NULL));

  for(i=0;i<1000;i++)
  {
    wynikLosowania = a + rand() % (b - a + 1);
    printf("wylosowano: %d",wynikLosowania);
    iloscLiczb[wynikLosowania - a] += 1; //oznaczamy fakt wylosowania konkretnnej liczby
  }
  for(i=0;i<=10;i++)
  {
    printf("\n%d: %d",i+10,iloscLiczb[i]);
    sumaKontrolna += iloscLiczb[i];
  }
  printf("\nSuma kontrolna: %d\n",sumaKontrolna);

  system("PAUSE");
  return 0;
}
