#include <stdio.h>
#include <stdlib.h>

struct intPtrs {
	int * p1 ;
	int * p2 ;
}

int main ()
{
	int x = 5, y = 4 ;

	struct intPtrs p ;

	struct intPtrs * p_p ;
	p_p = &p ;

	//FIXME

	p_p->p1 = &x ;
	p_p->p2 = &y ;


	printf("%d %d\n", *(p_p->p1) , *(p_p->p2) ) ; // 5 4 
	

	return EXIT_SUCCESS ;
}
