#include <stdlib.h>
#include <stdio.h>

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


int main()
{
  int p;
  double r;
  scanf("%d", &p);
  scanf("%lf", &r);
  printf("Wynik: %lf\n", potega(r,p));

  system("PAUSE");
  return(0);
}
