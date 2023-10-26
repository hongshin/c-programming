#include <stdio.h>
#include <stdlib.h>

int gcd (int a, int b)
{
	int d ;

	if (a > b) {
		d = b ;
	}
	else {
		d = a ; 
	}

	while (d > 2) {
		d = d - 1 ;
		if (a % d == 0 && b % d == 0) {
			return d ;
		}
	}
	return 1 ;
}

int main ()
{
	int a, b ;

	scanf("%d %d", &a, &b) ;

	printf("%d\n", gcd(a, b)) ;

	return EXIT_SUCCESS ;
}
