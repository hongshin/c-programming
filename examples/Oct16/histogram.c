#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomize (int a[], int length)
{
	int i ;
	for (i = 0 ; i < length ; i++) {
		int r = rand() % 1000 ;
		a[i] = r ;
	}
}

int main ()
{
	int a[100] ;
	int i, j ;

	srand(time(NULL)) ;

	randomize(a, 100) ;

	int range[10][2] = {
		{0, 100}, {101, 200}, {201, 300}, 
		{301, 400}, {401, 500}, {501, 600}, 
		{601, 700}, {701, 800}, {801, 900}, 
		{901, 999}
	} ;

	for (i = 0 ; i < 10 ; i++) {
		int count = 0 ;
		for (j = 0 ; j < 100 ; j++) {
			if (range[i][0] <= a[j] && a[j] <= range[i][1]) {
				count = count + 1 ;
			}
		}
		printf("[%d, %d]: %d\n", range[i][0], range[i][1], count) ;

	}

	return EXIT_SUCCESS ;
}
