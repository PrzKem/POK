#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *wskaznikPlikuWejsciowego;
  FILE *wskaznikDodatnich;
  FILE *wskaznikUjemnych;
  double x;

  wskaznikPlikuWejsciowego = fopen("dane.txt","r");
  wskaznikDodatnich = fopen("dane1.txt", "w");
  wskaznikUjemnych = fopen("dane2.txt", "w");

  while(fscanf(wskaznikPlikuWejsciowego, "%lf", &x) == 1)
  {
    printf("%lf\n",x);
    if(x>=0)
      fprintf(wskaznikDodatnich, "%lf\n",x);
    else
      fprintf(wskaznikUjemnych, "%lf\n",x);
  }

  fclose(wskaznikUjemnych);
  fclose(wskaznikDodatnich);
  fclose(wskaznikPlikuWejsciowego);

  system("PAUSE");
  return 0;
}
