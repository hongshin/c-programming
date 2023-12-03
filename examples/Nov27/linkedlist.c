#include <stdio.h>
#include <stdlib.h>

struct entry {
	int value ;
	struct entry * next ;
} ;



int main ()
{
     struct entry n1, n2, n3, n4 ;

     struct entry * listPtr = &n1 ;

     n1.value = 100;
     n1.next  = &n4;

     n2.value = 200;
     n2.next  = &n3;

     n3.value = 300;
     n3.next  = &n2 ;    // Mark list end with null pointer

	 n4.value = 400 ;
	 n4.next = &n2 ;

     while ( listPtr != NULL ) {
          printf ("%i\n", listPtr->value);
          listPtr = listPtr->next;
     }

     return 0;
}
