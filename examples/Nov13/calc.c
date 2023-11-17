#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int r1, r2 ;
	char op ;

	scanf("%d %c %d", &r1, &op, &r2) ;

	int result ;
	switch (op) {
		case '+' :
			result = r1 + r2 ;
			break ;

		case '*' :
			result = r1 * r2 ;
			break ;

		case '/' :
			result = r1 / r2 ;
			break ;

		case '%' :
			result = r1 % r2 ;
			break ;

		case '-' :
			result = r1 - r2 ;
			break ;

		case '^' :
			result = 1 ;
			for (int i = 0 ; i < r2 ; i++) {
				result = result * r1 ;
			}
			break ;

		default:
			printf("Unknown operator: %c\n", op) ;
			break ;
	
	}
	printf("%d\n", result) ;

	return EXIT_SUCCESS ; 
}
