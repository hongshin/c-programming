#include <stdio.h>
#include <stdlib.h>

struct person {
	char name[32] ; 
	struct person * father ;
	struct person * mother ;
}

int main ()
{
	struct person a = {"A", NULL, NULL} ;
	struct person b = {"B", NULL, NULL} ;
	struct person c = {"C", NULL, NULL} ;
	struct person d = {"D", NULL, NULL} ;
	struct person e = {"E", NULL, NULL} ;


	e.father = &c ;
	e.mother = &d ;

	d.father = &a ;
	d.mother = &b ;


	return EXIT_SUCCESS ;
}
