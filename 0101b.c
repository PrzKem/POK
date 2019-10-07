#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	int y=0, b=0, c=0, x=0;
	printf("Podaj liczbe b: ");
	scanf("%d", &b);
	printf("Podaj liczbe c: ");
	scanf("%d", &c);
	printf("Podaj liczbe x: ");
	scanf("%d", &x);
	y=2*(x*x*x*x)+b*x*x*x+c*x*x+8;
	printf("wynikiem działania jest");
	printf ("\n %d", y);
	
	return 0;
}
