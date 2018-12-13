#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double silnia(double liczba)
{
  double i=1.0,wynik = 1.0;
  for(i=1.0;i<=liczba;i++)
    wynik *= i;
  return(wynik);
}

double potega(double  x, int p)
{
  double wynik=1.0;
  int i;
  for(i=0;i<p;i++)
  {
    wynik *= x;
  }
  return(wynik);
}

double exponentia(double liczba, int n)
{
  double wynik;
  int i=0;
  for(i=0;i<n;i++)
  {
    wynik+= potega(liczba,i)/silnia(i);
  }
  return(wynik);
}

int main()
{
  double liczba;
  int n;
  printf("\nLiczba:\n");
  scanf("%lf", &liczba);
  printf("\nN:\n");
  scanf("%d",&n);
  printf("\n\nWynik: %lf\n", exponentia(liczba,n));
  printf("\nWynik przez exp(x): %lf", exp(liczba));

  system("PAUSE");
  return(0);
}
