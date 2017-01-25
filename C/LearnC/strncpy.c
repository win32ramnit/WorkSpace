#include <stdio.h>
#include <string.h>

int main(void) {
	char source[] = "Manish";
	char target[20] = "";
	printf("\nSource string = %s", source);
	printf("\nTarget string = %s", target);
	
	strncpy(target, source, 3);
	 
	printf("\nTarget string after strncpy() = %s", target);
	
	return 0;
}