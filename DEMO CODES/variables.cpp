#include <stdio.h>

/* Defining variables (variable should follow these conditions:-)
	size: 1 to 31
	combination of alphabet, digit, and underscore
	first character must be underscore/alphabet
	must no match keyword. for example: printf */
int main() {
	int abc, a, _2, a1, _12a;
	abc = 1;
	a = 2;
	_2 = 3;
	a1 = 4;
	_12a = 5;
	printf("%d %d %d %d %d", abc, a, _2, a1, _12a);
}
