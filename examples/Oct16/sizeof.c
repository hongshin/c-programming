#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[10] ;

	int len ;

	len = sizeof(a) / sizeof(int) ;

	printf("%d\n", len) ;

	len = sizeof(a) / sizeof(a[0]) ;
	printf("%d\n", len) ;

	return EXIT_SUCCESS ;
}
