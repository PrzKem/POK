#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float y;
	float x;
	printf("Podaj liczbe x: ");
	scanf("%f", &x);
	y=pow( (1.0/3+sin(x/2))*(x*x*x+3),1.0/3);
	printf("wynik dzialania to: ");
	printf("%f",y );
	return 0;
}
