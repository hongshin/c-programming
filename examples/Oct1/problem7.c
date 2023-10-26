#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int b, e ;

	scanf("%d %d", &b, &e) ;

	int i ;
	int s = 0 ;
	for (i = b ; i <= e ; i++) {
		s = s + i * i ;
	}
	printf("%d\n", s) ;
	return EXIT_SUCCESS ;
}
