#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, n ;

	int len_longest_period = 0 ;
	int num_longest_period = 0 ;

	int len_period = 0 ;
	int last_number = 0 ;

	scanf("%d", &n) ;
	len_period = 1 ;
	last_number = n ;
	len_longest_period = 1 ;
	num_longest_period = n ;

	for (i = 0 ; i < 19 ; i++) {
		scanf("%d", &n) ;

		if (last_number == n) {
			len_period = len_period + 1 ;

			if (len_period > len_longest_period) {
				len_longest_period = len_period ;
				num_longest_period = n ;
			}
		}
		else {
			len_period = 1 ;
			last_number = n ;
		}
	}

	for (i = 0 ; i < len_longest_period ; i++) {
		printf("%d ", num_longest_period) ;
	}
	printf("\n") ;

	return EXIT_SUCCESS ;
}
