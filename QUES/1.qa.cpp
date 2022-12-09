/* Write a program that asks the user to enter two integes, obtain the numbers fom the users,
then prints the larger number followed by the words "is larger." If the numbers are equal, print the 
message "these numbers are equal." Use only the single-selection form of the if statement */

#include <stdio.h>

int main() {
	float a,b;
	printf("enter number 1: ");
	scanf("%f", &a);
	printf("enter number 2: ");
	scanf("%f", &b);
	
	if (a>b) {
		printf("%.1f is larger\n", a);
	} else if (b>a) {
		printf("%.1f is larger\n", b);
	} else (a=b); {
		printf("these numbers are equal\n");
	}
}
