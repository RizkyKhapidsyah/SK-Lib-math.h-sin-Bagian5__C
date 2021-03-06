// crt_sincos.c
// This program displays the sine and cosine of pi / 2.
// Compile by using: cl /W4 crt_sincos.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft 
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/


int main(void) {
	double pi = 3.1415926535;
	double x, y;

	x = pi / 2;
	y = sin(x);
	printf("sin( %f ) = %f\n", x, y);

	y = cos(x);
	printf("cos( %f ) = %f\n", x, y);

	_getch();
	return 0;
}