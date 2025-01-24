#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Enter values for x and y: ";
    cin >> x >> y;
    double result = pow((x + y), 3);
    cout << "The result of (x + y)^3 is: " << result << endl;
    return 0;
}
