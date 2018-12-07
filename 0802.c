#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float funkcja(float x, float y)
{
  if(x<y)
    return(2*(x+y));
  else if(x==y)
    return(3);
  else
    return(x*x-sin(y));
}


int main()
{
  float dx,dy,suma,x0,y0;
  int Np,Nk, i;
  suma = 0.0;

  scanf("%f", &dx);
  scanf("%f", &dy);
  scanf("%f", &x0);
  scanf("%f", &y0);
  scanf("%d", &Np);
  scanf("%d", &Nk);

  for(i=Np;i<=Nk;i++)
  {
    suma += funkcja(x0+i*dx,y0+i*dy);
  }
  printf("Wynik: %f", suma);


  system("PAUSE");
  return(0);
}
