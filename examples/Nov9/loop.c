#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n ;
	int a[10] ;

	do {
		scanf("%d", &n) ;
	} while (!(0 < n && n < 10)) ;
	
	for (int i = 0 ; i < n ; i++) {
		scanf("%d", &(a[i])) ;
		if (a[i] == 0) {
			n = i ;
			break ;
		}
	}

	for (int i = 0 ; i < n ; i++) {
		printf("%d ", a[i]) ;
	}


	return EXIT_SUCCESS ;
}

