#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    // Input four numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;

    // Variable to store the minimum number
    int minNum;

    // Using switch and nested if-else to find the minimum number
    switch (1) { // We use a dummy value to enter the switch block
        case 1:
            // Compare num1, num2, num3, and num4 to find the minimum
            if (num1 < num2) {
                // If num1 is less than num2, compare num1 with num3 and num4
                if (num1 < num3) {
                    if (num1 < num4) {
                        minNum = num1;  // num1 is the smallest
                    } else {
                        minNum = num4;  // num4 is the smallest
                    }
                } else {
                    // If num1 is not smaller than num3, compare num3 with num4
                    if (num3 < num4) {
                        minNum = num3;  // num3 is the smallest
                    } else {
                        minNum = num4;  // num4 is the smallest
                    }
                }
            } else {
                // If num1 is not the smallest, compare num2 with num3 and num4
                if (num2 < num3) {
                    if (num2 < num4) {
                        minNum = num2;  // num2 is the smallest
                    } else {
                        minNum = num4;  // num4 is the smallest
                    }
                } else {
                    // If num2 is not smaller than num3, compare num3 with num4
                    if (num3 < num4) {
                        minNum = num3;  // num3 is the smallest
                    } else {
                        minNum = num4;  // num4 is the smallest
                    }
                }
            }
            break;
    }

    // Output the minimum number
    cout << "The minimum number is: " << minNum << endl;

    return 0;
}
