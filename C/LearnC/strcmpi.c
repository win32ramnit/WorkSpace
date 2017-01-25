#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[] = "manish";
	char str2[] = "vishwakarma";
	int i, j, k;
	i = strcmpi(str1, "MANISH");
	j = strcmpi(str1, str2);
	k = strcmpi(str1, "man");
	printf("\n%d %d %d", i, j, k);
	
	return 0;
}