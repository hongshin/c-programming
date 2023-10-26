#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int i ;
	int a[10000] ;

	srand(time(NULL)) ;

	for (i = 0 ; i < 10000 ; i++) {
		int r = rand() ;
		a[i] = r % 1000  ;
	}


	int range[5][2] = {{0, 199}, {200, 399}, {400, 599}, {600, 799}, {800, 999}} ;

	int r ;
	for (r = 0 ; r < sizeof(range) / (2 * sizeof(int)) ; r++) {
		int begin = range[r][0] ;
		int end = range[r][1] ;

		int counter = 0 ;
		for (i = 0 ; i < 10000; i++) {
			if (begin <= a[i] && a[i] <= end) {
				counter++ ;
			}
		}
		printf("[%d,%d]: %d\n", begin, end, counter) ;

	}

	return EXIT_SUCCESS ;
}
