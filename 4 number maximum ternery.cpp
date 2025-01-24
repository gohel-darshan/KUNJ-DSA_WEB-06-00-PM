#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    // Input 4 numbers from the user
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;

    // Using nested ternary operator to find the maximum number
    int maxNum = (num1 >= num2 && num1 >= num3 && num1 >= num4) ? num1 :
                 ((num2 >= num1 && num2 >= num3 && num2 >= num4) ? num2 :
                 ((num3 >= num1 && num3 >= num2 && num3 >= num4) ? num3 : num4));

    // Output the maximum number
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
