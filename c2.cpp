#include <iostream>
#include <climits> // For INT_MIN

using namespace std;

int main() {
    int numbers[50]; // Array to store 50 numbers
    int maxNumber = INT_MIN; // Initialize maxNumber to the smallest possible integer

    cout << "Enter 50 numbers: \n";

    // Loop to input 50 numbers
    for (int i = 0; i < 50; i++) {
        cin >> numbers[i]; // Take input for each number

        // Check if the current number is greater than maxNumber
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i]; // Update maxNumber
        }
    }

    // Output the maximum number
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
