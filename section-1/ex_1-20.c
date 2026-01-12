//  Write a program DETAB that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
//  Assume a fixed set of tab stops, say every N columns.
//  Should N be variable or a symbolic parameter?

#include <stdio.h>

#define N 4	// It won't take a memory

int main(){
	int c, column = 0;
	while((c = getchar()) != EOF){
		if (c == '\n'){
			column = 0;
			putchar(c);
		}
		else if (c != '\t'){
			putchar(c);
			column++;
		}
		else{
			for (int i = 0; i < N - column % N; i++) putchar(' ');
			column = 0;
		}
	}
	return 0;
}
