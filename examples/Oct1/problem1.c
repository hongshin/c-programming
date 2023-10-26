#include <stdio.h>
#include <stdlib.h>

void draw_rect (int n)
{
	int i ;

	for (i = 0 ; i < n ; i++) {
		printf("*") ;
	}
	printf("\n") ;

	for (i = 0 ; i < n - 2 ; i++) {
		printf("*") ;

		int j ;

		for (j = 0 ; j < n - 2 ; j++) {
			printf(" ") ;
		}
		printf("*") ;
		printf("\n") ;
	}

	for (i = 0 ; i < n ; i++) {
		printf("*") ;
	}
	printf("\n") ;

}

int main ()
{
	int n ;

	scanf("%d", &n) ;

	draw_rect(n) ;

	return EXIT_SUCCESS ;
}
