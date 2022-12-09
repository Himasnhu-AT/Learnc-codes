#include <stdio.h>

// simple calculator using if...else... 

int main() {
	char o;
	float x, y;
	printf("Which action do you want to perform: multiple(m), divide(d), add(a), subtract(s)= ");
	scanf("%c", &o);
	
	if (o = 'm') {
		printf("enter value1: ");
		scanf("%f", &x);
		printf("entre value2: ");
		scanf("%f", &y);
		
		printf("answer = %.1f", x*y);
	} else if (o = 's') {
		printf("enter value1: ");
		scanf("%f", &x);
		printf("entre value2: ");
		scanf("%f", &y);
		
		printf("answer = %.1f", x-y);
	} else if (o = 'a') {
		printf("enter value1: ");
		scanf("%f", &x);
		printf("entre value2: ");
		scanf("%f", &y);
		
		printf("answer = %.1f", x+y);
	} else if (o = 'd') {
		printf("enter value1: ");
		scanf("%f", &x);
		printf("entre value2: ");
		scanf("%f", &y);
		
		printf("answer = %.1f", x/y);
	} else {
		printf("please entre valid input(s, m, a, d).");
	}
}
