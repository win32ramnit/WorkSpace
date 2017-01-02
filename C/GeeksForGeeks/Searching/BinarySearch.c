// A recursive binary search function. It returns location of 
// x in given array arr[l..r] is present, otherwise -1
 int binarySearch(int *arr, int beg, int end, int x) {
	 int mid;
	 if (beg <= end) {
		 mid = beg + (end - beg) / 2;
		 if (arr[mid] == x)
			 return mid;
		 else if (arr[mid] < x) {
			 return binarySearch(arr, mid + 1, end, x);
		 } else {
			 return binarySearch(arr, beg, mid - 1, x);
		 }
	 }
	 return -1;
 }