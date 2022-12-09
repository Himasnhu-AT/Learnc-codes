#include <stdio.h>

// program to add to numbers by taking input from user
int main() {
	float a, b, c;
	printf("enter first character: ");
	scanf("%f", &a);
	/* scanf takes input entered by user. 
	reason for using &a, is to define scanf function to find memory allocation of a*/
	printf("enter second character: ");
	scanf("%f", &b);
	c = a + b; //we alredy introduced c as float. so no need to mention again
	printf("Sum= %.1f", c);
}
