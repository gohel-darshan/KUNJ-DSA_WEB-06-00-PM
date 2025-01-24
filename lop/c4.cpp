#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter the number for the multiplication table: ";
    cin >> number;
    
    for (int i = 1; i <= number; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}
