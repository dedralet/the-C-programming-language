//  Write a program to print the value of EOF

#include <stdio.h>

int main(){
	int c;

	c = getchar();
	while(c != EOF) c = getchar();
	printf("%d\n", c);
}

//  After while() terminates, which means c equals to EOF, we can print value of c.
//  In my case, EOF is equal to -1.
