#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The array must have at least two elements to find the second largest.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargest = arr[0];
    int secondLargest = arr[1];

    if (secondLargest > firstLargest) {
        // Swap the values to ensure firstLargest is greater than or equal to secondLargest
        int temp = firstLargest;
        firstLargest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest number in the array is: %d\n", secondLargest);

    return 0;
}
