# Returns index of x in arr if present, else -1

def BS(arr, l, r, x):
    # Check base case
    if l <= r:
        mid = int(l + (r - l)/2)
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
        # If element is greater than middle,
        # then it can only be present in right sunarray
        elif arr[mid] < x:
            return BS(arr, mid + 1, r, x)
        # Else it can only be present in left subarray	
        else:
            return BS(arr, l, mid - 1, x)
    # Element is not present in array	
    else:
        return -1
