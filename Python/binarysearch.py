def BinarySearch(arr, ele, high, low):
    if low <= high:
        mid = (low + high)//2

        if arr[mid] == ele:
            return mid
        elif arr[mid]<ele:
            return BinarySearch(arr, ele, high, mid + 1)
        else:
            return BinarySearch(arr, ele, mid - 1, low)
    else:
        return -1

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
ele = 10
x = BinarySearch(arr, ele, len(arr)-1, 0)

if x != -1:
    print("Value found at", str(x))
else:
    print("not found")