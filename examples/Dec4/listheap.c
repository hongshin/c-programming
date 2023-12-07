#include <stdio.h>
#include <stdlib.h>

struct entry {
	int value ;

	struct entry * next ;
} ;

struct entry * addEntry (struct entry * listPtr)
{
	struct entry * lastEntry ;
	while (listPtr->next != NULL) {
		listPtr = listPtr->next ;
	}
	lastEntry = listPtr ;

	struct entry * newEntry = (struct entry *) malloc(sizeof(struct entry)) ;
	newEntry->next = NULL ;

	lastEntry->next = newEntry ;
	lastEntry = newEntry ;

	return lastEntry ;
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

	struct entry * listPtr = list.next ;
    while (listPtr != (struct entry *) NULL ) {
    	printf ("%i\n", listPtr->value);
    	listPtr = listPtr->next;
    }


	listPtr = list.next ;
    while (listPtr != (struct entry *) NULL ) {
		
		struct entry * nextPtr ;
		nextPtr = listPtr->next

		free(listPtr) ;
    	listPtr = nextPtr ; 
    }



     return EXIT_SUCCESS ; 
}
