#include <stdio.h>

// multiple geometry shapes parameter and area calculator

int main() {
	char s;
	float x, y, z;
	printf("which shape you want to use: Circle(1), Rectangle(2), Square(3): ");
	scanf("%f", &s);
	
	if (s = '1') {
		printf("enter radius: ");
		scanf("%f", &x);
		printf("parameter= %f\n", 2*3.14*x);
		printf("area= %f\n", 2*3.14*x*x);
	} else if (s = '2') {
		printf("enter lenght: ");
		scanf("%f", &x);
		printf("enter breadth: ");
		scanf("%f", &y);
		printf("parameter= %f\n", x+x+y+y);
		printf("area= %f\n", x*y);
	} else if (s = '3') {
		printf("enter lenght of side ");
		scanf("%f", &x);
		printf("parameter= %f\n", 4*x);
		printf("area= %f\n", x*x);
	} else {
		printf("please entre one of the above(1, 2, 3): ");
	}
}
