# Search an element from give array
#import LinearSearch
import BinarySearch
arr = [2, 4, 10, 78, 92]
x = int(input("Enter a number: "))
n = len(arr) - 1
result = BinarySearch.BS(arr, 0, n, x)
#print(result)
if result != -1:
    print("Element is present at index %d" % result)
else:
    print("Element is not present in array")
