//  Write a program to print a histogram of the lengths of words in its input.
//  This version of program prints histogram with the bars horizontal

#include <stdio.h>

int main(){
	int c, lengths[10];	// this code can handle words that has up to 10 characters
	char i, curr = 0;
	
	for (i=0; i<10; i++) lengths[i] = 0;

	while((c = getchar()) != EOF){
		if (c == '\t' || c == '\n' || c == ' '){
			if (curr > 0 && curr <= 10 ) lengths[curr-1]++;
			curr = 0;
		}
		else curr++;
	}
	if (curr > 0 && curr <= 10) lengths[curr-1]++;
	printf("Histogram of the lengths of words\nLength:    \t");
	for (i=1; i<11; i++) printf("%4d\t", i);	// we assume that length[i] i won't supress 9999 
	printf("\nOccurances:\t");
	for (i=0; i<10; i++) printf("%4d\t", lengths[i]);
}
