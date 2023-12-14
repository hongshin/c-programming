#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int findAllString (char * text, char * s1, int * locs)
{
	/*FIXME*/
}


int main ()
{
	char text [] = "the wrong son" ;
	int locs[50] ;

	findAllString(text, "o", locs) ;
	printf("%d %d\n", locs[0], locs[1]) ; // 6 11

	findAllString(text, "x", locs) ;
	printf("%d\n", locs[0]) ; // -1

	return EXIT_SUCCESS ;
}
