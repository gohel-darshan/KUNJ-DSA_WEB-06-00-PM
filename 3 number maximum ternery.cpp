#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input 3 numbers from the user
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    // Using nested ternary operator to find the maximum number
    int maxNum = (num1 >= num2 && num1 >= num3) ? num1 :
                 ((num2 >= num1 && num2 >= num3) ? num2 : num3);

    // Output the maximum number
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
