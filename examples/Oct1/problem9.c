#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i ;
	int n ;
	int max, max_count ;

	scanf("%d", &n) ;
	max = n ;
	max_count = 1 ;

	for (i = 0 ; i < 19 ; i++) {
		scanf("%d", &n) ;

		if (n > max) {
			max = n ;
			max_count = 1 ;
		}
		else if (n == max) {
			max_count = max_count + 1 ;
		}
	}

	printf("%d (x%d)\n", max, max_count) ;

	return EXIT_SUCCESS ;
}
