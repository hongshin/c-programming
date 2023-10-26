#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n, i ;
	int a[100] ;

	scanf("%d", &n) ;
	for (i = 0 ; i < n ; i++) {
		scanf("%d", &a[i]) ;
	}


	int k ;
	for (k = 0 ; k < n ; k = k+1 ) {

		int i_min_so_far = -1 ;
		for (i = 0 ; i < n ; i++) {
			if (a[i] != 0) {
				if (i_min_so_far == -1 || a[i] < a[i_min_so_far]) {
					i_min_so_far = i ;
				}
			}
		}
		printf("%d\n", a[i_min_so_far]) ;
		a[i_min_so_far] = 0 ;
	}


	return EXIT_SUCCESS ;
}
