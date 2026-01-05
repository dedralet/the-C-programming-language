//  Write a program to print all input lines that are longer than 80 characters

#include <stdio.h>

#define MAXCHAR 1000
#define MINCHAR 80
int my_getline(char line[]);

int my_getline(char line[]){
	int c, i = 0;

	while((c = getchar()) != EOF && c != '\n'){
		if (i < MAXCHAR - 1) line[i] = c;
		i++;
	}
	if (c == '\n'){
		if (i < MAXCHAR) line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

int main(){
	char line[MAXCHAR];
	int length;
	
	while((length = my_getline(line)) > 0) if (length > MINCHAR) printf("%s\n", line);
	return 0;
}
