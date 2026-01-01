//  Write a program to print the corresponding Celcius to Fahrenheit table

#include <stdio.h>

int main(){
	int lower, upper, step;
	int celc, fahr;

	lower = 0;
	upper = 300;
	step = 20;
	celc = lower;

	printf("Celcius\tFahrenheit\n");

	while(celc <= upper){
		fahr = celc * 9/5+32;
		printf("%7d\t%10d\n", celc, fahr);
		celc = celc + 20;
	}
}
