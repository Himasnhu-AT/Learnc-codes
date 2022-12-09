#include <stdio.h>

/* multiply, divide, add, subtract two numbers
	by taking input from user.*/

int main() {
	float x, y, a, s, m, d;
	printf("enter number1= ");
	scanf("%f", &x);
	printf("enter number2= ");
	scanf("%f", &y);
	
	// add
	a = x + y;
	printf("sum= %.1f\n", a);
	
	// subtract
	s = x - y;
	printf("difference= %.1f\n", s);
	
	// multiply
	m = x * y;
	printf("multiply= %.1f\n", m);
	
	// divide
	d = x/y;
	printf("divide= %.1f\n", d);
}
