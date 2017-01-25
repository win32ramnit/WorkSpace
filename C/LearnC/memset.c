#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int i;
	/* Allocate memory for array of 5 elements */
	char *a = (char*) malloc(5*sizeof(char));
	if(!a) {
		printf("Memory Error!!\n");
		exit(1);
	}
	printf("Values before memset\n");
	for(i = 0; i < 5; i++) {
		printf(" a[%d] = %d ,", i, a[i]);
	}
	/* All elements are set to 3. It can be set to any value */
	memset(a, 3, 5*sizeof(char));
	printf("\nValues after memset\n");
	for(i = 0; i < 5; i++) {
		printf(" a[%d] = %d ,", i, a[i]);
	}
	// remove x from memory
	free(a);
	
    return 0;
}