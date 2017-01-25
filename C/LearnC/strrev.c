#include <stdio.h>
#include <string.h>
int main(void) {
	char p[] = "Hello";
	
	printf("String before strrev() : %s\n", p);
	printf("String after strrev() : %s\n", strrev(p));
		
	return 0;
}