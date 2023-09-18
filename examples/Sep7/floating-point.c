#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double y ;
	//const double pi = 3.141592 ;
	double pi = 3.1415921628 ;

	y = 1.0 / 3.0 ;
	printf("%f\n", y) ;

	printf("%f\n", pi) ;

	int x ;
	x = pi ;

	double z ;
	z = x ;

	printf("x: %d\n", x) ;
	printf("z: %f\n", z) ;

	/*

	 pi = 3.14 ;
	x = (int) pi ;

	printf("%f\n", pi) ;
	printf("%d\n", x) ;

	*/
	return EXIT_SUCCESS ;
}
