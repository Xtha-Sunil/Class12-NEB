def bubble_sort(array):
    n=len(array)

    for i in range(n):
        for j in range(0,n-i-1):
            if array[j]>array[j+1]:
                temp=array[j]
                array[j]=array[j+1]
                array[j+1]=temp

def printArray(array):
    for i in range(len(array)):
        print (array[i],end=' ')
    print()

# Example usage:
array=[10,9,2,120,30,80,21,6,1]
print("Given array is",end="\n")
printArray(array)

# Sort array calling bulle_sort function
bubble_sort(array)
print("Sorted Array is")
printArray(array)