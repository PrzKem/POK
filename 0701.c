#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  double srednia, odchylenie, liczba,suma,sumaOdchylenie;
  int ilosc=0, przedzialPierwszy=0, przedzialDrugi=0, przedzialTrzeci=0,ponad=0;
  FILE *wp,*wRaport;
  wp = fopen("dane.txt","r");
  wRaport = fopen("raport.txt","w");

  while(fscanf(wp,"%lf\n",&liczba) == 1)
  {
    suma += liczba;
    ilosc++;
  }
  srednia = suma/ilosc;
  rewind(wp);
  wp = fopen("dane.txt","r");
  while(fscanf(wp,"%lf\n",&liczba) == 1)
  {
    sumaOdchylenie += pow((srednia-liczba),2);
  }
  odchylenie = sqrt(sumaOdchylenie/(ilosc-1));
  printf("odchylenie: %lf\n",odchylenie);

  rewind(wp);

  while(fscanf(wp,"%lf\n",&liczba) == 1)
  {
    if((liczba >= (srednia-odchylenie))&&(liczba<=(srednia+odchylenie)))
      przedzialPierwszy++;
    else if((liczba>=(srednia-2*odchylenie))&&(liczba<=(srednia+2*odchylenie)))
      przedzialDrugi++;
    else if((liczba>=(srednia-3*odchylenie))&&(liczba<=(srednia+3*odchylenie)))
      przedzialTrzeci++;
    else
      ponad++;
  }

  printf("\n1: %d\n2: %d\n3: %d\nponad: %d\n",przedzialPierwszy,przedzialDrugi,przedzialTrzeci,ponad);
  fprintf(wRaport, "\n1: %d\n2: %d\n3: %d\n",przedzialPierwszy,przedzialDrugi,przedzialTrzeci);

  fclose(wp);
  fclose(wRaport);
  printf("ilosc: %d\n", ilosc);
  system("PAUSE");
  return 0;
}
