#include <stdio.h>

int main() {
    int n;  // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size 'n'

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;  // Initialize the sum to 0

    // Iterate through the array and add even numbers to 'sum'
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  //Checks if the number is even or not
            sum += arr[i];
        }
    }

    printf("Sum of even numbers in the array: %d\n", sum);

    return 0;
}
