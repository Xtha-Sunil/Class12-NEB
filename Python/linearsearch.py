def LinearSearch(Array, SearchItem):
    for i in range(len(Array)):
        if Array[i] == SearchItem:
            return i

    return -1


Array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
SearchItem = 3
x = LinearSearch(Array, SearchItem)
if x == -1:
    print("Value not found")
else:
    print("Value found at: ", str(x))