#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N ;
	int i ;

	scanf("%d", &N) ;

	int sum = 0 ;
	for (i = 0 ; i < n ; i++) {
		int n ;
		scanf("%d", &n) ;
		sum = sum + n ;
	}
	printf("average: %lf\n", ((double) sum) / ((double) N)) ;

	return EXIT_SUCCESS ;
}
