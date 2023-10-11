#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0;
    cin >> num;
    originalNum = num;

    while (originalNum != 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}

/*
Input:
371

Output:
371 is an Armstrong number.
*/
