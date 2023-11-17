#include <stdio.h>
#include <stdlib.h>

void func ()
{
    int localVar = 1;
    static int staticVar = 1;

    printf("local = %i, static = %i\n", localVar, staticVar);

    ++localVar;
    ++staticVar;
}


int main ()
{
	for (int i = 0;  i < 5;  ++i ) {
		func() ;
	}

	return EXIT_SUCCESS ;
}
