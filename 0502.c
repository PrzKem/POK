#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  int SIZE =255;
  char napisOtrzymany[SIZE];
  char napisKoncowy[SIZE];
  int N,i,j;
  j=0;
  gets(napisOtrzymany);
  N=strlen(napisOtrzymany);
  for(i=0;i<=N-1;i++)
  {
    if(napis[i] != ' ')
    {
      napisKoncowy[j] = napisOtrzymany[i];
      j++;
    }
  }
  napisKoncowy[j]='\0';
  puts(napisKoncowy);

  system("PAUSE");
  return 0;
}
