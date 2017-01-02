/* get money from ATM */
#include <stdio.h>
int t, n, k;
int i, flag = 0;
int main(void) {
    for (scanf("%d", &t); t > 0; t--) {
		flag = 0;
		scanf("%d%d", &n, &k);
		if ((n >= 3 && n <= 100) && (n % 3 == 0)) {
			if (k >= 1 && k <= n-1) {
				for (i = 1; i <= n; i += 3) {
					if(i == k || i + 1 == k) {
						printf("yes\n");
						flag = 1;
						break;
					}
				}    // end of inner for loop
				if (!flag)
				    printf("no\n");
			}
		}
	}    // end of outer for loop

return 0;
}
