#include <iostream>
using namespace std;

int main(){
    int powerLevel;

    cout << "Enter superhero power level: ";
    cin >> powerLevel;

    if (powerLevel >= 100) {
        cout << "Grade: A1 - Top Hero" << endl;
    } else if (powerLevel >= 75) {
        cout << "Grade: A2 - Very Good" << endl;
    } else if (powerLevel >= 50) {
        cout << "Grade: B - Average Hero" << endl;
    } else {
        cout << "Grade: C - Needs Improvement" << endl;
    }
}
