#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[5] = {0, 1, 2, 3, 4} ;
	int b[5] = {10, 11, 12, 13, 14} ;


	a[9] = 42 ;

	int i ;
	for (i = 0 ; i < 5 ; i++) {
		printf("b[%d]=%d\n", i, b[i]) ;
	}


	return EXIT_SUCCESS ;
}
