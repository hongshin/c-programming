



#include <stdio.h>
#include <stdlib.h>

int str_len (char * s)
{
	int i = 0 ;
	while (s[i] != '\0') {
		i++ ;
	}
	return i ;
}

char * str_dup (char * s1)
{
	char * s2 ;
	s2 = (char *) malloc(sizeof(char) * (str_len(s1) + 1)) ;

	int i = 0 ;
	while (s1[i] != '\0') {
		s2[i] = s1[i] ;
		i++ ;
	}
	s2[i] = '\0' ;

	return s2 ;
}

int main ()
{
	char s1[10] = "Hello" ;
	// char * s1 ;
	// char * s1 = local_malloc(10) ;

	scanf("%s", s1) ;
	
	/*
	*(s2) = 'H' ;
	*(s2 + 1) = 'e' ;
	*(s2 + 2) = 'l' ;
	*(s2 + 3) = 'l' ;
	*(s2 + 4) = 'o' ;
	*(s2 + 5) = '\0' ;
	*/
	/*
	s2[0] = 'H' ; // *(s2 + 0) = 'H' ;
	s2[1] = 'e' ;
	s2[2] = 'l' ;
	s2[3] = 'l' ;
	s2[4] = 'o' ;
	s2[5] = '\0' ;
	*/

	s2 = str_dup(s1) ;

	printf("%s\n", s2) ;

	free(s2) ;
	return EXIT_SUCCESS ; // free(s1) ;
}
