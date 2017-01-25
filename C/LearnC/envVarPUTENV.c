#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//This function modifies the value 
	//for environment variable
    setenv("DIR", "/usr/bin/example/", 50);
	printf("Directory name before modifying =%s\n", getenv("DIR"));
	putenv("DIR=/usr/home");
	printf("Directory name after modifying =%s\n", getenv("DIR"));
	return 0;
}