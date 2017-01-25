/* Static variables retain the value of the variable
   between different function calls.*/
#include <stdio.h>
void increment(void);
int main(void) {
	increment();
	increment();
	increment();
	increment();
	return 0;
}

void increment(void) {
	static int i = 0;
	printf("%d ", i);
	i++;
	//printf("%d ", i);
}