#include <stdio.h>
#include <stdlib.h>

int absolute_value (int v)
{
	if (v < 0) {
		return v * -1 ;
	}
	else if (v > 0) {
		return v ;
	}
}


int main ()
{
	int v ;

	scanf("%d", &v) ;

	printf("%d\n", absolute_value(v)) ;

	return EXIT_SUCCESS ;
}
