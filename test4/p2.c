#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*FIXME*/


int main ()
{
	char s[128] ;

	scanf("%s", s) ;
	printf("%s is %s identifier.\n", s, is_valid_identifier(s) ? "a valid" : "an invalid") ;

	return EXIT_SUCCESS ;
}
