#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[5] ;
	int n ;

	n = 0 ;
	for ( ; n < 5 ; ) {
		int d ;
		scanf("%d", &d) ;

		if (d <= 0) {
			continue ;
		}

		a[n] = d ;
		n++ ;
	}


	return EXIT_SUCCESS ;
} 
