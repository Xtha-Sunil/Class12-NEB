def InsertionSort(MyArray):
    for i in range(len(MyArray)):
        for j in range(i):
            if MyArray[i] < MyArray[j]:
                temp = MyArray[i]
                MyArray[i] = MyArray[j]
                MyArray[j] = temp
    return MyArray


MyArray = [12, 4, 3, 5, 6, 21, 12, 27]
x = InsertionSort(MyArray)
print("Sorted list: ")
print(x)
