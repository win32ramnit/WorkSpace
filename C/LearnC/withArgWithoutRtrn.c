#include <stdio.h>
//function prototype, aslo called function declaration
void function(int, int[], char[]);

int main(void) {
	int a = 20;
	int arr[5] = {10, 20, 30, 40, 50};
	char str[30] = "\"Manish Vishwakarma\"";
	function(a, &arr[0], &str[0]);
	
	return 0;
}
//Function definition with arguments & without return value
void function(int a, int *arr, char *str) {
	int  i;
	printf("value of a is %d\n\n", a);
	for(i = 0; i < 5; i++) {
		//accessing aech variable
		printf("value of arr[%d] is %d\n", i, arr[i]);
	}
	printf("\nvalue of str is %s\n", str);
	
}