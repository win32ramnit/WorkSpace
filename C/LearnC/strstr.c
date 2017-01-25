#include <stdio.h>
#include <string.h>
int main(void) {
	char str[55] = "This is a string for testing";
	char *p;
	p = strstr(str, "test");
	if(p) {
		printf("string found\n");
		printf("First occurrence of string \"test\" in \"%s\" is \"%s\"", str, p);
	} else {
		printf("string not found\n");
	}
	
	return 0;
}