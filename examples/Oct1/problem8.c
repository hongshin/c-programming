#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int hour, minute, period ;

	scanf("%d %d %d", &hour, &minute, &period) ;

	int arrival ;
	arrival = hour * 60 + minute ;

	int i = 1 ;
	while (arrival <= 24 * 60) {
		printf("%d:%d", arrival / 60, arrival % 60) ;

		if (i % 8 == 0) {
			printf("\n") ;
		}
		else {
			printf("\t") ;
		}

		arrival = arrival + period ;
		i = i + 1 ;
	}
	
	return EXIT_SUCCESS ;
}
