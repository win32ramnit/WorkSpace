#include <stdio.h>
#include <string.h>
int main(void) {
	char p[20] = "Hello World";
	
	printf("Original string is : %s", p);
	printf("\nTest string after strset() : %s", strset(p,'#'));
		
	return 0;
}