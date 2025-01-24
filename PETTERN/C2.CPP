#include <iostream>
using namespace std;

int main() {
    // int rows = 5; // Number of rows for the pattern

    // Outer loop for the number of rows
    for (int i = 5; i >= 1; i--) {
        // Inner loop to print numbers from i to 5
        for (int j = i; j <= 5; j++) {
            cout << j << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }
    return 0;
}
