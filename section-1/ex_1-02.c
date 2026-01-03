/* Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.
   There were listed \t for tab, \b for backspace, \" for the double quote, \\ for the backslash and etc. in the book. */


#include <stdio.h>

int main(){
	printf("\"Hello, \cworld\"\n");
}


/*	the error message when I tried to compile the program:

	ex_1-2.c: In function ‘main’:
	ex_1-2.c:7:38: warning: unknown escape sequence: ‘\c’
		7 |         printf("\"Hello, \cworld\"\n");
		|                                      ^
*/
