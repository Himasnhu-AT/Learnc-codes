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
	
	if (a>b>c) {
		printf("%.1f is largest", a);
		printf("%.1f is smallest", c);
	} else if (c>a>b) {
		printf("%.1f is largest", c);
		printf("%.1f is smallest", b);
	} else if (b>c>a) {
		printf("%.1f is largest", b);
		printf("%.1f is smallest", a);
	} else if (c>a>b) {
		printf("%.1f is largest", a);
		printf("%.1f is smallest", c);
	} else if (b>c>a) {
		printf("%.1f is largest", b);
		printf("%.1f is smallest", a);
	}
}
