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

    // Initialize maxNum with num1
    int maxNum = num1;

    // Use nested if-else conditions to find the maximum number
    if (num2 > maxNum) {
        if (num2 > num3) {
            if (num2 > num4) {
                maxNum = num2;
            } else {
                maxNum = num4;
            }
        } else {
            if (num3 > num4) {
                maxNum = num3;
            } else {
                maxNum = num4;
            }
        }
    } else {
        if (num1 > num3) {
            if (num1 > num4) {
                maxNum = num1;
            } else {
                maxNum = num4;
            }
        } else {
            if (num3 > num4) {
                maxNum = num3;
            } else {
                maxNum = num4;
            }
        }
    }

    // Output the maximum number
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
