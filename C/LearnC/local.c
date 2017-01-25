#include <stdio.h>
void test();

int main() {
	int m = 22, n = 44;
	// m, n are local variables of main function
	/* m and n variables are having scope within 
	this main function only. 
	These are not visible to test function. */
	/* If we try to access a and b in this function,
	we will get 'a' undeclared and 'b' undeclared error*/
	printf("\nvalues: m = %d and n = %d", m, n);
	test();
	
	return 0;
}

void test() {
	int a = 50, b = 80;
	// a, b are local variables of main function
	/* a and b variables are having scope within 
	this main function only. 
	These are not visible to test function. */
	/* If we try to access m and n in this function,
	we will get 'm' undeclared and 'n' undeclared error*/
	printf("\nvalues: a = %d and b = %d", a, b);
}