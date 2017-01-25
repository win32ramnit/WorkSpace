#include <stdio.h>
void test();
int m = 22, n = 44;
int a = 50, b = 80;

int main(void) {
	printf("All variables are accessed from main function");
	printf("\nvalues:m=%d:n=%d:a=%d:b=%d:", m,n,a,b);
	test();
	
	return 0;
}

void test() {
	printf("\nAll variables are accessed from test function");
	printf("\nvalues:m=%d:n=%d:a=%d:b=%d:", m,n,a,b);
}