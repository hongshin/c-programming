#include <stdio.h>
#include <stdlib.h>

struct verse_t {
	char text[1024] ;
	struct verse_t * next ;
} ;

void read_a_line (FILE * fp, char * s)
{
	char c ;

	int i = 0 ;
	while ( (c = fgetc(fp)) != '\n' ) {
		s[i] = c ;
		i++ ;
	}
}

int main ()
{
	struct verse_t head ;
	struct verse_t * p = &head ;

	FILE * fp = fopen("NIV.txt", "r") ;

	for (int i = 0 ; i < 31102 ; i++) {
		struct verse_t * v = malloc(sizeof(struct verse_t)) ;
		read_a_line(fp, v->text) ;
		v->next = NULL ;

		p->next = v ;
		p = p->next ;
	}

	for (p = head.next ; p != NULL ; p = p->next) {
		printf("%s\n", p->text) ;
	}

	p = head.next ;
	while (p != NULL) {
		struct verse_t * q ;
		q = p->next ;
		free(p) ;
		p = q ;
	}

	fclose(fp) ;

	return EXIT_SUCCESS ;
}
