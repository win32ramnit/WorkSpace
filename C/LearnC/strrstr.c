#include <stdio.h>
#include <string.h>
int main(void) {
	char str[55] = "This is a test string for testing";
	char *p;
	p = strrstr(str, "test");
	if(p) {
		printf("string found\n");
		printf("Last occurrence of string \"test\" in \"%s\" is \"%s\"", str, p);
	} else {
		printf("string not found\n");
	}	
	return 0;
}