// scanf() is used for input and printf() for output

#include <stdio.h>

int main (){
    int num;
    char ch;
    float x;

    // Input integer
    printf("Enter integer number: ");
    scanf("%d",&num);

    // Input float 
    printf("Enter float number: ");
    scanf("%f",&x);

    // Clear the input buffer
    while (getchar() != '\n');  // Clears the input buffer

    // Input character
    printf("Enter character: ");
    scanf("%c",&ch);


    printf("\n");
    printf("Entered integer number is: %d \n",num);
    printf("Entered float number is: %f \n",x);
    printf("Entered character is: %c \n",ch);

    return 0;
}