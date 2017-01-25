#include <stdio.h>
int main(void) {
 register int i;
 int arr[5]; // declaring array
 arr[0] = 10; // Initializing array
 arr[1] = 20;
 arr[2] = 30;
 arr[3] = 40;
 arr[4] = 50;
 for(i = 0; i < 5; i++) {
	 //Accessing each variable
	 printf("value of arr[%d] is %d \n", i, arr[i]);
 }
 return 0;
}