//  Verify the expression getchar() != EOF is 0 or 1

#include <stdio.h>

int main(){
	int c;
	
	while(true){
		c = (getchar() != EOF);
		printf("%d", c);
	}
}

/*
 Explanation to output.
 If you send any other symbol rather than EOF, it returns 1 to c, which means getchar() didn't get EOF signal and the expression is true.
 But if you send EOF signal (on linux distributives, you can send EOF pressing Ctrl + D on empty line), program returns 0, because now getchar()!=EOF is not true.
*/
