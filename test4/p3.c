#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef 
	struct {
		int r1 ;
		char op ;
		int r2 ;
	}
	int_expr_t ;


int_expr_t create_expr (char * s)
{
	/*FIXME*/
}

int eval_expr (int_expr_t e)
{
	/*FIXME*/
}


int main ()
{
	char s[128] ;

	scanf("%s", s) ;

	int_expr_t e ;
	e = create_expr(s) ;

	printf("%s=%d\n", s, eval_expr(e)) ;

	return EXIT_SUCCESS ;
}
