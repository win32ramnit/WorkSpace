// Linearly search x in arr[]. if x is present its
// location, otherwise return -1
int search(int *arr, int n, int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (x == arr[i])
			return i;
	}
		return -1;
}