#include <stdio.h>
int sum();

int main() {
	int addition;
	addition = sum();
	printf("\nSum of two given values = %d", addition);
	
	return 0;
}

int sum() {
	int a = 50, b = 80, sum;
	sum = a + b;
	
	return sum;
}