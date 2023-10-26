#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, j, n ;

	scanf("%d", &n) ;
	
	for (i = 0 ; i < n/2 ; i++) {
		for (j = 0 ; j < n/2 - i ; j++) {
			printf(" ") ;
		}
		for (j = 0 ; j < i*2 + 1 ; j++) {
			printf("*") ;
		}
		printf("\n") ;
	}

	for (i = 0 ; i < n ; i++) {
		printf("*") ;
	}
	printf("\n") ;

	for (i = 0 ; i < n/2 ; i++) {
		for (j = 0 ; j < i + 1 ; j++) {
			printf(" ") ;
		}
		for (j = 0 ; j < n - 2 * (i + 1) ; j++) {
			printf("*") ;
		}
		printf("\n") ;
	}

	return EXIT_SUCCESS ;
}
