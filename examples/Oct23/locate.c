#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int locate (char s[], int c)
{
	int i ;
	i = 0 ;
	while (s[i] != '\0') {
		if (s[i] == c) {
			return i ;
		}
		i++ ;
	}
	return -1 ;
}

int precede (char s1[], char s2[])
{
	int i ;
	i = 0 ;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] < s2[i]) {
			return 1 ;
		}
		else if (s2[i] < s1[i]) {
			return 0 ;
		}
		i++ ;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return 0 ;

	if (s1[i] == '\0')
		return 1 ;

	return 0 ;
}


int str_cmp (char s1[], char s2[])
// return 0 if s1 == s2
// return -1 if s1 < s2
// return 1 if s1 > s2
{
	int i ;
	i = 0 ;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] < s2[i]) {
			return -1 ;
		}
		else if (s2[i] < s1[i]) {
			return 1 ;
		}
		i++ ;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return 0 ;

	if (s1[i] == '\0' && s2[i] != '\0')
		return -1 ;

	return 1 ;
}




int is_equiv (char s1[], char s2[]) 
{
	int i ;

	i = 0 ; 
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] != s2[i]) {
			return 0 ;
		}

		i++ ;
	}
	if (s1[i] == '\0' && s2[i] == '\0') {
		return 1 ;
	}
	return 0 ;
}

int main ()
{
	char s1[20] = "Hello" ;
	char s2[20] = "Hello" ;
	char s3[20] = "Hella" ;

	printf("%d\n", (int) strlen(s)) ;

	printf("%d\n", is_equiv(s1, s2)) ;
	printf("%d\n", is_equiv(s1, s3)) ;

}
