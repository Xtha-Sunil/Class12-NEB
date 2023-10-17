#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // logical and (&&) operator to handle both condition
    if (num > 0 && num % 2 == 0) {
        printf("The number is positive and even.\n");
    } 

    else if (num > 0 && num % 2 != 0) {
        printf("The number is positive and odd.\n");
    } 

    else if (num < 0) {
        printf("The number is negative.\n");
    } 

    else if (num == 0) {
        printf("The number is zero.\n");
    } 

    // logical OR (||) operator to handle a different condition
    else if (num == 42 || num == 17) {
    printf("The number is either 42 or 17.\n");
    } 

    else {
        printf("Invalid input.\n");
    }

    return 0;
}
