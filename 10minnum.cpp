#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

    // Input 10 numbers from the user
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "Enter number 5: ";
    cin >> num5;
    cout << "Enter number 6: ";
    cin >> num6;
    cout << "Enter number 7: ";
    cin >> num7;
    cout << "Enter number 8: ";
    cin >> num8;
    cout << "Enter number 9: ";
    cin >> num9;
    cout << "Enter number 10: ";
    cin >> num10;

    // Using nested ternary operator to find the minimum number
    int minNum = (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5 && num1 <= num6 && num1 <= num7 && num1 <= num8 && num1 <= num9 && num1 <= num10) ? num1 :
                 (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5 && num2 <= num6 && num2 <= num7 && num2 <= num8 && num2 <= num9 && num2 <= num10) ? num2 :
                 (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5 && num3 <= num6 && num3 <= num7 && num3 <= num8 && num3 <= num9 && num3 <= num10) ? num3 :
                 (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5 && num4 <= num6 && num4 <= num7 && num4 <= num8 && num4 <= num9 && num4 <= num10) ? num4 :
                 (num5 <= num1 && num5 <= num2 && num5 <= num3 && num5 <= num4 && num5 <= num6 && num5 <= num7 && num5 <= num8 && num5 <= num9 && num5 <= num10) ? num5 :
                 (num6 <= num1 && num6 <= num2 && num6 <= num3 && num6 <= num4 && num6 <= num5 && num6 <= num7 && num6 <= num8 && num6 <= num9 && num6 <= num10) ? num6 :
                 (num7 <= num1 && num7 <= num2 && num7 <= num3 && num7 <= num4 && num7 <= num5 && num7 <= num6 && num7 <= num8 && num7 <= num9 && num7 <= num10) ? num7 :
                 (num8 <= num1 && num8 <= num2 && num8 <= num3 && num8 <= num4 && num8 <= num5 && num8 <= num6 && num8 <= num7 && num8 <= num9 && num8 <= num10) ? num8 :
                 (num9 <= num1 && num9 <= num2 && num9 <= num3 && num9 <= num4 && num9 <= num5 && num9 <= num6 && num9 <= num7 && num9 <= num8 && num9 <= num10) ? num9 : num10;

    // Output the minimum number
    cout << "The minimum number is: " << minNum << endl;

    return 0;
}
