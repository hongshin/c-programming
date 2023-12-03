#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a = 42 ;

	int * p_b ;
	p_b = (int *) malloc(sizeof(int)) ;

	*p_b = 43 ;

	printf("a: %d\n", a) ;
	printf("*p_b: %d\n", *p_b) ;


	free(p_b) ;


	return EXIT_SUCCESS ;
}
