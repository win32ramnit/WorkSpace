#include <stdio.h>
#include <string.h>
int main(void) {
	char *p1 = "Manish";
	char *p2;
	p2 = strdup(p1);
	
	printf("Duplicated string : %s", p2);
		
	return 0;
}