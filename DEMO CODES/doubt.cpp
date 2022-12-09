#include <stdio.h>
int main() {
	float BS,DA,HRA,GS;
	printf("enter the BS: ");
	scanf("%f", &BS);
	DA = 0.4*BS;
	HRA = 0.2*BS;
	GS = BS+DA+HRA;
	printf("grosssalary is %.1f", GS);
}
