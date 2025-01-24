#include <iostream>
using namespace std;

int main() {
    
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    float average;

    
    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    
    average = (num1 + num2 + num3 + num4 + num5) / 5;


    cout << "The average of the five numbers is: " << average << endl;


}
