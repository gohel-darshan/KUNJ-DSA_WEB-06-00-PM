#include <iostream>
using namespace std;

int main() {
    string name, school;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // To consume the newline character left by cin
    cout << "Enter your school: ";
    getline(cin, school);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "School: " << school << endl;

    
}
