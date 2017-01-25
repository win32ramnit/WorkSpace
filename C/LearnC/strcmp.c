#include <stdio.h>
#include <string.h>
int main() {
	char str1[] = "Manish";
	char str2[] = "Vishwakarma";
	int i = strcmp(str1, "Manish");
	int j = strcmp(str1, str2);
	int k = strcmp(str1, "Ma");
	printf("\n%d %d %d", i, j, k);
	
	return 0;
}