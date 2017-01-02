#include <stdio.h>
int main(void) {
    const int height = 100;   /* int constant */
	const float pi = 3.14;   /* Real constant */
	const char letter = 'A'; /* Char constant */
	const char letter_sequence[10] = "ABC"; /* string constant */
	const char backslash_char = '\?'; /* special character constant */
	printf("value of height : %d \n", height);
	printf("value of PI : %f \n", pi);
	printf("value of letter : %c \n", letter);
	printf("value of letter_sequence : %s \n", letter_sequence);
	printf("value of backslash_char : %c \n", backslash_char);
  return 0;
}