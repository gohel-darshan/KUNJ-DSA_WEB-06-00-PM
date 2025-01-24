#include <iostream>
using namespace std;

int main() {
    float maths, english, science, average;

    cout << "Enter maths marks: ";
    cin >> maths;
    cout << "Enter english marks: ";
    cin >> english;
    cout << "Enter science marks: ";
    cin >> science;

    average = (maths + english + science) / 3;

    cout << "Average mark: " << average << endl;
}