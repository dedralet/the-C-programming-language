#include <stdio.h>

int main(){
	char c, prev = '\n', quoteType;
	short isInside = 0, printable = 1, consecutiveSlashes = 0;
	while((c = getchar()) != EOF){
		if (c==prev && c=='\\' && isInside){
			consecutiveSlashes++;
			putchar(c);
		}
		else consecutiveSlashes = 0;

		if (c == '\n'){
			isInside = 0;
			prev = c;
			putchar(c);
		}
		else if (c=='\'' || c=='\"'){
			if (!isInside){
				isInside = 1;
				quoteType = c;
			}
			else if (c == quoteType) isInside = 0;
			putchar(c);
			prev = c;
		}

	}
	return 0;
}
