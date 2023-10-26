#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int number = 5 ;
	int * i_p ;

	i_p = &number ;

	*i_p = 6 ;

	//printf("%p \n", i_p) ;
	printf("%d \n", number) ;


	return EXIT_SUCCESS ;
}
