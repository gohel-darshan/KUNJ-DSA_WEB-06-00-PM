#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "The temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    return 0;
}
