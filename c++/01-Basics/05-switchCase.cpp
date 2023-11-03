#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cout << "4. Option 4" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Option 1." << endl;
            break;
        case 2:
            cout << "You selected Option 2." << endl;
            break;
        case 3:
            cout << "You selected Option 3." << endl;
            break;
        case 4:
            cout << "You selected Option 4." << endl;
            break;
        
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

// Output:
// Choose an option:
// 1. Option 1
// 2. Option 2
// 3. Option 3
// 4. Option 4
// Enter your choice: 3
// You selected Option 3.
