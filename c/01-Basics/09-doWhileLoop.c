#include <stdio.h>

int main() {
    // Initialize the loop counter
    int i = 1; 

    do {
        printf("%d ", i);
        i++;    // Increment the loop counter
    } while (i <= 10);

    printf("\n");

    return 0;
}

// Output:
// 1 2 3 4 5 6 7 8 9 10 