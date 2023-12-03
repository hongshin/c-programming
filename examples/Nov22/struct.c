#include <stdio.h>
#include <stdlib.h>

struct date {
	int month ;
	int day ;
	int year ;
} ;

typedef struct date date_t ;

int main ()
{
	date_t today = {11, 23, 2023} ;

	date_t * p ;

	printf("p:           %p\n", p) ;
	printf("&(p->month): %p\n", &(p->month)) ;
	printf("&(p->day):   %p\n", &(p->day)) ;
	printf("&(p->year):  %p\n", &(p->year)) ;

	return EXIT_SUCCESS ;
}
