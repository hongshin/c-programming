#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n ;
	
	scanf("%d", &n) ;

	int c[n] ; 

	int i ;
	for (i = 0 ; i < (sizeof(c) / sizeof(int)) ; i++) {
		int d ;
		scanf("%d", &d) ;
		c[i] = d ; 
	}

	for (i = 0 ; i < (sizeof(c) / sizeof(int)) ; i++) {
		printf("%d ", c[i]) ;
	}
	printf("\n") ;

	return EXIT_SUCCESS ;
}
