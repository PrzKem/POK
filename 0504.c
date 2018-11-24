#include <stdlib.h>
#include <stdio.h>

int main()
{
  double liczby[30]={0};
  double pomoc;
  int i=0;

  for(i=0;i<30;i++)
  {
    scanf("%lf\n", &liczby[i]);
  }

  for (i=0; i < 15; i++) {
    pomoc = liczby[29-i];
    liczby[29-i] = liczby[i];
    liczby[i] = pomoc;
  }

  for(i=0;i<30;i++)
  {
    printf("Liczba nr: %d zawartosc: %lf\n",i+1,liczby[i]);
  }

  system("PAUSE");
  return 0;
}
