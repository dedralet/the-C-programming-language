/* Write a program to "fold" long input lines into two or more short lines after the last non-blank character occurs before the n-th column of input.
 * Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. 
 */
#include <stdio.h>

#define N 100

int main(){
	int column = 0;
	short isCompleted = 0;
	char punctuationalMarks[9] = {' ', '\t', ',', ';', ':', '.', '?', '!', '\n'};
	char c, letter100, letter99 = '\n';
	while((c = getchar()) != EOF){
		if (c == '\n'){
			putchar(c);
			column = 1;
			letter100 = c;
		}
		else if (!column){
			column+=2;
			putchar(c);
		}
		else if (column == 1){
			for (int i=0; i<9; i++){
				if (letter100 == punctuationalMarks[i]){
					isCompleted = 1;
				}
			}

			if (!isCompleted){
				for (int i=0; i<9; i++){
					if (letter99 == punctuationalMarks[i]){
						isCompleted = 1;
						break;
					}
				}
				if (!isCompleted) putchar('-');
				putchar('\n');
				putchar(letter100);
			}
			else{
				putchar(letter100);
				putchar('\n');
			}
			putchar(c);
			column++;
		}
		else if (column == N-1){
			letter99 = c;
			putchar(c);
			column++;
		}
		else if (column != N){
			column++;
			putchar(c);
		}
		else if (column == N){
			letter100 = c;
			column = 1;
		}
	}
	return 0;
}
