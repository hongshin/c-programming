#include <stdio.h>
#include <stdlib.h>

struct verse_t {
	char book[16] ;
	int num ;
	char text[1024] ;
} ;

int main ()
{
	/*
	struct verse_t NIV[3000] ;
	for (int i = 0 ; i < 3000; i++) {
		printf("%d ", NIV[i].num) ;
	}
	*/

	struct verse_t head ;
	struct verse_t * p = &head ;

	for (int i = 0 ; i < 30000 ; i++) {
		p->next = (struct verse_t *) malloc(sizeof(verse_t)) ;
		p = p->next ;
	}

	for (p = &head ; p != NULL ; p = p->next) {
		printf("%d ", p->value) ;
	}
	return EXIT_SUCCESS ;
}
