//  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

#include <stdio.h>

int main(){
	int c, prev;
	c = getchar();
	putchar(c);
	prev = c;

	for(; c!=EOF; c = getchar()){
		if (c == ' '){
			if (prev != c) putchar(c);
			if (prev == c) ;         ;	// if previous character is also blank, we skip current character 
		}
		if (c != ' ') putchar(c);
		prev = c;                               // now loop is going to go through next iteration, so we can give value of c to prev as a previous value
	}
}
