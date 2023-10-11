#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int sum = 0; // Initialize the sum

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            sum += arr[i]; // Add the even number to the sum
        }
    }

    cout << "The sum of even numbers in the array is: " << sum << std::endl;

    return 0;
}
