/* The scope of this extern variable is throughout the main program.
   It is equivalent to global variable. Definition for extern variable
   might be anywhere in the C program.*/
#include <stdio.h>
int x = 0;
int main(void) {
	extern int y;
	printf("The value of x is %d \n", x);
	printf("The value of y is %d \n", y);
	
	return 0;
}   
int y = 50;