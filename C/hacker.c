#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void start(void);

int main()
{
	start();
	return 0;
}

typedef struct
{
	double real;
	int imag;

}equation;

void start()
{
	equation one = {.real = 21.87, .imag = 30};
	equation two = {.real = 13.34, .imag = 112.23};


	printf("The real part for eqn 1 : %.2lf\n", one.real);
	printf("The imaginary part for eqn 1 : %d\n", one.imag);
	printf("The real part for eqn 2 : %.2lf\n", two.real);
	printf("The imaginary part for eqn 2 : %.2d\n", two.imag);

	double add1;
	double add2;

	add1 = one.real + two.real;
	add2 = one.imag + two.imag;

	printf("The sum of the two complex equations is : %.2lf + %.2lfi\n",add1,add2);
}

