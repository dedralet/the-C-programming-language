//  Rewrite the temperature conversion program of Section 1.2 to use a function for conversion

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float conversion(int);

float conversion(int fahr){
	float celc  = 5.0/9*(fahr - 32);
	return celc;
}

int main(){
	int fahr;

	fahr = LOWER;

	printf("Fahrenheit\tCelcius\n");

	while(fahr <= UPPER){
		printf("%10d\t%7.1f\n", fahr, conversion(fahr));
		fahr = fahr + STEP;
	}
	return 0;
}
