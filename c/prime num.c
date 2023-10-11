#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a specified range
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    // Define the range
    int start = 1;
    int end = 100;

    // Print prime numbers in the specified range
    printf("Prime numbers between %d and %d are:\n", start, end);
    printPrimesInRange(start, end);

    return 0;
}
