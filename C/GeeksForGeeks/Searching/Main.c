#include <stdio.h>

int binarySearch(int *arr, int, int, int);

int main(void) {
	int arr[10] = {3, 7, 9, 23, 26, 56, 94,  249, 519, 651};
	int x;
	int result;
	printf("\nEnter a number: ");
	scanf("%d", &x);
	result = binarySearch(arr, 0, 9, x);
	(result == -1) ? printf("Element is not present in array")
	               : printf("Element is present at index %d", result);
	return 0;
}
