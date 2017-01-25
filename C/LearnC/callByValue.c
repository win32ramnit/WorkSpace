/*@The values of variables "m" and "n" 
  are passed to the function "swap".
  @ These values are copies to formal parameters 
    "a" and "b" in swap function and used.  
*/

#include <stdio.h>
// function prototype, aslo called function declaration
void swap(int, int);

int main(void) {
	int m = 22, n = 33;
	// call swap function by value
	printf("Values before swap m = %d \nand n = %d", m, n);
	swap(m, n); // actual parameters
	return 0;
}
// formal parameters
void swap(int a, int b) { // function definition
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("\nValues after swap m = %d\nand n = %d", a, b);
	
}

