//  Write a function reverse(s) that reverses the character string s.
//  Use it to write a program that reverses its input line at a time.

#include <stdio.h>

#define MAX 1000
#define curr line[i]
#define EOL '\n'

void reverse(char line[]);
int mygetline(char line[]);

int mygetline(char line[]){
	int c, i = 0;

	while((c = getchar()) != EOF && c != EOL){
		if (i < MAX) curr = c;
		i++;
	}
	if (c == '\n' && i < MAX){
		curr = c;
		i++;
	}
	if (i < MAX) curr = '\0';
	return i;
}

void reverse(char line[]){
	int i = 0;

	while(curr != '\0' && i < MAX) i++;
	
	int length = i;
	char buffer[length];

	for (i = 0; i < length; i++) buffer[length - i - 1] = curr;	// reversing includes EOL also
	for (i = 0; i < length; i++) curr = buffer[i];
}

int main(){
	int length;
	char line[MAX];

	while((length = mygetline(line)) > 0){
		reverse(line);
		printf("%s", line);
	}
	return 0;
}
