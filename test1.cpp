#include <iostream>
using namespace std;

int main() 
{
    int mark;
    char grade;

    cout << "Enter your SCORE:";
    cin >> mark;

    
    grade = (mark >= 90) ? 'A' : 
    (mark >= 80) ? 'B'  : 
    (mark >= 70) ? 'C' : 
    (mark >= 60) ? 'D' : 
    'Fail';
    
    
    cout << "Your grade is " << grade << ". ";


    
    switch (grade) {
        case 'A':
            cout << "garde A" << endl;
            break;
        case 'B':
            cout << "garde b" << endl;
            break;
        case 'C':
            cout << "garde c" << endl;
            break;
        case 'D':
            cout << "garde d" << endl;
            break;
        case 'Fail':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
            break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') 
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } 
    else 
    {
        cout << "Please try again next time." << endl;
    }
    
}
