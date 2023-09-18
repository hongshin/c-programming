#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int numerator, denominator ;
	int r ;

	scanf("%d %d", &numerator, &denominator) ;

	r = numerator / denominator ;
	printf("%d\n", r) ;

	return EXIT_SUCCESS ;
}
