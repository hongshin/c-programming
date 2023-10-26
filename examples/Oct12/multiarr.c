#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[8][8] ;

	int i, j ;

	for (i = 0 ; i < 8 ; i++) {
		for (j = 0 ; j < 8 ; j++) {
			a[i][j] = i + j ;
		}
	}

	for (i = 0 ; i < 8 ; i++) {
		for (j = 0 ; j < 8 ; j++) {
			printf("%d ", a[i][j]) ;
		}
		printf("\n") ;
	}
	

	return EXIT_SUCCESS ;
}
