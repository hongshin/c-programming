#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char reserved[33][16] = {
	"auto",	"else", "long",	"switch", "break", "enum", 
	"register", "typedef", "case", "extern", "return",
	"union", "char", "float", "short", "unsigned", "const",
	"for", "signed", "void", "continue", "goto", "sizeof",
	"volatile", "default", "if", "static", "while", "do",
	"int", "struct", "_Packed", "double"
} ;


/*FIXME*/


int main ()
{
	char s[128] ;

	scanf("%s", s) ;
	printf("%s is %s identifier.\n", s, is_valid_identifier(s) ? "a valid" : "an invalid") ;

	return EXIT_SUCCESS ;
}
