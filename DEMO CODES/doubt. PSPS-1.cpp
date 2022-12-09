/* write a program which inputs a 5 digit number,and give sum of all the digit.
FOR EXAMPLE,
	input = 32100
	Output = 6 */
	
#include <stdio.h>

int main() {
	char a,b,c,d,e;
	printf("Enter a five digit \'integer' number: ");
	scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);
	int sum = (a+b)+(c+d)+(e);
	printf("%d", sum);
} 		
