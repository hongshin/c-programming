#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int v = 42 ;

	int * p1 ;
	int * p2 ; 

	p1 = &v ;
	p2 = (int *) 0x7ffffffee174 ;

	printf("p1: %p, *p1: %d\n", p1, *p1) ;
	printf("p2: %p, *p2: %d\n", p2, *p2) ;

	return EXIT_SUCCESS ;
}
