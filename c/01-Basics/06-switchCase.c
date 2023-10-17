#include <stdio.h>

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Option 4\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break;
        case 2:
            printf("You selected Option 2.\n");
            break;
        case 3:
            printf("You selected Option 3.\n");
            break;
        case 4:
            printf("You selected Option 4.\n");
            break;
        
        // default signifies if no option are choosen or entered option is out of range
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


// Output:
// Choose an option:
// 1. Option 1
// 2. Option 2
// 3. Option 3
// 4. Option 4

// Enter your choice: 2
// You selected Option 2.