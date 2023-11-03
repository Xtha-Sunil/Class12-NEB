#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    // logical and (&&) operator to handle both condition
    if (num > 0 && num % 2 == 0) {
        cout << "The number is positive and even.\n";
            // logical OR (||) operator to handle a different condition
        if (num == 42 || num == 18) {
        cout << "The number is either 42 or 18.\n";
        } 
    } 

    else if (num > 0 && num % 2 != 0) {
        cout << "The number is positive and odd.\n";
    } 

    else if (num < 0) {
        cout << "The number is negative.\n";
    } 

    else if (num == 0) {
        cout << "The number is zero.\n";
    } 


    else {
        cout << "Invalid input.\n";
    }

    return 0;
}

// Output:
// Enter a number: 192
// The number is positive and even.

// Enter a number: 42
// The number is positive and even.
// The number is either 42 or 18.