#include <stdlib.h>
#include <stdio.h>


void pokaz(double xp, double xk, double dx)
{
  double i;
  for(i=xp;i<=xk;i+=dx)
  {
    printf("%lf\n",i);
  }
}

int main()
{
  double xp,xk,dx;
  scanf("%lf",&xp);
  scanf("%lf",&xk);
  scanf("%lf",&dx);
  pokaz(xp,xk,dx);

  system("PAUSE");
  return(0);
}
