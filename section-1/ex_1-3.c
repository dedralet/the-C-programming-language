//  Modify the temperature conversion program to print a heading above the table

#include <stdio.h>

int main(){
	int lower, upper, step;
	float fahr, celc;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	printf("Fahrenheit\tCelcius\n");

	while(fahr <= upper){
		celc = 5.0/9*(fahr - 32);
		printf("%10.0f\t%7.1f\n", fahr, celc);
		fahr = fahr + step;
	}
}
