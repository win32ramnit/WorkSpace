#include <stdio.h>
int main(void) {
	enum MONTH { Jan = 0, Feb, Mar };
	enum MONTH month = Mar;
	if (month == 0)
		printf("Value is Jan");
	else if (month == 1)
		printf("Value is Feb");
	else if (month == 2)
		printf("Value is Mar");
}