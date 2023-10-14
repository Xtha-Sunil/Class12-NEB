/*calculating weather number is odd or even without using modulas (%) operator*/

#include<stdio.h>

int oddEven(int number) {
    int temp = number;

    temp = temp /2 ;
    
    (temp * 2 == number) ? printf("%d is Even", number) : printf("%d is Odd", number);

}

int main () {

    int number,temp;
    printf("Enter the number: ");
    scanf("%d", &number);
    oddEven(number);
    return 0;
}