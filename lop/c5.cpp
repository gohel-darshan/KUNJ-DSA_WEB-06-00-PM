#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1; // To handle large numbers
    // Input from the user
    cout << "Enter a positive integer: ";
    cin >> number;
    // Calculate factorial and print intermediate results
    for (int i = number; i > 0; i--) {
        factorial *= i;
        cout << factorial << " ";
    }
    cout << endl;
    return 0;
}
