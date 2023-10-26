#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
	char first[] = "Hello" ;

	int i ;
	i = 0 ;
	while (first[i] != '\0') {
		printf("%c", first[i]) ;
		i = i + 1 ;
	}
	printf("\n") ;

	printf("length of first: %d\n", strlen(first)) ;

	return EXIT_SUCCESS ;
}
