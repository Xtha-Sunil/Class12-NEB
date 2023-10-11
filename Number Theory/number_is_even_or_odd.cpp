#include <iostream>
#include <vector>

int main() {
    // Initialize vector with strings "Even" and "Odd"
    std::vector<std::string> res;
    res.push_back("Even");
    res.push_back("Odd");

    // Read integer input from user
    int n;
    std::cin >> n;

    // Calculate index using modulo operator and print result
    std::cout << "Number is " << res[n % 2];

    return 0;
}

/*In this code, we initialize a vector `res` with two strings "Even" and "Odd". 
We then read an integer `n` from the user. The index of the result string is 
calculated using the modulo operator (`n % 2`), which gives 0 for even numbers 
and 1 for odd numbers. Finally, we print the result string using the calculated 
index.
*/