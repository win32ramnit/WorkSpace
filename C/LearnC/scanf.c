#include <stdio.h>
int main(void) {
	char ch;
	char str[100];
	printf("Enter any character \n");
	scanf("%c", &ch);
	printf("Entered character is %c \n", ch);
	printf("Enter any string ( up to 100 character ) \n");
	scanf("%s", &str);
	printf("Entered string is %s \n", str);
	
	return 0;
}