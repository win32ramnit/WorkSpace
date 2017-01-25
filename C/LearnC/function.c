#include <stdio.h>
// function prototype. aslo called function declaration
float square (float x);
// main function, program starts from here

int main(void) {
    float m, n;
	printf("\nEnter some number for finding square \n");
	scanf("%f", &m);
	//function call
	n = square(m);  // m is actual parameter
	printf("\nSquare of the given number %f is %f", m, n);
    return 0;
}

float square (float x) {  // function definition
	float p;			// x is formal parameter
	p = x * x;
	
	return (p);
}