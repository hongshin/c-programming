#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n ;

	scanf("%d", &n) ;

	switch (n) {
		case 0:
			printf("Zero\n") ;
		case 1:
			printf("One\n") ;
			break ;
		case 2:
			printf("Two\n") ;
			break ;

		/*
		default:
			printf("Not Zero, One, or Two\n") ;
			break ;
		*/

	}

	return EXIT_SUCCESS ;
}
