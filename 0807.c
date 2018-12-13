#include <stdlib.h>
#include <stdio.h>

int silnia(int liczba)
{
  if(liczba == 0)
    return(1);
  else
    return(liczba*silnia(liczba-1));
}


int main()
{
  int p;
  scanf("%d", &p);
  printf("Wynik: %d\n", silnia(p));

  system("PAUSE");
  return(0);
}
