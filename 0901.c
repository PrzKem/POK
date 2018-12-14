#include <stdlib.h>
#include <stdio.h>

void wierzcholek(float a, float b, float c, float *p, float *q)
{
  float delta;
  delta = b*b - 4*a*c;
  *p = ((-1)*b)/(2*a);
  *q = ((-1)*delta)/(4*a);
}

int main()
{
  float p,q,a,b,c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  wierzcholek(a,b,c,&p,&q);
  printf("Wierzcholek: [%f,%f]",p,q);

  system("PAUSE");
  return(0);
}
