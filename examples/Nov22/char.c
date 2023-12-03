#include <stdio.h>
#include <stdlib.h>

int main ()
{
     char c = 'Q' ;
     char * char_pointer = &c ;

     printf("%c %c\n", c, *char_pointer) ;

     c = '/' ;
     printf("%c %c\n", c, *char_pointer) ;

     *char_pointer = '(' ;
     printf("%c %c\n", c, *char_pointer) ;

     return EXIT_SUCCESS ;
}
