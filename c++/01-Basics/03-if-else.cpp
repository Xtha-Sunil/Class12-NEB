#include <iostream>
using namespace std; 

int main() {
    int a;

    cout << "Enter a whole number: ";
    cin >> a;

    if (a > 0) {
        if (a < 10) {
            cout << "Entered number has 1 digit\n";
        }
        if (a < 100) {
            cout << "Entered number has 2 digits\n";
        } else {
            cout << "Entered number has more than 2 digits";
        }
    }

    return 0;
}

// Output:
// Enter a whole number: 111
// Entered number has more than 2 digits

// Enter a whole number: 12
// Entered number has 2 digits
