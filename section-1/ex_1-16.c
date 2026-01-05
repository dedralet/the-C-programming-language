//  Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text

#include <stdio.h>

#define MAXCHAR 1000

int my_getline(char line[]);	// stdio.h includes getline(), so I can't use getline as a name for my custom function
void copy(char line[], char maxline[]);

int my_getline(char line[]){
	int c, i = 0;

	while((c = getchar()) != EOF && c != '\n'){
		if (i < MAXCHAR - 1) line[i] = c;
		i++;
	}
	if (c == '\n'){
		if (i < MAXCHAR) line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char line[], char maxline[]){
	int i;

	for (i=0; line[i] != '\0'; i++) maxline[i] = line[i];
}

int main(){
	char line[MAXCHAR], maxline[MAXCHAR];
	int length, maxlength = 0;
	
	while((length = my_getline(line)) > 0){
		if (length > maxlength){
			maxlength = length;
			copy(line, maxline);
		}
	}
	if (maxlength > 0) printf("%d\n%s\n", maxlength, maxline);
	return 0;
}
