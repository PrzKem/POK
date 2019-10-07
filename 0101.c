#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float b=7.5,a=0.0; 
	int c=0; 
	printf("podaj liczbe c ");
	scanf ("%d", &c);
	printf("wybrana liczba c to %d",c);
	a= sqrt(c*c+b*b);
	printf("\n Wynik dzialania wynosi"); 
	printf("\n %f\n",a);
	system("PAUSE");
	return 0;
}
