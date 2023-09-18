#include <stdio.h>
#include <stdlib.h>

void countdown (int v)
{
	if (v == 0) {
		return ;
	}

	printf("%d ", v) ;

	countdown(v - 1) ;
}


int main ()
{
	countdown(10) ;
	printf("\n") ;

	return EXIT_SUCCESS ;
}
