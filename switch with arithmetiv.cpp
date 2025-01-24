#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Displaying options for the user
    cout << "Select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Switch case to perform the selected arithmetic operation
    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Result: " << num1 / num2 << endl;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
            break;
    }
}
