#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	int l1, l2, l3 ;

	l1 = 3 ;
	l2 = 4 ;
	l3 = 5 ;

	if (l1 + l2 <= l3) {
		printf("invalid triangle\n") ;
		return EXIT_FAILURE ;
	}

	/* equilateral triangle */

	if (l1 == l2) {
		if (l2 == l3) {
			printf("equilateral.\n") ;
			return EXIT_SUCCESS ;
		}
	}

	/* isosceles triangle */
	/*
	if (l1 == l2) {
		printf("isosceles.\n") ;
	}
	if (l1 == l3) {
		printf("isosceles.\n") ;
	}
	if (l2 == l3) {
		printf("isosceles.\n") ;
	}
	*/

	if (l1 == l2) {
		printf("isosceles.\n") ;
	}
	else if (l1 == l3) {
		printf("isosceles.\n") ;
	}
	else if (l2 == l3) {
		printf("isosceles.\n") ;
	}
	else {
		printf("not even insosceles.\n") ;
	}

	/* right-angled triangle */
	
	int a, b, c ;

	if (l1 < l2) {
		if (l2 < l3) {
			a = l1 ;
			b = l2 ;
			c = l3 ;
		}
		else {
			a = l1 ;
			b = l3 ;
			c = l2 ;
		}
	}
	else /* l2 <= l1 */ {
		if (l3 < l1) {
			a = l2 ;
			b = l3 ;
			c = l1 ;
		}
		else {
			a = l1 ;
			b = l2 ;
			c = l3 ;
		}

	}
	// a <= c and b <= c

	if (a*a + b*b == c * c) {
		printf("right-angled triangle.\n") ;
	}
	else if (a * a + b*b > c * c) {
		printf("acute-angled triangle.\n") ;
	}
	else {
		printf("obtuse-angled triangle.\n") ;
	}

	return EXIT_SUCCESS ;
}
