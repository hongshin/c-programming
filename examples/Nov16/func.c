#include <stdio.h>
#include <stdlib.h>

/*
f ()
{
	return 0 ;
}
*/

void increment (int a[4]) ;

int main ()
{
	int a[4] = {1, 2, 3, 4} ;

	//void increment (int a[4]) ;
	//printf("%d\n", f()) ;

	increment(a) ;

	for (int i = 0 ; i < 4 ; i++)
		printf("%d ", a[i]) ;
	printf("\n") ;

	return EXIT_SUCCESS ;
}

void increment (int a[4])
{
	for (int i = 0 ; i < 4 ; i++) 
		a[i] = a[i] + 1 ;
}

