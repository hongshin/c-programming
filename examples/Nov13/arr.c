#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[10] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 } ;

	printf("a: %lld\n", (long long) a) ;

	for (int i = 0 ; i < 10 ; i++) {
		printf("&(a[%d]): %lld\n", i, (long long) &(a[i])) ;
	}

	for (int i = 0 ; i < 10 ; i++) {
		int * p ;
		p = a + i ;
		printf("a+%d: %lld, %d\n", i, (long long) p, *p) ;
	}


	return EXIT_SUCCESS ;
}
