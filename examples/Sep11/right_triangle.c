#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double right_triangle_area (double length, double width) ;
double right_triangle_slide (double length, double width) ;

int main () 
{
	printf("right_triangle_area(%lf, %lf): %lf\n", 
			4.0, 3.0, right_triangle_area(4.0, 3.0)) ;

	printf("right_triangle_area(%lf, %lf): %lf\n",
			5.0, 6.0, right_triangle_area(5.0, 6.0)) ;

	printf("right_triangle_slide(%lf, %lf): %lf\n",
			4.0, 3.0, right_triangle_slide(4.0, 3.0)) ;

	printf("right_triangle_slide(%lf, %lf): %lf\n",
			5.0, 6.0, right_triangle_slide(5.0, 6.0)) ;

	return EXIT_SUCCESS ;
}

double right_triangle_area (double length, double width)
{
	return 0.5 * length * width ;
}

double right_triangle_slide (double length, double width)
{
	double s ;
	s = length * length ;
	s = s + width * width ;

	return sqrt(s) ;
}
