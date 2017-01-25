#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//getenv() function gets the current
	//value of the environment variable
	printf("Directory = %s\n", getenv("DIR"));
	printf("PATH = %s\n", getenv("PATH"));
	printf("Directory = %s\n", getenv("HOME"));
	
	return 0;
}