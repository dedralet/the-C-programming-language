//  Write a program to print a histogram of frequencies of different characters in its input

#include <stdio.h>

int main(){
	int c, i, tab = 0, newline = 0, space = 0;
	int upper[26], lower[26], digit[10];	// we count only english letters, digits and '\t', ' ' and '\n'
	
	for (i = 0; i < 26; i++){
		lower[i] = 0;
		upper[i] = 0;
	}
	for (i = 0; i < 10; i++) digit[i] = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n') newline++;
		else if (c == '\t') tab++;
		else if (c == ' ') space++;
		else if (c >= 'a' && c <= 'z') lower[c-'a']++;
		else if (c >= 'A' && c <= 'Z') upper[c-'A']++;
		else if (c >= '0' && c <= '9') digit[c-'0']++;
	}
	printf("Histogram of frequencies of differet characters\nCharacters\tFrequencies\n");
	for (i = 0; i < 26; i++) printf("Letter %c: \t%11d\n", 'a' + i, lower[i]);
	for (i = 0; i < 26; i++) printf("Letter %c: \t%11d\n", 'A' + i, upper[i]);
	for (i = 0; i < 10; i++) printf("Digit  %d: \t%11d\n", i, digit[i]);
	printf("Tabs:     \t%11d\nSpaces:   \t%11d\nNewlines: \t%11d\n", tab, space, newline);
}
