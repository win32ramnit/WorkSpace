#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//This function sets the value 
	//for environment variable.
    setenv("FILE", "/usr/bin/example.c", 50);
	printf("File = %s\n", getenv("FILE"));
	return 0;
}