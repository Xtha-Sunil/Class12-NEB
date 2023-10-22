// 'cout' - print text or data to the console
// '<<' - insertion operator

// 'cin' - read input from user
// '>>' - extraction operator

#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;
    float x;

    // Input integer
    cout << "Enter integer number: ";
    cin >> num;

    // Input float
    cout << "Enter float number: ";
    cin >> x;

    // Input character
    cout << "Enter character: ";
    cin >> ch;

    cout << "\n";
    cout << "Entered integer number is: " << num << endl;
    cout << "Entered float number is: " << x << endl;
    cout << "Entered character is: " << ch << endl;

    return 0;
}

// Output:
// Enter integer number: 22
// Enter float number: 2.3
// Enter character: D

// Entered integer number is: 22
// Entered float number is: 2.3
// Entered character is: D