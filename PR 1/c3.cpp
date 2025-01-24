#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;

    if (angle1 + angle2 >= 180) {
        cout << "Invalid angles. The sum of two angles must be less than 180." << endl;
    } else {
        angle3 = 180 - (angle1 + angle2);
        cout << "The third angle of the triangle is: " << angle3 << "°" << endl;
    }
}