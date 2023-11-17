#include <stdio.h>
#include <stdlib.h>

int convertedNumber[64] ;
long int numberToConvert ;
int base ;
int digit = 0 ;

void convertNumber ()
{
	do {
		convertedNumber[digit] = numberToConvert % base ;
		++digit ;
		numberToConvert /= base ;
	}
	while ( numberToConvert != 0 ) ;
}

void  displayConvertedNumber (void)
{
	const char  baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' } ;

	for (--digit;  digit >= 0; --digit ) {
		int nextDigit = convertedNumber[digit] ;
		printf ("%c", baseDigits[nextDigit]) ;
	}
	printf ("\n");
}

int main (void)
{
	scanf ("%li", &numberToConvert);
	scanf ("%i", &base);

	if  ( base < 2  ||  base > 16 ) {
		printf ("Bad base - must be between 2 and 16\n");
		base = 10 ;
		return EXIT_FAILURE ;
	}

	convertNumber ();
	displayConvertedNumber ();

	return EXIT_SUCCESS ;
}
