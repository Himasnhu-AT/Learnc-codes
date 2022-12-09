#include <stdio.h>

/* store values in different data-types and print them 
	int:- integer. stores numeric values only. uses %d 
	float:- float. stores decimal as well as numeric values. uses %f (%.1f is used to represent 1 decimal value)
	char:- character. stores a single character(alphobet, number, underscore)*/

int main() {
	
	int a;
	float b, c;
	char d;
	
	a = 5;
	b = 5.6;
	c = 5.0;
	d = 'D';
	printf("Value stored in a variable of int data type: %d\n", a);
	printf("Value stored in b variable of float data type: %.1f\n", b);
	printf("Value stored in c variable of float data type: %.1f\n", c);
	printf("Value stored in d variable of char data type: %c\n", d);
}
