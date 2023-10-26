#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i ;
	int max1, max2 ;

	int n ;
	scanf("%d", &n) ;
	max1 = n ;

	scanf("%d", &n) ;
	if (n > max1) {
		max2 = max1 ;
		max1= n ;
	}
	else {
		max2 = n ;
	}

	for (i = 0 ; i < 8 ; i++) {
		int n ; 
		scanf("%d", &n) ; 

		if (n > max1) {
			max2 = max1 ;
			max1 = n ;
		}
		else {
			if (n > max2) {
				max2 = n ;
			}
		}

	}

	printf("greatest value: %d\n", max1) ;
	printf("second greatest value: %d\n", max2) ; 

	return EXIT_SUCCESS ;
}
