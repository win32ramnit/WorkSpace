#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[] = "This is a string for testing";
	char *p;
	p = strrchr (str1, 'i');
	
	printf("Character i is found at position %d\n", p-str1+1);
	printf("First occurrence of character \"i\" in \"%s\" is \"%s\"", str1, p);
	
	return 0;
}