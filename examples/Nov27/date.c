#include <stdio.h>
#include <stdlib.h>

struct date {
	int month ;
	int day ;
	int year ;
} ;

int main (void)
{
     struct date today, * datePtr ;

	 struct date tomorrow ; 

     datePtr = &today ;

     datePtr->month = 9 ;
     datePtr->day = 25 ;
     datePtr->year = 2015 ;

     printf ("Today's date is %i/%i/%.2i.\n",
               today.month, today.day, today.year % 100) ;

     return EXIT_SUCCESS ;
}
