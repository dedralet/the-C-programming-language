/* Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation.
 * Harder if you compute them:determine the ranges of the various floating-point types.
 */

#include <stdio.h>
#include <limits.h>

int main(){
	printf("Determining the ranges using library\n");

    	printf("signed char minimum    = %d\n", CHAR_MIN);	// %d instead of %c - to see it's value
    	printf("signed char maximum    = %d\n", CHAR_MAX);
    	printf("unsigned char maximum  = %u\n", UCHAR_MAX);	// unsigned minimum is always 0
								
    	printf("signed short minimum   = %hd\n", SHRT_MIN);
    	printf("signed short maximum   = %hd\n", SHRT_MAX);
    	printf("unsigned short maximum = %hu\n", USHRT_MAX);

     	printf("signed int minimum     = %d\n", INT_MIN);
    	printf("signed int maximum     = %d\n", INT_MAX);
    	printf("unsigned int maximum   = %u\n", UINT_MAX);

    	printf("signed long minimum    = %ld\n", LONG_MIN);
    	printf("signed long maximum    = %ld\n", LONG_MAX);
    	printf("unsigned long maximum  = %lu\n", ULONG_MAX);	// it's LLONG, ULLONG for long long type

    	printf("\nDetermining the ranges by direct computing\n");

    	char c = 1;
	unsigned char uc = 0 - 1;
    	while(c*2 > c) c = c*2;
    	printf("signed char minimum    = %d\n", c);
	c--;
    	printf("signed char maximum    = %d\n", c);
    	printf("unsigned char maximum  = %u\n", uc);

	// the rest also goes like that

	return 0;
}
