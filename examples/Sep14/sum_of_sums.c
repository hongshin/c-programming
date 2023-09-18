#include <stdio.h>
#include <stdlib.h>

int sum (int v)
{
	if (v == 0)
		return 0 ;

	return v + sum(v - 1) ;
}

int sum_of_sums (int v)
{
	int t, s ;

	if (v == 0)
		return 0 ;

	t = sum_of_sums(v - 1) ;
	s = sum(v) ;
	
	return s + t ;
}


int main ()
{
	int t ;

	t = sum_of_sums(5) ;

	printf("%d\n", t) ;

	return EXIT_SUCCESS ;
}
