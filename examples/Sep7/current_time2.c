#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int hour = 3 ;
	int min = 15 ;
	char separator = ':' ;

	printf("The current time is %i%c%i\n", hour, separator, min) ;

	printf(" - number of minutes since midnight: %i\n", 
			hour * 60 + min) ;
	printf(" - fraction of the hour that has passed: %d\n", 
		min / 60) ;
	printf(" - percentage of the hour that has passed: %i\n", 
		min * 100 / 60) ;

	return EXIT_SUCCESS ;
}

