#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	double x ;
	double y ;
} Point_t ;

typedef struct {
	Point_t corner ;
	double width ;
	double height ;
} Rectangle_t ;

int main ()
{
	Rectangle_t rect1 ;

	rect1.corner.x = 3.0 ;
	rect1.corner.y = 4.0 ;
	rect1.width = 2.0 ;
	rect1.height = 5.0 ;

	// bottom-right corner?

	return EXIT_SUCCESS ;
}
