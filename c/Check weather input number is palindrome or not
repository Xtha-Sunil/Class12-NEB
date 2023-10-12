#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;      // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;           // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
