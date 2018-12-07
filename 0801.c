#include <stdlib.h>
#include <stdio.h>

void det(float *pozycja, float *wynik)
{
  *wynik = (*pozycja) * (*(pozycja+3)) - ((*(pozycja+1))*(*(pozycja+2)));
}

void wpiszDoTablicy(float *pozycja, float *a, float *b, float *c, float *d)
{
  *pozycja = *a;
  *(pozycja+1) = *b;
  *(pozycja+2) = *c;
  *(pozycja+3) = *d;
}

int main()
{
  float wyznacznikGlowny[4] = {0};
  float wyznacznikX[4] = {0};
  float wyznacznikY[4] = {0};
  float W,Wx,Wy,x1,x2,y1,y2,c1,c2;
  float x, y;
  int i;

  printf("x*");
  scanf("%f",&x1);
  printf("y*");
  scanf("%f",&y1);
  printf("= ");
  scanf("%f", &c1);

  printf("\nx*");
  scanf("%f",&x2);
  printf("y*");
  scanf("%f",&y2);
  printf("= ");
  scanf("%f", &c2);

  wpiszDoTablicy(wyznacznikGlowny, &x1, &y1, &x2, &y2);
  det(wyznacznikGlowny, &W);

  wpiszDoTablicy(wyznacznikX, &c1, &y1, &c2, &y2);
  det(wyznacznikX, &Wx);

  wpiszDoTablicy(wyznacznikY, &x1, &c1, &x2, &c2);
  det(wyznacznikY, &Wy);

  if(W == 0 && (Wx == 0 || Wy == 0))
  {
    printf("\nUklad jest nieozaczony\n");
    system("PAUSE");
    return 0;
  }
  else if(W == 0 && (Wx != 0 || Wy != 0))
  {
    printf("\nUklad jest sprzeczny\n");
    system("PAUSE");
    return 0;
  }
  else if(W != 0 && Wx != 0 && Wy != 0)
  {
    x = Wx/W;
    y = Wy/W;
    printf("\nX: %f\nY: %f\n",x,y);
    system("PAUSE");
    return 0;
  }
}
