#include <stdio.h>
#include <string.h>

int main(void) {
	// define tow identical arrays
	char str1[10] = "fresh";
	char str2[10];
	 // use any number in the place of 3rd parameter 
	if(memcpy(str2, str1, strlen(str1))) {
		printf("Elements in str1 are copied to str2.\n");
		printf("str1 = %s\nstr2 = %s \n", str1, str2);
	} else {
		printf("Error while coping str1 int str2.\n");
	}
	return 0;
}