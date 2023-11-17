#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int year ;
	scanf("%d", &year) ;

	if (year % 4 != 0) {
		printf("28\n") ;
	}
	else /* year % 4 == 0 */ {
		if (year % 100 != 0) {
			printf("29\n") ;
		}
		else /*year % 100 == 0 */ {
			if (year % 400 == 0) {
				printf("29\n") ;
			}
			else {
				printf("28\n") ;
			}
		}
	}

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
		printf("29") ;
	}
	else {
		printf("28") ;
	}

	if ((year % 4 == 0) && !((year % 100 == 0) && (year % 400 != 0))) {
		printf("29") ;
	}
	else {
		printf("28") ;
	}

	return EXIT_SUCCESS ;
}
