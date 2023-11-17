#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float f1 = 123.125 ;
	float f2;
	int i1 = 1 ;
	int i2 = -150 ;

	int i3 = 0x12345678 ;
	short int s1 ;

	i1 = f1;                 // floating to integer conversion
	printf ("%f assigned to an int produces %i\n", f1, i1);

	f1 = i2;                 // integer to floating conversion
	printf ("%i assigned to a float produces %f\n", i2, f1);

	f1 = i2 / 100;           // integer divided by integer
	printf ("%i divided by 100 produces %f\n", i2, f1);

	f2 = i2 / 100.0;           // integer divided by a float
	printf ("%i divided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2 / 100;     // type cast operator
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);

	s1 = i3 ;
	printf("s: %x\n", s1) ;

	return EXIT_SUCCESS ;
}
