#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	double x ;
	double y ;
} Point_t ;

Point_t reflect (Point_t p)
{
	Point_t r ;

	r.x = p.y ;
	r.y = p.x ;

	return r ;
}



int main ()
{
	Point_t p1 ;
	p1.x = 3.0 ;
	p1.y = 4.0 ;

	Point_t p2 ;

	p2 = reflect(p1) ;

	printf("p1: (%lf, %lf)\n", p1.x, p1.y) ;
	printf("p2: (%lf, %lf)\n", p2.x, p2.y) ;

	return EXIT_SUCCESS ;
}
