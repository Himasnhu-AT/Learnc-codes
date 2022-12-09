/* Write a program that inputs three different integers fom the keyboard, then prints the sum, the average, 
the product, the smallest and the largest of these numbers. Use only the single-selection form of the if 
statement you learned in this chapters. The screens dialogue should appear as follow

Enter sum of three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27 */

#include <stdio.h>

int main() {
	float a, b, c;
	printf("enter number 1: ");
	scanf("%f", &a);
	printf("enter number 2: ");
	scanf("%f", &b);
	printf("enter number 3: ");
	scanf("%f", &c);
	
	printf("\nThree digits entered are: %.1f, %.1f, %.1f\n", a, b, c);
	printf("sum: %.1f\n", a+b+c);
	printf("average: %.1f\n", (a+b+c)/3 );
	printf("Product: %.1f\n", a*b*c);
	
	if (a>b && a>c) {
		printf("%.1f is largest\n", a);
	} else {
		if (b>c) {
			printf("%.1f is largest\n", b);
		} else {
			printf("%.1f is largest\n", c);
		}
	}
	if (a<b && a<c) {
		printf("%.1f is smallest\n", a);
	} else {
		if (b<c) {
			printf("%.1f is smallest\n", b);
		} else {
			printf("%.1f is smallest\n", c);
		}
	}
}

