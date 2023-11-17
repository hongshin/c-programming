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

Rectangle_t expand (Rectangle_t r) 
{
	r.width = r.width * 2 ;
	r.height = r.height * 2 ;

	return r ;
}

int main ()
{
	Rectangle_t rect1 ;

	rect1.corner.x = 3.0 ;
	rect1.corner.y = 4.0 ;
	rect1.width = 2.0 ;
	rect1.height = 5.0 ;

	
	rect1 = expand(rect1) ;

	printf("%lf, %lf\n", rect1.width, rect1.height) ;

	return EXIT_SUCCESS ;
}
