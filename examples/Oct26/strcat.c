#include <stdio.h>
#include <stdlib.h>

void str_cat (char s1[], char s2[])
{
	int i = 0 ; 
	while (s1[i] != '\0') {
		i++ ;
	}
	// i is indicating the index of NULL

	int j = 0 ;
	while (s2[j] != '\0') {
		s1[i + j] = s2[j] ;
		j++ ;
	}

	s1[i + j] = '\0' ;
}


int main ()
{
	char fruit[20] = "banana" ;
	char baked[] = " nut bread" ;

	str_cat(fruit, baked) ;
	printf("%s\n", fruit) ;

	return EXIT_SUCCESS ;
}
