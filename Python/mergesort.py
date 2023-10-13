def merge(array):
    if len(array)>1:
        mid=len(array)//2   # Find mid length of array
        L=array[:mid]       # Find left half of array
        R=array[mid:]       # Find right half of array
        merge(L)            # Left Subarray for merge
        merge(R)            # Right Subarray for merge
        i=j=k=0

        while i<len(L) and j<len(R):
            if L[i]<=R[j]:          #Compare elements in left and right subarrays  
                array[k]=L[i]       #Placing smaller elements in main array first
                i+=1

            else:
                array[k]=R[j]
                j+=1
            k+=1

        # Copy any remaining elements from the left subarray
        while i<len(L): 
            array[k]=L[i]
            i+=1
            k+=1

        # Copy any remaining elements from the right subarray
        while j<len(R):
            array[k]=R[j]
            j+=1
            k+=1

def printArray(array):
    for i in range(len(array)):
        print (array[i],end=' ')
    print()

# User Input
array=[10,9,2,120,30,80,21,6,1]
print("Given array is",end="\n")
printArray(array)

# Sort array calling merge function
merge(array)
print("Sorted Array is")
printArray(array)
