#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char s1[32] = "Hello" ;
	char s2[32] = "Goodbye" ;
	char s3[64] ;

	/*
	int i ;
	for (i = 0 ; s1[i] != '\0' ; i++) {
		s3[i] = s1[i] ;
	}
	s3[i] = '\0' ;
	*/
	strcpy(s3, s1) ; 


	printf("%s\n", s3) ;

	return EXIT_SUCCESS ;
}
