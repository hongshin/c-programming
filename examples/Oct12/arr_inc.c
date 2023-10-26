#include <stdio.h>
#include <stdlib.h>

void arr_inc (int a[], int length)
{
	int i ;

	for (i = 0 ; i < length ; i++) {
		a[i]++ ;
	}
}


int main ()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;

	arr_inc(a, 10) ;

	int i ;
	for (i = 0 ; i < 10 ; i++) {
		printf("%d ", a[i]) ;
	}
	printf("\n") ;

	return EXIT_SUCCESS ;
}
