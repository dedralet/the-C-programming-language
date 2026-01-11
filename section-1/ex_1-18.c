//  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines

#include <stdio.h>

#define MAX 1000
#define curr line[i]

int mygetline(char line[]);
int isNonBlank(char line[]);
void cutBlank(char line[]);

int mygetline(char line[]){
	int c, i = 0;
	while((c = getchar()) != EOF && c != '\n'){
		if (i < MAX) curr = c;
		i++;
	}
	if (c == '\n'){
		if (i < MAX) curr = c;
		i++;
	}
	if (i < MAX) curr = '\0';
	return i;
}

int isNonBlank(char line[]){
	int i;

	for (i = 0; i < MAX && curr != '\0'; i++) if (curr != '\t' && curr != ' ' && curr != '\n') return 1;	// terminates immediately after returning
	return 0;
}

void cutBlank(char line[]){
	int i, l = 0;
	for (i = 0; i< MAX && curr != '\0'; i++){
		if (curr != '\t' && curr != ' ' && curr != '\n') l = 0;
		else if (l == 0) l = i;
	}
	line[l] = '\0';
}

int main(){
	int length;
	char line[MAX];
	
	while((length = mygetline(line)) > 0){
		int i, l = 0, nonblank = 0;
		nonblank  = isNonBlank(line);	// checking if a line is blank

		if (nonblank == 1){
			cutBlank(line);
			printf("%s\n", line);
		}
	}
	return 0;
}
