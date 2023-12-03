#include <stdio.h>
#include <stdlib.h>

struct entry {
	int value ;
	struct entry * next ;
} ;


struct entry * addEntry (struct entry * listPtr)
{
	while (listPtr->next != NULL) {
		listPtr = listPtr->next ;
	}
	
	listPtr->next = (struct entry *) malloc(sizeof(struct entry)) ;

	if (listPtr->next != NULL) {
		(listPtr->next)->next = (struct entry *) NULL ;
	}

	return listPtr->next ;
}


int main ()
{
    struct entry list ;
	list.next = NULL ;

	int n ;
	scanf("%d", &n) ;

	for (int i = 0 ; i < n ; i++) {
		int d ;
		scanf("%d", &d) ;

		struct entry * newEntry ;
		newEntry = addEntry(&list) ;
		newEntry->value = d ;
	}

	struct entry * listPtr = &list ;
    while (listPtr != (struct entry *) NULL ) {
    	printf ("%i\n", listPtr->value);
    	listPtr = listPtr->next;
    }

     return EXIT_SUCCESS ; 
}
