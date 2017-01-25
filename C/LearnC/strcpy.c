#include <stdio.h>
#include <string.h>

int main(void) {
	char source[] = " Manish";
	char target[] = " Vishwakarma";
	printf("\nSource string = %s", source);
	printf("\nTarget string = %s", target);
	
	strcpy(target, source);
	 
	printf("\nTarget string after strcat() = %s", target);
	
	return 0;
}