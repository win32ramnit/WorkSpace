#include <stdio.h>
int main(void) {
	int *ptr, q;
	q = 50;
	/* address of q is assigned to ptr */
	ptr = &q;
	/* address of q is assigned to ptr */
	printf("%d", *ptr);
	return 0;
}