#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef 
	struct {
		double x ;
		double y ;
		int w ;
	} 
	Point_t ;

int main ()
{
	Point_t p1 ;
	p1.x = 3.0 ;
	p1.y = 4.0 ;
	p1.w = 2 ;

	Point_t p2 = {6.0, 8.0} ;

	printf("p1: (%lf, %lf)\n", p1.x, p1.y) ;
	printf("p2: (%lf, %lf)\n", p2.x, p2.y) ;

	double d ;

	d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y)) ;

	printf("|p1 - p2|: %lf\n", d) ;

	return EXIT_SUCCESS ;
}
