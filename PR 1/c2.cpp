#include <iostream>
using namespace std;

int main() {
    float baseSalary, HRA, DA, TA, grossSalary;
    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << "Enter HRA percentage: ";
    cin >> HRA;
    cout << "Enter DA percentage: ";
    cin >> DA;
    cout << "Enter TA percentage: ";
    cin >> TA;

    HRA = (HRA / 100) * baseSalary;
    DA = (DA / 100) * baseSalary;
    TA = (TA / 100) * baseSalary;

    grossSalary = baseSalary + HRA + DA + TA;

    cout << "The gross salary is: Rs. " << grossSalary << endl;
    return 0;
}
