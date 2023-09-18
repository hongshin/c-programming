#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int hour ; //declaration
	int minute ;
	char separator ;

	hour = 9 + 1 ; // definition
	minute = hour ;
	separator = '/' ;

	printf("The current time is %d%c%d.\n", hour, separator, minute) ;

	return EXIT_SUCCESS ;
}
