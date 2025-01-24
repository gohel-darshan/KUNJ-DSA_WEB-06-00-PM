#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the value of the first number: ";
    cin >> num1;
    cout << "Enter the value of the second number: ";
    cin >> num2;

    if (num1 < num2)
        cout << "The minimum value is: " << num1 << endl;
    else
        cout << "The minimum value is: " << num2 << endl;


}
