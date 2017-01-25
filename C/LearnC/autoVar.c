#include <stdio.h>
/* The scope of this auto variable is within the function only.
 It is equivalent to local variable. All local variables are auto variables by default*/
void increment(void);
int main(void) {
	increment();
	increment();
	increment();
	increment();
	return 0;
}

void increment(void) {
	auto int i = 0;
	printf("%d ", i);
	i++;
	//printf("%d ", i);
}