//  Write a program that prints its input one word per line

#include <stdio.h>

#define IN  1
#define OUT 0

int main(){
	int c;
	char state = OUT;

	while((c = getchar()) != EOF){
		if (c == '\t' || c == ' ' || c == '\n'){
			if (state == IN) putchar('\n');
			state = OUT;
		}
		else{
			state = IN;
			putchar(c);
		}
	}
}
