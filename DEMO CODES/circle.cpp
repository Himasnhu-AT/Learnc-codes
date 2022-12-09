#include <stdio.h>

// calculate area and permimeter of circle

int main() {
	float r, a;
	printf("enter radius of circle= ");
	scanf("%f", &r);
	
	// calculate parameter without defining a variable
	printf("parameter= %.1f\n", 2*3.14*r);
	
	// calculate a
	a = 2* 3.14* r* r;
	printf("area= %.1f", a);
}
