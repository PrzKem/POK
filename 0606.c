#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Punkt
{
  float x;
  float y;
};

struct Wektor
{
  struct Punkt poczatek;
  struct Punkt koniec;
  double dlugosc;
  double X;
  double Y;
};

int main()
{
  struct Wektor wektor[20];
  int i=0;
  double maks,min;

  for(i;i<20;i++)
  {

    printf("\n\nWektor nr %d",i+1);
    printf("\nPodaj x poczatku");
    scanf("%f", wektor[i].poczatek.x);
    printf("\nPodaj y poczatku");
    scanf("%f", wektor[i].poczatek.y);
    printf("\nPodaj x konca");
    scanf("%f", wektor[i].koniec.x);
    printf("\nPodaj y konca");
    scanf("%f", wektor[i].koniec.y);

    wektor[i].X = wektor[i].koniec.x - wektor[i].poczatek.x;
    wektor[i].Y = wektor[i].koniec.y - wektor[i].poczatek.y;
    wektor[i].dlugosc = pow((pow(wektor[i].X,2)+pow(wektor[i].Y,2)),(1/(2.0)));

    if(i==0)
    {
      maks = wektor[i].dlugosc;
      min = wektor[i].dlugosc;
    }

    if(wektor[i].dlugosc > maks)
      maks = wektor[i].dlugosc;

    if(wektor[i].dlugosc < min)
      min = wektor[i].dlugosc;
  }

  printf("maks: %lf\nmin: %lf",maks,min);

  system("PAUSE");
  return 0;
}
