#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE * fp = fopen("lines.txt", "r") ;

	char a[256] ;

	int linenum = 1 ;
	char c ;

	do {
		int i = 0 ;
		do {
			c = getc(fp) ;
			if (c != '\n' && c != EOF) {
				a[i] = c ;
				i++ ;
			}
		} while (c != '\n' && c != EOF) ;
		a[i] = '\0' ;

		if (!(i == 0 && c == EOF))
			printf("%d: %s\n", linenum, a) ;
		linenum++ ;
	} while (c != EOF) ;

	fclose(fp) ;

	return EXIT_SUCCESS ;
}
