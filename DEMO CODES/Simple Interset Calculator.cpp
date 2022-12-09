#include <stdio.h>

// calcute Simple interest

int main() {
	float p, r, t, SI;
	printf("Entre principle amount: ");
	scanf("%f", &p);
	printf("Entre rate of interest: ");
	scanf("%f", &r);
	printf("Entre time: ");
	scanf("%f", &t);
	
	SI = (p*r*t)/100;
	printf("Your interest= %.1f", SI);
}
