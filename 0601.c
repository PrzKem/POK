#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Point
{
  double x;
  double y;
};

struct Circle
{
  struct Point center;
  double radius;
};

struct squareDiagonal
{
  struct Point begin;
  struct Point end;
};

int main()
{
  struct Point punktPoczatkowy;
  struct Point punktKoncowy;
  struct Circle kolo;
  struct squareDiagonal kwadrat;
  double poleKola=0, poleKwadratu=0, przekatna=0;

  printf("Wpisz x punktu poczatkowego\n");
  scanf(" %lf \n", &punktPoczatkowy.x);
  printf("Wpisz y punktu poczatkowego\n");
  scanf(" %lf \n", &punktPoczatkowy.y);

  kwadrat.begin.x = punktPoczatkowy.x;
  kwadrat.begin.y = punktPoczatkowy.y;

  printf("Wpisz x punktu koncowego\n");
  scanf(" %lf \n", &punktKoncowy.x);
  printf("Wpisz y punktu koncowego\n");
  scanf(" %lf \n", &punktKoncowy.y);

  kwadrat.end.x = punktKoncowy.x;
  kwadrat.end.y = punktKoncowy.y;

  printf("Podaj promien\n");
  scanf(" %lf ",&kolo.radius);

  przekatna = pow((pow((kwadrat.end.x-kwadrat.begin.x),2)+pow((kwadrat.end.y-kwadrat.begin.y),2)),(1.0/2));
  poleKwadratu = przekatna*przekatna*0.5;
  poleKola = M_PI * kolo.radius * kolo.radius;

  printf("\nPole kwadratu: %lf\n", poleKwadratu);
  printf("Odleglosc miedzy punktami: %lf\n", przekatna);
  printf("Pole kola: %lf\n", poleKola);

  system("PAUSE");
  return 0;
}
