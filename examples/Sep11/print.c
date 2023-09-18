#include <stdlib.h>
#include <stdio.h>

void print_new_line ()
{
	printf("\n") ;
}

void print_twice (char c)
{
	printf("%c", c) ;
	printf("%c", c) ;
}

int main ()
{
	print_twice('a') ;
	print_new_line() ;
	print_twice('b') ;
	print_twice('\n') ;

	return EXIT_SUCCESS ;
}
