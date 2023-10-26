#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int c[4] ; 
	
	int i ;

	/*
	for (i = 0 ; i < 4 ; i++) {
		int d ;
		scanf("%d", &d) ;
		c[i] = d ; 
	}
	*/

	for (i = 0 ; i < 4 ; i++) {
		printf("%d ", c[i]) ;
	}
	printf("\n") ;

	return EXIT_SUCCESS ;
}
