#include<stdio.h>
int main(){
    int a=1,b=3.333;         // format specifier for integer is %d 
    float x=2, y=4.444;      // format specifier for floating point is %f
    char ch='A';            // format specifier for character is %c
    
    printf("Entered integer number is: %d and %d \n",a,b);
    printf("Entered float number is: %f and %f\n",x,y);
    printf("Entered character is: %c \n",ch);

    return 0;
}

// Output:
// Entered integer number is: 1 and 3
// Entered float number is: 2.000000 and 4.444000
// Entered character is: A