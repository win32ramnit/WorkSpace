#include <stdio.h>
int main(void) {
    int a = 40, b = 30;
	int add, sub, mul, div, mod;
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	printf("Addition of a, b is : %d\n", add);
	printf("Suntraction of a, b is : %d\n", sub);
	printf("Multiplication of a, b is : %d\n", mul);
	printf("Division of a, b is : %d\n", div);
	printf("Modulus of a, b is : %d\n", mod);
return 0;
}