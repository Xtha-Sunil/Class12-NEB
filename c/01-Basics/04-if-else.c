#include <stdio.h> 
  
int main() 
{ 
    int a; 
    printf("Enter a whole number: ");
    scanf("%d", &a);;

    if (a > 0) { 
        if (a < 10) 
            printf("Entered number has 1 digit\n"); 
        if (a<100) 
            printf("Entered number has 2 digits\n"); 
        else
            printf("Entered number has more than 2 digits"); 
    } 
  
    return 0; 
}